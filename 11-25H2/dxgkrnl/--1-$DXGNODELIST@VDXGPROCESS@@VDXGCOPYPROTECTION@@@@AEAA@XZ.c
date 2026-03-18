/*
 * XREFs of ??1?$DXGNODELIST@VDXGPROCESS@@VDXGCOPYPROTECTION@@@@AEAA@XZ @ 0x140050A90
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x14038BE90 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>::~DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>(_QWORD *a1)
{
  NTSTATUS result; // eax

  if ( (_QWORD *)*a1 != a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 835;
    return DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsEmpty()", 835LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
