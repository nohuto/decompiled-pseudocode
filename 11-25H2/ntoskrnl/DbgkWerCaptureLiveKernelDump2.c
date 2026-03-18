/*
 * XREFs of DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4B90 (DbgkWerCaptureLiveKernelDump.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     RtlStringCchLengthW @ 0x140433290 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14043FDBC (RtlStringCchCopyW.c)
 *     DbgkpWerCleanupContext @ 0x1406FCB98 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x1406FCE70 (DbgkpWerFreePool.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x1406FCE90 (DbgkpWerIsFullLiveDumpDisabled.c)
 *     DbgkpWerProcessPolicyResult @ 0x1406FCF98 (DbgkpWerProcessPolicyResult.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump2(
        NTSTRSAFE_PCWSTR pszSrc,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v13; // esi
  __int64 Pool2; // rdi
  unsigned int v15; // r10d
  int v16; // eax
  int v17; // eax
  char v18[4]; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+24h] [rbp-34h] BYREF
  __int64 v20[6]; // [rsp+28h] [rbp-30h] BYREF

  v18[0] = 1;
  v19 = 0;
  v20[0] = 0LL;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  if ( !DbgkpWerInitialized )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: called before initialization.\n");
    return 3221225635LL;
  }
  if ( DbgkpWerIsFullLiveDumpDisabled() )
  {
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  if ( !a7 )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: Called without dump control.\n");
    return 3221225485LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v13 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
      if ( v13 >= 0 )
      {
        v13 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)Pool2, v15, pszSrc);
        if ( v13 >= 0 )
        {
          v16 = DbgkpWerDefaultPolicy;
          if ( (*(_BYTE *)(a7 + 24) & 2) != 0 )
            v16 = 1;
          v19 = v16;
          *(_QWORD *)(Pool2 + 56) = a5;
          *(_QWORD *)(Pool2 + 64) = a6;
          *(_DWORD *)(Pool2 + 32) = a2;
          *(_QWORD *)(Pool2 + 40) = a3;
          *(_QWORD *)(Pool2 + 48) = a4;
          *(_QWORD *)(Pool2 + 72) = a7;
          if ( (*(_DWORD *)(a7 + 24) & 8) != 0 )
            *(_DWORD *)(Pool2 + 104) &= ~2u;
          else
            *(_DWORD *)(Pool2 + 104) |= 2u;
          v17 = WerLiveKernelCreateReport(Pool2, &v19, v20);
          v13 = v17;
          if ( v17 >= 0 )
          {
            v13 = DbgkpWerProcessPolicyResult(Pool2, v19, v20[0], v18);
            if ( !v18[0] )
              goto LABEL_25;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
              v17);
          }
        }
      }
      DbgkpWerCleanupContext(Pool2);
      DbgkpWerFreePool((void *)Pool2);
    }
    else
    {
      v13 = -1073741670;
    }
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_25;
  }
  v13 = -1073741267;
LABEL_25:
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
