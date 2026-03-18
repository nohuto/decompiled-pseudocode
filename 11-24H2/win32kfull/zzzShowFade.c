/*
 * XREFs of zzzShowFade @ 0x1401E2AC0
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     zzzStartFade @ 0x1401E29B8 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14026564C (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1401E2B3C (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 */

void __fastcall zzzShowFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  int v3; // eax
  struct _BLENDFUNCTION v4; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v5; // [rsp+48h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_DWORD *)(UserSessionState + 43072);
  if ( (v3 & 4) == 0 )
  {
    v5 = 0LL;
    *(_WORD *)&v4.BlendOp = 0;
    v4.AlphaFormat = 0;
    v4.SourceConstantAlpha = (v3 & 1) != 0 ? 40 : -41;
    zzzUpdateFade(
      (struct tagPOINT *)(UserSessionState + 43048),
      (struct tagSIZE *)(UserSessionState + 43056),
      *(HDC *)(UserSessionState + 43032),
      &v5,
      &v4);
    *(_DWORD *)(UserSessionState + 43072) |= 4u;
  }
}
