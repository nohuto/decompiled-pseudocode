/*
 * XREFs of ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x1C01F768C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x1C01F75E4 (-HasPendingPromotion@@YAHXZ.c)
 */

void __fastcall PointerPromotion::MarkPendingPromotion(PointerPromotion *this, struct tagTHREADINFO *a2)
{
  __int16 v2; // si
  __int64 v4; // rbx
  __int64 v5; // rcx

  v2 = (__int16)a2;
  v4 = SGDGetUserSessionState(this);
  if ( HasPendingPromotion(v5) && *(_WORD *)(v4 + 16280) == v2 && *(PointerPromotion **)(v4 + 16288) == this )
    *((_DWORD *)this + 290) = *(_DWORD *)(v4 + 16284);
}
