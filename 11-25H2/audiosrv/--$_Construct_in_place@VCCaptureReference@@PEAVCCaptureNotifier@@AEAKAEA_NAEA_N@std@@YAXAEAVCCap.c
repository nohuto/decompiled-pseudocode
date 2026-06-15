/*
 * XREFs of ??$_Construct_in_place@VCCaptureReference@@PEAVCCaptureNotifier@@AEAKAEA_NAEA_N@std@@YAXAEAVCCaptureReference@@$$QEAPEAVCCaptureNotifier@@AEAKAEA_N3@Z @ 0x1800A3F0C
 * Callers:
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800750A0 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<CCaptureReference,CCaptureNotifier *,unsigned long &,bool &,bool &>(
        __int64 a1,
        __int64 *a2,
        int *a3,
        char *a4,
        char *a5)
{
  char v5; // r9
  int v6; // r8d
  char v7; // r10
  __int64 result; // rax

  v5 = *a4;
  v6 = *a3;
  v7 = *a5;
  result = *a2;
  *(_QWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = v6;
  *(_BYTE *)(a1 + 12) = v5;
  *(_BYTE *)(a1 + 13) = v7;
  return result;
}
