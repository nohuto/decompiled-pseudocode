/*
 * XREFs of ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800C7C3C
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180026184 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewVisual,0>::InsertAt(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a2;
  v5 = DynArrayImpl<0>::Grow(a1, 0x28u, 1, a4, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *(unsigned int *)(a1 + 24);
    v8 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = v7 + 1;
    if ( (_DWORD)v7 )
    {
      v9 = v8 + 40 * v7;
      do
      {
        LODWORD(v7) = v7 - 1;
        v10 = *(_OWORD *)(v8 + 40LL * (unsigned int)v7 + 16);
        *(_OWORD *)v9 = *(_OWORD *)(v8 + 40LL * (unsigned int)v7);
        v11 = *(_QWORD *)(v8 + 40LL * (unsigned int)v7 + 32);
        *(_OWORD *)(v9 + 16) = v10;
        *(_QWORD *)(v9 + 32) = v11;
        v9 -= 40LL;
      }
      while ( (_DWORD)v7 );
    }
    v12 = v14;
    if ( v14 >= v8 && v14 < v8 + 8 * (5LL * *(unsigned int *)(a1 + 24) - 5) )
      v12 = v14 + 40;
    *(_OWORD *)v8 = *(_OWORD *)v12;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v12 + 16);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(v12 + 32);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1CBu, 0LL);
  }
  return v6;
}
