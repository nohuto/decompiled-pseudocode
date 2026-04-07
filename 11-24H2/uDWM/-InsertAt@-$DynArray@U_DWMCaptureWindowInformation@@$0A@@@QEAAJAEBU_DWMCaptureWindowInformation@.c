/*
 * XREFs of ?InsertAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJAEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800CC05C
 * Callers:
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800CE9A4 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180026184 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<_DWMCaptureWindowInformation,0>::InsertAt(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // r8
  _OWORD *v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm1
  _OWORD *v13; // rcx
  _OWORD *v14; // rdx
  _OWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  if ( a3 <= *(_DWORD *)(a1 + 24) )
  {
    v16 = (_OWORD *)a2;
    v7 = DynArrayImpl<0>::Grow(a1, 0x20u, 1, a4, (unsigned __int64 *)&v16);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = *(_DWORD *)(a1 + 24);
      v9 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 24) = v8 + 1;
      if ( v8 > (unsigned int)v5 )
      {
        v10 = (_OWORD *)(v9 + 32LL * v8);
        do
        {
          v11 = 32LL * --v8;
          v12 = *(_OWORD *)(v11 + v9 + 16);
          *v10 = *(_OWORD *)(v11 + v9);
          v10[1] = v12;
          v10 -= 2;
        }
        while ( v8 > (unsigned int)v5 );
      }
      v13 = v16;
      v14 = (_OWORD *)(v9 + 32 * v5);
      if ( v16 >= v14 && (unsigned __int64)v16 < v9 + 32 * (unsigned __int64)*(unsigned int *)(a1 + 24) - 32 )
        v13 = v16 + 2;
      *v14 = *v13;
      v14[1] = v13[1];
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1CBu, 0LL);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1C1u, 0LL);
  }
  return v6;
}
