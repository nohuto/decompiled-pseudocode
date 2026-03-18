/*
 * XREFs of ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x14017CCA8
 * Callers:
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x14017CB7C (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x14017CC60 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x14022F1B8 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064ACC (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064C04 (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 */

char __fastcall IsWindowGhosted(const struct tagWND *a1)
{
  __int16 *v2; // rdx
  __int16 v3; // bx
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  v3 = *v2;
  v4 = 0;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, v2) + 19928);
  if ( v3 != *(_WORD *)(v5 + 900) && (GetGhostProp(a1, v5) || GetFrostProp(a1, v6)) )
    return 1;
  return v4;
}
