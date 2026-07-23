/*
 * XREFs of ExReinitializeResourceLite @ 0x1402E5910
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpOwnerEntryToThread @ 0x1402E5B70 (ExpOwnerEntryToThread.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1403FECB0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14064E868 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v3; // r15d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rsi
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v6; // edx
  union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *v7; // r14
  ULONG *p_TableSize; // r13
  unsigned int i; // r14d
  struct _KTHREAD *v11; // r10
  __int64 v12; // [rsp+68h] [rbp+10h]

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    p_TableSize = &OwnerTable->TableSize;
    for ( i = 1; i < TableSize; ++i )
    {
      p_TableSize += 4;
      v12 = ExpOwnerEntryToThread(p_TableSize - 2);
      if ( v12 )
      {
        ++v3;
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*p_TableSize & 2) == 0
          && v11 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v11, 3uLL);
        }
        if ( (*p_TableSize & 1) != 0 )
        {
          PsBoostThreadIoEx((__int64)v11, 1, 0, 0LL);
          v11 = (struct _KTHREAD *)v12;
        }
        if ( (*p_TableSize & 4) != 0 )
        {
          PsBoostThreadIoQoS((__int64)v11, 1);
          v11 = (struct _KTHREAD *)v12;
        }
        if ( (*p_TableSize & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v11, 0x746C6644u);
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
      ++v3;
  }
  v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  v7 = (union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *)&Resource->OwnerEntry.0;
  if ( (*(_BYTE *)&v6 & 2) != 0 )
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
      || (v7 = (union _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60 *)&Resource->OwnerEntry.0,
          ExpResourceEnforceOwnerTransfer) )
    {
      if ( (Resource->OwnerEntry.TableSize & 2) == 0 && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
        KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (v7->TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1);
    if ( (v7->TableSize & 2) != 0 )
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
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}
