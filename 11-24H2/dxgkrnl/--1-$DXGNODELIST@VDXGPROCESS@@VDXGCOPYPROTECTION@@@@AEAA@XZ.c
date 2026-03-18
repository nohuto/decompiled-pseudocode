/*
 * XREFs of ??1?$DXGNODELIST@VDXGPROCESS@@VDXGCOPYPROTECTION@@@@AEAA@XZ @ 0x140050504
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1403787F0 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>::~DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>(_QWORD *a1)
{
  __int64 result; // rax

  if ( (_QWORD *)*a1 != a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 834;
    return DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsEmpty()", 834LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
