/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180055878
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180055544 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180006594 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180008798 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180015620 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x180055AC0 (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18006A9E0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(CLivePreview *this, __int64 a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  char v7; // r9
  __int64 v8; // rsi
  unsigned int v9; // edi
  struct CWindowData *MDIOwner; // r8
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rsi
  _QWORD *v14; // r14
  int updated; // eax
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r8
  int v19; // eax
  int started; // eax
  void *v22[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-Ch]
  unsigned int v24; // [rsp+48h] [rbp-8h]
  struct CWindowData *v25; // [rsp+90h] [rbp+40h] BYREF
  char v26; // [rsp+A0h] [rbp+50h]

  v26 = a3;
  v5 = 0;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v22, 0LL, 0);
  v8 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v9 = v24;
    do
    {
      MDIOwner = CWindowData::GetMDIOwner(*(HWND **)(*(_QWORD *)a2 + 8 * v8));
      v25 = MDIOwner;
      if ( MDIOwner )
      {
        v11 = v9 + 1;
        if ( v9 + 1 >= v9 )
        {
          if ( v11 > v23 )
          {
            v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v22, 8, 1, &v25);
            if ( v12 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xBEu, 0LL);
            v9 = v24;
          }
          else
          {
            v6 = v9;
            *((_QWORD *)v22[0] + v9++) = MDIOwner;
            v24 = v11;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a2 + 24) );
    v7 = v26;
  }
  LODWORD(v13) = *((_DWORD *)this + 80);
  while ( 1 )
  {
    v13 = (unsigned int)(v13 - 1);
    if ( (int)v13 < 0 )
      break;
    v14 = (_QWORD *)((char *)this + 296);
    if ( !v7 || (v6 = 6 * v13, *(_DWORD *)(*v14 + 48 * v13 + 40)) )
    {
      if ( (unsigned __int8)CLivePreview::_ContainsWindow(v6, a2, *(_QWORD *)(*v14 + 48 * v13 + 24))
        || (unsigned __int8)CLivePreview::_ContainsWindow(v6, v22, v16)
        || (unsigned __int8)CLivePreview::_ContainsWindow(v6, a2, *(_QWORD *)(v17 + 48 * v13 + 32))
        || (unsigned __int8)CLivePreview::_ContainsWindow(v6, v22, v18) )
      {
        if ( *(_DWORD *)(v17 + 48 * v13 + 40) == 1 )
        {
          started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v17 + 48 * v13), 4);
          v5 = started;
          if ( started < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1FEu, 0LL);
            goto LABEL_34;
          }
          *(_DWORD *)(*v14 + 48 * v13 + 40) = 0;
        }
      }
      else if ( !*(_DWORD *)(v17 + 48 * v13 + 40) )
      {
        v19 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v17 + 48 * v13), 3);
        v5 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x207u, 0LL);
          goto LABEL_34;
        }
        *(_DWORD *)(*v14 + 48 * v13 + 40) = 1;
      }
    }
    else
    {
      updated = CVisual::UpdateOpacity(*(CVisual **)(*v14 + 48 * v13));
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1F2u, 0LL);
        goto LABEL_34;
      }
    }
    v7 = v26;
  }
  CLivePreview::_ShowHideImmersiveBackground(this);
LABEL_34:
  DynArrayImpl<0>::~DynArrayImpl<0>(v22);
  return v5;
}
