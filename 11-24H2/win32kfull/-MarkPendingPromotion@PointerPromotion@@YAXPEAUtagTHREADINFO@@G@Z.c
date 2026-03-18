/*
 * XREFs of ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x1400A7394
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x1400A79B0 (-HasPendingPromotion@@YAHXZ.c)
 */

void __fastcall PointerPromotion::MarkPendingPromotion(PointerPromotion *this, struct tagTHREADINFO *a2)
{
  __int16 v2; // si
  __int64 UserSessionState; // rbx

  v2 = (__int16)a2;
  UserSessionState = W32GetUserSessionState(this, a2);
  if ( (unsigned int)HasPendingPromotion()
    && *(_WORD *)(UserSessionState + 16640) == v2
    && *(PointerPromotion **)(UserSessionState + 16648) == this )
  {
    *((_DWORD *)this + 310) = *(_DWORD *)(UserSessionState + 16644);
  }
}
