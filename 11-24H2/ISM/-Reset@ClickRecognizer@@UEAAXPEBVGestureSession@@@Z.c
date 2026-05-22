/*
 * XREFs of ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801B4D10
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1801B4784 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 */

void __fastcall ClickRecognizer::Reset(ClickRecognizer *this, const struct GestureSession *a2)
{
  __int64 v2; // rcx

  ClickRecognizer::CancelTapAndHold(this);
  *(_WORD *)(v2 + 16) = *(_WORD *)(v2 + 16) & 0x80 | 2;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 44) = 0LL;
  *(_DWORD *)(v2 + 40) = 12;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_DWORD *)(v2 + 52) = 12;
  *(_OWORD *)(v2 + 64) = 0LL;
  *(_DWORD *)(v2 + 64) = 16;
  *(_OWORD *)(v2 + 80) = 0LL;
  *(_DWORD *)(v2 + 80) = 16;
}
