/*
 * XREFs of ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401C80F4
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140159430 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x140116CF0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 */

__int64 __fastcall DrvCheckGraphicsDeviceForSmoothRotation(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int16 v4; // dx
  __int64 v5; // rcx
  __int64 i; // rbx
  __int16 v7; // dx
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v9 = 0;
  if ( !a1 )
    return 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = *(_DWORD *)(v3 + 1128) ? -1 : *(_WORD *)(W32GetUserSessionState(v2) + 69008);
  if ( !(unsigned int)GetPrimaryAttachFlags(a1, v4, &v10, &v9) || !v9 )
    return 0LL;
  for ( i = *(_QWORD *)(v3 + 1096); i; i = *(_QWORD *)(i + 128) )
  {
    if ( a1 != (struct tagGRAPHICS_DEVICE *)i )
    {
      v7 = *(_DWORD *)(v3 + 1128) ? -1 : *(_WORD *)(W32GetUserSessionState(v5) + 69008);
      if ( (unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v7, &v10, &v9) && v9 )
        return 0LL;
    }
  }
  return 1LL;
}
