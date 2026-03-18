/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0131024
 * Callers:
 *     GreHintDCWnd @ 0x1C00225F0 (GreHintDCWnd.c)
 *     GreSelectRedirectionBitmap @ 0x1C004BE50 (GreSelectRedirectionBitmap.c)
 *     DxgkEngGetClientRect @ 0x1C0159930 (DxgkEngGetClientRect.c)
 *     DxgkEngIsRedirectionDC @ 0x1C026F530 (DxgkEngIsRedirectionDC.c)
 *     GreCancelDC @ 0x1C02A9A30 (GreCancelDC.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(__int64 **this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    v4 = 0;
    v3 = *v2;
    HmgDecrementShareReferenceCountEx(v2, &v4);
    if ( v4 )
      GrepDeleteDC(v3, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this + 2);
}
