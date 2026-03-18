/*
 * XREFs of ?xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400A7890
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x14023FB40 (xxxCleanupThreadPointerInputInfo.c)
 * Callees:
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1400A7930 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x1400A79B0 (-HasPendingPromotion@@YAHXZ.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1400A79DC (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402AEAC4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall xxxCleanupThreadPointerData(struct tagTHREADINFO *a1)
{
  struct tagTHREADINPUTPOINTERLIST *v1; // rbx
  __int64 v3; // rcx
  struct tagTHREADPOINTERDATA *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx

  v1 = (struct tagTHREADINFO *)((char *)a1 + 1208);
  RemoveThreadPointerHookData((struct tagTHREADINFO *)((char *)a1 + 1208));
  while ( 1 )
  {
    v4 = *(struct tagTHREADPOINTERDATA **)v1;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)v1 == v1 )
      break;
    UnlinkAndFreeThreadPointerData(v1, v4);
  }
  UserSessionState = W32GetUserSessionState(v3, v4);
  if ( a1 == *(struct tagTHREADINFO **)(UserSessionState + 16672) )
  {
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 16672) = 0LL;
    if ( *(_QWORD *)(UserSessionState + 16544) )
      *(_DWORD *)(UserSessionState + 16680) |= 1u;
  }
  if ( (unsigned int)HasPendingPromotion() )
  {
    if ( a1 == *(struct tagTHREADINFO **)(UserSessionState + 16648) )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
