/*
 * XREFs of ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180026184
 * Callers:
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x1800106CC (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180022118 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800230A4 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180025CA0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180027E94 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800692D4 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800C7C3C (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?InsertAt@?$DynArray@PEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@$0A@@@QEAAJAEBQEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@I@Z @ 0x1800CBF80 (-InsertAt@-$DynArray@PEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@$0A@@@QEAAJAEBQEAUCAP.c)
 *     ?InsertAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJAEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800CC05C (-InsertAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJAEBU_DWMCaptureWindowInformation@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180094EE8 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800F49F0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800F6378 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::Grow(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  unsigned int v13; // ebp
  unsigned int v14; // r8d
  unsigned int v15; // ebp
  unsigned __int64 v16; // r8
  int v17; // eax
  int v18; // ecx
  void *v19; // rsi
  char *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned int v22; // [rsp+20h] [rbp-28h]
  void *v23; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 24);
  v23 = 0LL;
  v8 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v22 = 223;
    goto LABEL_19;
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  if ( v8 <= v9 )
    return v10;
  if ( a2 * (unsigned __int64)v8 > 0xFFFFFFFF )
  {
    v22 = 232;
LABEL_19:
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, v22, 0LL);
    return v10;
  }
  v12 = 16;
  v13 = v8 - v9;
  if ( v9 <= 0x10 || (v14 = 8092, v12 = *(_DWORD *)(a1 + 20), v9 < 0x1F9C) )
    v14 = v12;
  if ( v13 <= v14 )
    v13 = v14;
  v15 = v9 + v13;
  if ( v15 < v9 || (v16 = a2 * (unsigned __int64)v15, v16 > 0xFFFFFFFF) )
  {
    v15 = v8;
    LODWORD(v16) = a2 * v8;
  }
  if ( v15 > 0xFFFFFFFF / a2 )
  {
    v22 = 258;
    goto LABEL_19;
  }
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v17 = HrAlloc((unsigned int)v16, &v23);
    v10 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x109u, 0LL);
      return v10;
    }
    v18 = *(_DWORD *)(a1 + 24);
    v19 = v23;
    if ( v18 )
      memcpy_0(v23, *(const void **)a1, a2 * v18);
  }
  else
  {
    v20 = (char *)DefaultHeap::Realloc(*(void **)a1, (unsigned int)v16);
    v19 = v20;
    if ( !v20 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x11Cu, 0LL);
      return v10;
    }
    if ( v20 != *(char **)a1 )
    {
      if ( a5 )
      {
        v21 = *a5;
        if ( *a5 >= *(_QWORD *)a1 && v21 < *(_QWORD *)a1 + (unsigned __int64)(*(_DWORD *)(a1 + 20) * a2) )
          *a5 = (unsigned __int64)&v20[v21 - *(_QWORD *)a1];
      }
    }
  }
  *(_DWORD *)(a1 + 20) = v15;
  *(_QWORD *)a1 = v19;
  return v10;
}
