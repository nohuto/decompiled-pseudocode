/*
 * XREFs of ExEnumHandleTable @ 0x1408EF990
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140597158 (IoRevokeHandlesForProcess.c)
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x1407B0F6C (EtwpObjectHandleRundown.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408EF610 (IopQueryProcessIdsUsingFile.c)
 *     ObFindHandleForObject @ 0x1408EF8E0 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x14093BD38 (ObInitProcess.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140A85E48 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 *     IopIsFileOpenOrSection @ 0x1408EFAF0 (IopIsFileOpenOrSection.c)
 *     ObpEnumFindHandleProcedure @ 0x1408EFBE0 (ObpEnumFindHandleProcedure.c)
 *     PnpHandleProcessWalkWorker @ 0x1408EFCA0 (PnpHandleProcessWalkWorker.c)
 */

__int64 __fastcall ExEnumHandleTable(
        unsigned int *a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD, _QWORD),
        __int64 a3,
        __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rbx
  unsigned __int8 v7; // si
  __int64 *v11; // rdi
  __int64 v12; // r8
  unsigned __int8 IsFileOpenOrSection; // al
  __int64 v14; // r9

  CurrentThread = KeGetCurrentThread();
  v6 = 4LL;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v11 = (__int64 *)ExpLookupHandleTableEntry(a1, 4LL);
  while ( 2 )
  {
    if ( v11 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v11);
          v12 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v12 )
            goto LABEL_8;
          ExpBlockOnLockedHandleEntry((__int64)a1, v11, v12);
        }
      }
      while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
      if ( a2 == IopIsFileOpenOrSection )
      {
        IsFileOpenOrSection = IopIsFileOpenOrSection(a1, v11, v6, a3);
      }
      else if ( a2 == ObpEnumFindHandleProcedure )
      {
        IsFileOpenOrSection = ObpEnumFindHandleProcedure(a1, v11, v6, a3);
      }
      else if ( a2 == PnpHandleProcessWalkWorker )
      {
        IsFileOpenOrSection = PnpHandleProcessWalkWorker(a1, v11, v6, a3);
      }
      else
      {
        IsFileOpenOrSection = guard_dispatch_icall_no_overrides(a1, v11, v6, a3);
      }
      v7 = IsFileOpenOrSection;
      if ( !IsFileOpenOrSection )
      {
LABEL_8:
        v14 = v6 + 4;
        if ( (v6 ^ (unsigned __int64)(v6 + 4)) >= 0x400 )
          v11 = (__int64 *)ExpLookupHandleTableEntry(a1, v6 + 8);
        else
          v11 += 2;
        v6 = v14;
        continue;
      }
      if ( a4 )
        *a4 = v6;
    }
    break;
  }
  KeLeaveCriticalRegionThread();
  return v7;
}
