/*
 * XREFs of ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021928
 * Callers:
 *     ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x18003106C (-InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18006F350 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020898 (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x1800224FC (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180022938 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180022968 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180023348 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800239C8 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?InternalSetOpacity@CAtlasedImage@@IEAAXH@Z @ 0x180024554 (-InternalSetOpacity@CAtlasedImage@@IEAAXH@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180024590 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z @ 0x18002FFEC (-AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x180079258 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?SetClip@CAtlasedImage@@QEAAXAEBUtagRECT@@@Z @ 0x18007A358 (-SetClip@CAtlasedImage@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180099114 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAtlasedRectsVisual::InitializeVisualTreeClone(__int64 a1, CContainerVisual *a2, __int64 a3)
{
  unsigned int v3; // r12d
  int v6; // eax
  unsigned int v7; // edi
  const struct _MARGINS *v8; // rdx
  __int64 i; // rdi
  int v10; // esi
  __int64 v11; // rdx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v15; // rcx
  __int64 v16; // rdx
  CBaseObject *v17; // rcx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  CBaseObject *v20; // [rsp+68h] [rbp+48h] BYREF

  v3 = a3;
  v20 = 0LL;
  v6 = CContainerVisual::InitializeVisualTreeClone(a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
      (const char *)(unsigned int)v6,
      savedregs);
    v15 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      CBaseObject::Release(v15);
    }
    return v7;
  }
  else
  {
    v8 = *(const struct _MARGINS **)(a1 + 232);
    if ( v8 )
      CAtlasedRectsVisual::SetClipMargins(a2, v8);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i),
             v3) )
      {
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
        v10 = CAtlasedImage::Create(&v20);
        if ( v10 < 0 )
        {
          v16 = 276LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
            (const char *)(unsigned int)v10,
            savedregs);
          v17 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            CBaseObject::Release(v17);
          }
          return (unsigned int)v10;
        }
        CAtlasedImage::SetOffset(v20, (const struct tagPOINT *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 16LL));
        CAtlasedImage::SetSize(v20, (const struct tagSIZE *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 24LL));
        CAtlasedImage::SetInsetFromParent(
          v20,
          (const struct _MARGINS *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 32LL));
        CAtlasedImage::SetClip(v20, (const struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 48LL));
        CAtlasedImage::SetHiddenMargins(v20, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 64LL));
        CAtlasedImage::InternalSetOpacity(v20, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 68LL));
        CAtlasedImage::SetBitmapSource(
          v20,
          *(struct CBitmapSource **)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 72LL));
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i);
        if ( *(_BYTE *)(v11 + 116) )
          CAtlasedImage::SetMarginClip(v20, (struct tagRECT *)(v11 + 100));
        *((_DWORD *)v20 + 30) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * i) + 120LL);
        v10 = CAtlasedRectsVisual::AddAtlasImage(a2, v20);
        if ( v10 < 0 )
        {
          v16 = 293LL;
          goto LABEL_21;
        }
        v12 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          CBaseObject::Release(v12);
        }
      }
    }
    v13 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      CBaseObject::Release(v13);
    }
    return 0LL;
  }
}
