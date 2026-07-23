/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14022A090
 * Callers:
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     DifExIsResourceAcquiredSharedLiteWrapper @ 0x14061DF00 (DifExIsResourceAcquiredSharedLiteWrapper.c)
 *     CmpTestRegistryLock @ 0x140666994 (CmpTestRegistryLock.c)
 *     CmpDoReOpenTransKey @ 0x1407E74C4 (CmpDoReOpenTransKey.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409C1C10 (FsRtlAcquireFileForCcFlushEx.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1406553E4 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // cx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG v4; // edi
  __int64 ResourceIndex; // r14
  unsigned __int8 v7; // r15
  __int64 v8; // rdx
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int TableSize; // edx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v11; // edi
  unsigned int i; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    return ExpFastResourceLegacyIsAcquiredShared(Resource);
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( Resource->ActiveEntries )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
        return Resource->OwnerEntry.TableSize >> 3;
      v4 = 0;
      if ( (Flag & 0x80u) == 0 )
      {
        ResourceIndex = CurrentThread->ResourceIndex;
        LockHandle.LockQueue.Lock = &Resource->SpinLock;
        LockHandle.LockQueue.Next = 0LL;
        v7 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
        LockHandle.OldIrql = v7;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v8 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&LockHandle);
          if ( v8 )
            KxWaitForLockOwnerShip(&LockHandle, v8);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock);
        }
        OwnerTable = Resource->OwnerTable;
        if ( OwnerTable )
        {
          TableSize = OwnerTable->TableSize;
          if ( (unsigned int)ResourceIndex < TableSize
            && (struct _KTHREAD *)OwnerTable[ResourceIndex].OwnerThread == CurrentThread )
          {
            v11 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[ResourceIndex].TableSize;
LABEL_17:
            v4 = *(unsigned int *)&v11 >> 3;
          }
          else
          {
            for ( i = 1; i < TableSize; ++i )
            {
              ++OwnerTable;
              if ( (struct _KTHREAD *)OwnerTable->OwnerThread == CurrentThread )
              {
                v11 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
                goto LABEL_17;
              }
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      return v4;
    }
    else
    {
      return 0;
    }
  }
}
