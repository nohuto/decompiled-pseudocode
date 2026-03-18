/*
 * XREFs of CalcSBStuff @ 0x140258028
 * Callers:
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x140180384 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     xxxGetScrollBarInfo @ 0x140256A64 (xxxGetScrollBarInfo.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402574D0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E1754 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402E6618 (xxxDoScrollMenu.c)
 *     xxxDrawScrollBar @ 0x1402E695C (xxxDrawScrollBar.c)
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 * Callees:
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     CalcSBStuff2 @ 0x1402582D8 (CalcSBStuff2.c)
 *     WPP_RECORDER_AND_TRACE_SF_qllldddddddddddd @ 0x1402E4ECC (WPP_RECORDER_AND_TRACE_SF_qllldddddddddddd.c)
 *     _InitPwSB @ 0x1402E8494 (_InitPwSB.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // rsi
  char v6; // cl
  char v7; // al
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 UserSessionState; // rax
  int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // edi
  int v15; // ebx
  char v16; // dl
  unsigned int DpiForSystem; // eax
  unsigned int v18; // eax
  bool v19; // zf
  int v20; // r14d
  unsigned int v21; // eax
  __int64 result; // rax
  char v23; // [rsp+C8h] [rbp-80h]
  int v24; // [rsp+CCh] [rbp-7Ch]
  unsigned int v25; // [rsp+D0h] [rbp-78h]
  __int64 v26; // [rsp+E0h] [rbp-68h] BYREF
  int v27; // [rsp+E8h] [rbp-60h]
  int v28; // [rsp+ECh] [rbp-5Ch]
  __int128 v29; // [rsp+F0h] [rbp-58h] BYREF
  char v33; // [rsp+170h] [rbp+28h]

  v3 = a3;
  v29 = 0LL;
  v4 = a2;
  v5 = a1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v6 = 0;
  }
  v23 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v7 = 0;
  }
  v33 = v7;
  if ( v6 || v7 )
  {
    v26 = v5 + 40;
    v9 = *(_QWORD *)(v5 + 40);
    v24 = *(_DWORD *)(v9 + 108);
    v25 = *(_DWORD *)(v9 + 104);
    UserSessionState = W32GetUserSessionState(v25, a2);
    v11 = v24;
    v12 = v25;
    v3 = a3;
    LOBYTE(v11) = v33;
    LOBYTE(v12) = v23;
    WPP_RECORDER_AND_TRACE_SF_qllldddddddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69416));
    v5 = a1;
    v8 = (__int64 *)v26;
    v4 = a2;
  }
  else
  {
    v8 = (__int64 *)(v5 + 40);
  }
  GetRect(v5, (__int64)&v29, 33);
  v13 = *v8;
  if ( (*(_BYTE *)(*v8 + 26) & 0x40) != 0 )
  {
    v14 = *(_DWORD *)(v13 + 96) - *(_DWORD *)(v13 + 88) - DWORD2(v29);
    v15 = *(_DWORD *)(v13 + 96) - *(_DWORD *)(v13 + 88) - v29;
  }
  else
  {
    v15 = DWORD2(v29);
    v14 = v29;
  }
  if ( v3 )
  {
    v16 = *(_BYTE *)(v13 + 16) & 2;
    if ( (*(_BYTE *)(v13 + 25) & 0x40) != 0 )
    {
      LODWORD(v26) = v14;
      v27 = v14;
      if ( v16 )
      {
        DpiForSystem = GetDpiForSystem(v13);
        LODWORD(v26) = v14 - GetDpiDependentMetric(0, DpiForSystem);
      }
    }
    else
    {
      LODWORD(v26) = v15;
      v27 = v15;
      if ( v16 )
      {
        v18 = GetDpiForSystem(v13);
        v27 = v15 + GetDpiDependentMetric(0, v18);
      }
    }
    HIDWORD(v26) = DWORD1(v29);
    v28 = HIDWORD(v29);
  }
  else
  {
    v19 = (*(_BYTE *)(v13 + 16) & 4) == 0;
    v20 = HIDWORD(v29);
    HIDWORD(v26) = HIDWORD(v29);
    v28 = HIDWORD(v29);
    if ( !v19 )
    {
      v21 = GetDpiForSystem(v13);
      v28 = v20 + GetDpiDependentMetric(1, v21);
    }
    v3 = a3;
    LODWORD(v26) = v14;
    v27 = v15;
  }
  result = InitPwSB(v5);
  if ( result )
    return CalcSBStuff2(v4, &v26, *(_QWORD *)(v5 + 152) + (v3 != 0 ? 20LL : 4LL), v3);
  return result;
}
