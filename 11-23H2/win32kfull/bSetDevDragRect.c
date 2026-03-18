/*
 * XREFs of bSetDevDragRect @ 0x1C00910D0
 * Callers:
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     xxxDwmStopRedirection @ 0x1C0020430 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0021F8C (zzzDwmStartRedirection.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F0D1C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F1140 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F2250 (xxxCancelTrackingForThread.c)
 *     ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x1C0239948 (-ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C00267F8 (GreDeleteSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C0091220 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreCreateSprite @ 0x1C00AB61C (GreCreateSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C4108 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0135338 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C026CF28 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C0283510 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(Gre::Base *a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rdi
  unsigned int v7; // r15d
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // ebx
  void **v15; // rbx
  __int64 *v17; // r14
  __int64 v18; // rdi
  HWND v19; // rdx
  __int64 Sprite; // rax
  unsigned int v21; // eax
  void *v22; // rax
  Gre::Base *v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  _BYTE v26[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+98h] [rbp-68h]
  _BYTE v30[144]; // [rsp+B0h] [rbp-50h] BYREF

  v25 = a3;
  v29 = 0LL;
  v4 = (HDEV)((char *)a1 + 80);
  v24 = a1;
  v7 = 1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v28, *((HSEMAPHORE *)v8 + 10));
  v27 = *((_QWORD *)v8 + 15);
  GreAcquireSemaphore(v27);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v24);
  if ( !*((_DWORD *)v4 + 276) || (v9 = 1, !*((_DWORD *)v4 + 277)) )
    v9 = 0;
  bCleanupSpriteStateRects((HDEV)a1, (struct _SPRITESTATE *)v4);
  v13 = 4LL;
  v14 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v14;
    v17 = (__int64 *)(v4 + 282);
    v18 = 4LL;
    do
    {
      memset_0(v30, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v30, 0LL);
      Sprite = GreCreateSprite((HDEV)a1, v19, 0LL, (struct tagMINIWINDOWINFO *)v30, 0x9900u, v14, 1, 0, 0, 0, 0LL);
      *v17++ = Sprite;
      v21 = Sprite != 0 ? v7 : 0;
      v7 = v21;
      --v18;
    }
    while ( v18 );
    v4 = (HDEV)((char *)a1 + 80);
    if ( v21 )
    {
      *((_DWORD *)a1 + 294) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v25, a4 & 1);
    }
  }
  else if ( v9 )
  {
    v22 = (void *)UserReferenceDwmApiPort(v11, v10, v12);
    DwmAsyncSendWindowArrangingData(v22, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v15 = (void **)(v4 + 282);
    do
    {
      if ( *v15 )
      {
        GreDeleteSprite(a1, 0LL, *v15, *((_DWORD *)v4 + 275));
        *v15 = 0LL;
      }
      ++v15;
      --v13;
    }
    while ( v13 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v28);
  return v7;
}
