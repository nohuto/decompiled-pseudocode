/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800230A4
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180022E40 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?EnsureAtlasResource@CAtlasedImage@@AEAAJXZ @ 0x1800232BC (-EnsureAtlasResource@CAtlasedImage@@AEAAJXZ.c)
 *     ?Reset@AtlasedRects@@QEAAXXZ @ 0x180023314 (-Reset@AtlasedRects@@QEAAXXZ.c)
 *     ?Update@CAtlasedRectsMeshProxy@@QEAAJ_NHPEBUD2D_RECT_F@@1I@Z @ 0x1800233B8 (-Update@CAtlasedRectsMeshProxy@@QEAAJ_NHPEBUD2D_RECT_F@@1I@Z.c)
 *     ?IsShadowPart@CAtlasedImage@@QEBAHXZ @ 0x180023408 (-IsShadowPart@CAtlasedImage@@QEBAHXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180026184 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x180075264 (--1AtlasedRects@@QEAA@XZ.c)
 *     ?SetOpacity@CAtlasedRectsMeshProxy@@QEAAJH@Z @ 0x180077184 (-SetOpacity@CAtlasedRectsMeshProxy@@QEAAJH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct D2D_RECT_F *v6; // r9
  int v7; // r9d
  int v8; // eax
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int IsShadowPart; // eax
  int v13; // eax
  int v15; // eax
  struct D2D_RECT_F *v16[3]; // [rsp+30h] [rbp-50h] BYREF
  void *v17; // [rsp+48h] [rbp-38h]
  struct D2D_RECT_F *v18[6]; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+98h] [rbp+18h] BYREF

  v2 = CAtlasedImage::EnsureAtlasResource(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x173u, 0LL);
    return v3;
  }
  if ( (*((_BYTE *)this + 96) & 1) != 0 )
  {
    DynArrayImpl<0>::DynArrayImpl<0>(v16, 0LL, 0LL);
    DynArrayImpl<0>::DynArrayImpl<0>(v18, v4, v5);
    v18[4] = v6;
    AtlasedRects::Reset((AtlasedRects *)v16);
    v19 = 0;
    (*(void (__fastcall **)(CAtlasedImage *, int *))(*(_QWORD *)this + 32LL))(this, &v19);
    v8 = DynArrayImpl<0>::Grow((unsigned int)v16, 16, v19, v7, 0LL);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x180u, 0LL);
    }
    else
    {
      v10 = DynArrayImpl<0>::Grow((unsigned int)v18, 16, v19, v9, 0LL);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x181u, 0LL);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(CAtlasedImage *, struct D2D_RECT_F **))(*(_QWORD *)this + 16LL))(this, v16);
        v3 = v11;
        if ( v11 >= 0 )
        {
          IsShadowPart = CAtlasedImage::IsShadowPart(this);
          v13 = CAtlasedRectsMeshProxy::Update(
                  *((CAtlasedRectsMeshProxy **)this + 11),
                  IsShadowPart == 0,
                  *((_DWORD *)this + 17),
                  v16[0],
                  v18[0],
                  (unsigned int)v17);
          v3 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x191u, 0LL);
            AtlasedRects::~AtlasedRects((AtlasedRects *)v16);
            return v3;
          }
          DynArrayImpl<0>::~DynArrayImpl<0>(v18);
          DynArrayImpl<0>::~DynArrayImpl<0>(v16);
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x184u, 0LL);
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v18);
    DynArrayImpl<0>::~DynArrayImpl<0>(v16);
    return v3;
  }
  if ( (*((_BYTE *)this + 96) & 2) != 0 )
  {
    v15 = CAtlasedRectsMeshProxy::SetOpacity(*((CAtlasedRectsMeshProxy **)this + 11), *((_DWORD *)this + 17));
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x195u, 0LL);
      return v3;
    }
  }
LABEL_8:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return v3;
}
