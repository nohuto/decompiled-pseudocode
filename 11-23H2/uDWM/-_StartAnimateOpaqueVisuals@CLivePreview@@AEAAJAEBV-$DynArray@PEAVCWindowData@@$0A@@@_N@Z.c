/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800C8CE0
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C705C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18001C4A0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x1800C7D04 (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800C8B78 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E67BC (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180107D44 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(__int64 this, __int64 a2, char a3)
{
  __int64 v4; // r13
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  struct CWindowData *MDIOwner; // r8
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rbx
  _QWORD *v15; // rax
  int updated; // eax
  _QWORD *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r8
  int started; // eax
  int v22; // eax
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  int v25; // [rsp+40h] [rbp-10h]
  unsigned int v26; // [rsp+44h] [rbp-Ch]
  unsigned int v27; // [rsp+48h] [rbp-8h]
  __int64 *v28; // [rsp+90h] [rbp+40h] BYREF
  struct CWindowData *v29; // [rsp+98h] [rbp+48h] BYREF
  char v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v4 = this;
  v5 = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v6 = 0;
  v27 = 0;
  v7 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    do
    {
      MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8 * v7));
      v29 = MDIOwner;
      if ( MDIOwner )
      {
        v9 = v6 + 1;
        if ( v6 + 1 >= v6 )
        {
          if ( v9 > v26 )
          {
            v28 = (__int64 *)&v29;
            v10 = DynArrayImpl<0>::Grow((char **)&v24, 8u, 1, 0, (unsigned __int64 *)&v28);
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
              v6 = v27;
            }
            else
            {
              v11 = v27;
              this = *v28;
              *(_QWORD *)(8 * v27 + (_QWORD)v24) = *v28;
              v6 = v11 + 1;
              v27 = v6;
            }
          }
          else
          {
            this = v6;
            *(_QWORD *)(v24 + 8LL * v6++) = MDIOwner;
            v27 = v9;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(a2 + 24) );
    a3 = v30;
  }
  v12 = *(_DWORD *)(v4 + 368) - 1;
  v13 = v12;
  if ( v12 < 0 )
  {
LABEL_35:
    CLivePreview::_ShowHideImmersiveBackground((CLivePreview *)v4);
    goto LABEL_36;
  }
  v14 = 48LL * v12;
  v15 = (_QWORD *)(v4 + 344);
  while ( a3 )
  {
    v15 = (_QWORD *)(v4 + 344);
    this = *(_QWORD *)(v4 + 344);
    if ( *(_DWORD *)(v14 + this + 40) )
      break;
    updated = CVisual::UpdateOpacity(*(CVisual **)(v14 + this));
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1F4u);
      goto LABEL_36;
    }
    v15 = (_QWORD *)(v4 + 344);
LABEL_29:
    v14 -= 48LL;
    if ( --v13 < 0 )
      goto LABEL_35;
    a3 = v30;
  }
  v17 = v15;
  v18 = *v15;
  if ( !CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v14 + *v15 + 24))
    && !CLivePreview::_ContainsWindow(this, (__int64)&v24, v19)
    && !CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v14 + v18 + 32))
    && !CLivePreview::_ContainsWindow(this, (__int64)&v24, v20) )
  {
    v15 = v17;
    if ( *(_DWORD *)(v14 + v18 + 40) )
      goto LABEL_29;
    started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v14 + v18), 3LL);
    v5 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x209u);
      goto LABEL_36;
    }
    *(_DWORD *)(v14 + *v17 + 40) = 1;
    goto LABEL_28;
  }
  v15 = v17;
  if ( *(_DWORD *)(v14 + v18 + 40) != 1 )
    goto LABEL_29;
  v22 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v14 + v18), 4LL);
  v5 = v22;
  if ( v22 >= 0 )
  {
    *(_DWORD *)(v14 + *v17 + 40) = 0;
LABEL_28:
    v15 = v17;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x200u);
LABEL_36:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v24);
  return v5;
}
