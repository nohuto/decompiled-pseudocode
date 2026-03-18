/*
 * XREFs of ExReinitializeResourceLite @ 0x1402CDC90
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14024E3A0 (PsBoostThreadIoQoS.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpOwnerEntryToThread @ 0x1402CDEF0 (ExpOwnerEntryToThread.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402CEBD0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140650228 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v4; // r15d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rsi
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v7; // edx
  union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *v8; // r14
  ULONG *p_TableSize; // r13
  unsigned int i; // r14d
  __int64 v12; // r8
  struct _KTHREAD *v13; // r10
  __int64 v14; // [rsp+68h] [rbp+10h]

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v4 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    p_TableSize = &OwnerTable->TableSize;
    for ( i = 1; i < TableSize; ++i )
    {
      p_TableSize += 4;
      v14 = ExpOwnerEntryToThread(p_TableSize - 2);
      if ( v14 )
      {
        ++v4;
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*p_TableSize & 2) == 0
          && v13 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v13, 3uLL);
        }
        if ( (*p_TableSize & 1) != 0 )
        {
          PsBoostThreadIoEx((__int64)v13, 1, 0LL, 0LL);
          v13 = (struct _KTHREAD *)v14;
        }
        if ( (*p_TableSize & 4) != 0 )
        {
          PsBoostThreadIoQoS((__int64)v13, 1, v12);
          v13 = (struct _KTHREAD *)v14;
        }
        if ( (*p_TableSize & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v13, 0x746C6644u);
      }
    }
    memset_0(&OwnerTable[1], 0, 16LL * (OwnerTable->TableSize - 1));
  }
  else
  {
    TableSize = 0;
  }
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( OwnerThread )
  {
    ++TableSize;
    if ( (OwnerThread & 3) == 0 )
      ++v4;
  }
  v7 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  v8 = (union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *)&Resource->OwnerEntry.0;
  if ( (*(_BYTE *)&v7 & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_19;
  }
  if ( OwnerThread )
  {
    if ( (Resource->ReservedLowFlags & 1) != 0
      || (v8 = (union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *)&Resource->OwnerEntry.0,
          ExpResourceEnforceOwnerTransfer) )
    {
      if ( (Resource->OwnerEntry.TableSize & 2) == 0 && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
        KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    if ( (*(_BYTE *)&v7 & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0LL, 0LL);
    if ( (v8->TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1, v1);
    if ( (v8->TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_19:
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->OwnerEntry = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x905Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v4);
  return 0;
}
