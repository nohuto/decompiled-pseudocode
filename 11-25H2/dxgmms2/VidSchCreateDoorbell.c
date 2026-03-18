/*
 * XREFs of VidSchCreateDoorbell @ 0x1400525C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

__int64 __fastcall VidSchCreateDoorbell(__int64 a1)
{
  __int64 Pool2; // rdi
  __int64 v3; // rcx
  __int64 v5; // rbx
  _BYTE v6[48]; // [rsp+50h] [rbp-38h] BYREF

  Pool2 = ExAllocatePool2(64LL, 24LL, 862087510LL);
  if ( Pool2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
    AcquireSpinLock::AcquireSpinLock(
      (AcquireSpinLock *)v6,
      (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) + 24LL) + 1984LL),
      1,
      0);
    *(_DWORD *)Pool2 = 862087510;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 8) = v5;
    *(_QWORD *)(v5 + 264) = Pool2;
    AcquireSpinLock::Release((AcquireSpinLock *)v6);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741801LL);
    WdLogGlobalForLineNumber = 2267;
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225495LL;
  }
}
