/*
 * XREFs of ?InsertAt@?$DynArray@PEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@$0A@@@QEAAJAEBQEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@I@Z @ 0x1800CBF80
 * Callers:
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800CE9A4 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180026184 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *,0>::InsertAt(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  if ( a3 <= *(_DWORD *)(a1 + 24) )
  {
    v14 = (_QWORD *)a2;
    v7 = DynArrayImpl<0>::Grow(a1, 8u, 1, a4, (unsigned __int64 *)&v14);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = *(unsigned int *)(a1 + 24);
      v9 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 24) = v8 + 1;
      if ( (unsigned int)v8 > (unsigned int)v5 )
      {
        v10 = (_QWORD *)(v9 + 8 * v8);
        do
        {
          v8 = (unsigned int)(v8 - 1);
          *v10-- = *(_QWORD *)(v9 + 8 * v8);
        }
        while ( (unsigned int)v8 > (unsigned int)v5 );
      }
      v11 = v14;
      v12 = (_QWORD *)(v9 + 8 * v5);
      if ( v14 >= v12 && (unsigned __int64)v14 < v9 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 24) - 1) )
        v11 = v14 + 1;
      *v12 = *v11;
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
