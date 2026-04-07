/*
 * XREFs of ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18003B168
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001AA6C (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x18001C650 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x18001D1E4 (-BlendColors@@YAKKKM@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x18001E584 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001E8C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_N.c)
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x1800315E4 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18006BB14 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::UpdateText(
        CTopLevelWindow *this,
        struct CTopLevelWindow::WindowFrame *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // edi
  struct CVisual *v7; // rdx
  __int64 CaptionColor; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  CBaseObject *v15; // rdx
  int inserted; // eax
  int v17; // eax
  int v18; // eax
  CBaseObject *v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-A8h]
  CBaseObject *v22; // [rsp+30h] [rbp-98h] BYREF
  tagLOGFONTW v23; // [rsp+40h] [rbp-88h] BYREF

  v6 = 0;
  v7 = (struct CVisual *)*((_QWORD *)this + 70);
  if ( (*((_BYTE *)this + 624) & 8) == 0 )
  {
    if ( v7 )
    {
      v18 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 38) + 32LL), v7);
      v6 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1AB6u, 0LL);
      }
      else
      {
        v19 = (CBaseObject *)*((_QWORD *)this + 70);
        if ( v19 )
        {
          CBaseObject::Release(v19);
          *((_QWORD *)this + 70) = 0LL;
        }
        *((_QWORD *)this + 71) = 0LL;
      }
    }
    return v6;
  }
  if ( v7 )
    goto LABEL_5;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWriteTitlebarText>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DWriteTitlebarText>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v22 = 0LL;
  v14 = CDWriteText::Create(&v22);
  v6 = v14;
  if ( v14 >= 0 )
  {
    v15 = v22;
    *((_QWORD *)this + 71) = ((unsigned __int64)v22 + 272) & -(__int64)(v22 != 0LL);
    *((_QWORD *)this + 70) = v15;
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 38) + 32LL),
                 (unsigned __int64)v15,
                 0LL,
                 1u,
                 v21);
    v6 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1A88u, 0LL);
      return v6;
    }
    v17 = *((_DWORD *)this + 22);
    if ( (v17 & 0x10000) == 0 )
    {
      *((_DWORD *)this + 22) = v17 | 0x10000;
      CVisual::PropagateDirtyChildren(this);
    }
LABEL_5:
    CaptionColor = CTopLevelWindow::GetCaptionColor(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 71) + 32LL))(*((_QWORD *)this + 71), CaptionColor);
    if ( a2 )
    {
      v10 = *(unsigned int *)(*((_QWORD *)this + 94) + 196LL);
      if ( !(_DWORD)v10 )
      {
        v11 = BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor) + 2 * (unsigned __int8)CaptionColor;
        if ( v11 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)a2 + 458))
                          + 5 * BYTE1(*((_DWORD *)a2 + 458))
                          + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)a2 + 458) > 0x400 )
        {
          v20 = 321LL;
          if ( v11 <= 0x400 )
            v20 = 292LL;
          ColorCache::GetColor(v20);
        }
        if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
          v10 = (unsigned int)BlendColors(CaptionColor, v10, 0.40000001);
      }
      (***((void (__fastcall ****)(_QWORD, __int64))this + 71))(*((_QWORD *)this + 71), v10);
    }
    memset_0(&v23, 0, sizeof(v23));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)this + 94), &v23);
    (*(void (__fastcall **)(_QWORD, tagLOGFONTW *))(**((_QWORD **)this + 71) + 8LL))(*((_QWORD *)this + 71), &v23);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 71) + 16LL))(*((_QWORD *)this + 71));
    CVisual::SetRTLMirror(*((CVisual **)this + 70), (*((_DWORD *)this + 156) & 0x20000) != 0);
    v12 = *((_DWORD *)this + 156) >> 19;
    LOBYTE(v12) = (*((_DWORD *)this + 156) & 0x80000) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 71) + 24LL))(*((_QWORD *)this + 71), v12);
    v13 = *((_DWORD *)this + 156) >> 22;
    LOBYTE(v13) = (*((_DWORD *)this + 156) & 0x400000) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 71) + 40LL))(*((_QWORD *)this + 71), v13);
    return v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1A7Bu, 0LL);
  if ( v22 )
    CBaseObject::Release(v22);
  return v6;
}
