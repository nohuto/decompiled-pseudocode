/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400CB71C
 * Callers:
 *     HintSpriteShape @ 0x14002D818 (HintSpriteShape.c)
 *     CreateSprite @ 0x1400911EC (CreateSprite.c)
 *     UpdateSprite @ 0x1400CB4D8 (UpdateSprite.c)
 *     UserGetMiniWinInfo @ 0x140219148 (UserGetMiniWinInfo.c)
 * Callees:
 *     ScaleDPIRect @ 0x140098C18 (ScaleDPIRect.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
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
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
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
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v8, 0LL);
  if ( CurrentThreadNonPaged && *CurrentThreadNonPaged )
  {
    v14 = (_QWORD *)W32GetCurrentThreadNonPaged(v13, v12);
    if ( v14 )
      v14 = (_QWORD *)*v14;
    if ( v14[62] )
    {
      v17 = (_QWORD *)W32GetCurrentThreadNonPaged(v16, v15);
      if ( v17 )
        v17 = (_QWORD *)*v17;
      if ( (*(_DWORD *)(**(_QWORD **)(v17[62] + 8LL) + 64LL) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)v2 + 288LL) & 0x4000000F) == 0x40000000 )
      {
        v18 = *(unsigned __int16 *)(*(_QWORD *)v2 + 284LL);
        if ( (_WORD)v18 != 96 )
        {
          ScaledLogPixels = GreGetScaledLogPixels(v18);
          ScaleDPIRect(a2, (__m128i *)a2, ScaledLogPixels, 0x60u, 0LL, 0LL);
          ScaleDPIRect(v4, v4, ScaledLogPixels, 0x60u, 0LL, 0LL);
        }
      }
    }
  }
}
