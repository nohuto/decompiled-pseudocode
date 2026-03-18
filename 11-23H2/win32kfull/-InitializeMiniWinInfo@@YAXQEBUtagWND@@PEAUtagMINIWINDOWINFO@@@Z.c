/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C011BEFC
 * Callers:
 *     UserGetMiniWinInfo @ 0x1C0017994 (UserGetMiniWinInfo.c)
 *     CreateSprite @ 0x1C00AB4E4 (CreateSprite.c)
 *     HintSpriteShape @ 0x1C00B2ED8 (HintSpriteShape.c)
 *     UpdateSprite @ 0x1C00B5498 (UpdateSprite.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

void __fastcall InitializeMiniWinInfo(const struct tagWND *const a1, struct tagMINIWINDOWINFO *a2)
{
  char *v2; // rdi
  __m128i *v4; // rbp
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int16 ScaledLogPixels; // di

  v2 = (char *)a1 + 40;
  v4 = (__m128i *)((char *)a2 + 16);
  *(_OWORD *)a2 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  *((_DWORD *)a2 + 11) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
  *((_QWORD *)a2 + 6) = ***(_QWORD ***)(*((_QWORD *)a1 + 3) + 8LL);
  v6 = (_OWORD *)((char *)a2 + 56);
  v7 = (_OWORD *)*((_QWORD *)a1 + 27);
  if ( v7 )
  {
    *v6 = *v7;
    *(_OWORD *)((char *)a2 + 72) = v7[1];
    *(_OWORD *)((char *)a2 + 88) = v7[2];
    *(_OWORD *)((char *)a2 + 104) = v7[3];
  }
  else
  {
    memset_0(v6, 0, 0x40uLL);
  }
  v8 = (_DWORD *)((char *)a2 + 120);
  v9 = a1 - a2;
  v10 = 4LL;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v9 + 104);
    ++v8;
    --v10;
  }
  while ( v10 );
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v12 = 0LL;
    v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v13 )
      v12 = *v13;
    if ( *(_QWORD *)(v12 + 456) )
    {
      if ( !IS_USERCRIT_OWNED_AT_ALL() )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      v14 = 0LL;
      v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v15 )
        v14 = *v15;
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v14 + 456) + 8LL) + 64LL) & 1) != 0 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)v2 + 288LL);
        if ( (v16 & 0xF) == 0 && (v16 & 0x40000000) != 0 )
        {
          v17 = *(unsigned __int16 *)(*(_QWORD *)v2 + 284LL);
          if ( (_WORD)v17 != 96 )
          {
            ScaledLogPixels = GreGetScaledLogPixels(v17);
            ScaleDPIRect(a2, (__m128i *)a2, ScaledLogPixels, 0x60u, 0LL, 0LL);
            ScaleDPIRect(v4, v4, ScaledLogPixels, 0x60u, 0LL, 0LL);
          }
        }
      }
    }
  }
}
