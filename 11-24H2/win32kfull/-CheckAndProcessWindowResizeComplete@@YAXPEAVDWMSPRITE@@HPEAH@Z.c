/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C
 * Callers:
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1400873CC (GreWindowLayoutComplete.c)
 *     GreWindowResizeComplete @ 0x1401DA938 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401DAAE0 (GreWindowResizeStarted.c)
 *     CheckAndProcessSurfaceComplete @ 0x140220570 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1403216AC (GreCancelSynchronizedWindowResize.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x14016AADC (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x140197880 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1401DAF10 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmCheckForDeferredUpdateSpriteCommands @ 0x1401DB184 (DwmCheckForDeferredUpdateSpriteCommands.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v5; // eax
  _QWORD *v6; // r12
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rcx
  SFMLOGICALSURFACE *v10; // rdi
  int v11; // edx
  int v12; // eax
  __int64 v13; // r14
  int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // ebx
  void *v19; // rax
  unsigned int v20; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+18h] BYREF
  int v22; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v6 = (_QWORD *)*((_QWORD *)a1 + 18);
    if ( v6 )
    {
      if ( a2 || !(unsigned int)DwmCheckForDeferredUpdateSpriteCommands(*v6) )
      {
        v10 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 18);
        v22 = 0;
        v21 = 0;
        v20 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v10, (enum _HLSURF_REDIRECTIONSTYLE *)&v22, &v21, &v20, 0LL, 0LL);
        v11 = *((_DWORD *)v10 + 63);
        v12 = *((_DWORD *)a1 + 35);
        v13 = *((_QWORD *)a1 + 13);
        v14 = *((_DWORD *)a1 + 29);
        *((_QWORD *)a1 + 13) = 0LL;
        v15 = *(_QWORD *)v10;
        v16 = *(_QWORD *)a1;
        v17 = v11 & 1;
        v18 = v12 & 1 | v11 & 0xC | (2 * (v17 | v12 & 0x40 | (4 * (v12 & 0xE | 0x20))));
        v19 = (void *)UserReferenceDwmApiPort(v17);
        DwmAsyncUpdateSprite(v19, v16, v15, v18, (__int64)a1 + 72, 0LL, v22, v21, v20, v14 >= 1, v13);
      }
      v8 = (void *)UserReferenceDwmApiPort(v7);
      DwmAsyncProcessSurfaceComplete(v8);
    }
    v9 = (void *)*((_QWORD *)a1 + 12);
    *((_DWORD *)a1 + 29) = 0;
    if ( v9 )
    {
      ObfDereferenceObject(v9);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v5 = 1;
  }
  if ( a3 )
    *a3 = v5;
}
