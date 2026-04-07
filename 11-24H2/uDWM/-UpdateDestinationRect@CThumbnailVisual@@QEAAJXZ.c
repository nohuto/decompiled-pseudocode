/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18003B9BC
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001E410 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001F550 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001F674 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A524 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA?AUD2D_SIZE_F@@KK@Z @ 0x18003A9BC (-ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA-AUD2D_SIZE_F@@KK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18003C28C (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x18003C2D0 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18003C2F8 (-Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180067B90 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ??$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z @ 0x18008090C (--$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18009A4F0 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18009A50C (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  char IsImmersiveIconic; // r15
  bool IsThumbnailCVIStatic; // al
  __int64 v5; // rdx
  __m128i v6; // xmm6
  bool v7; // r9
  char v8; // r13
  int v9; // esi
  int v10; // r14d
  CRectResourceProxy *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  CDesktopManager *v14; // rcx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  float *v17; // rax
  float IconicWidth; // xmm1_4
  float v19; // xmm2_4
  int v20; // eax
  int v21; // r12d
  int v22; // r15d
  int v23; // r14d
  int v24; // esi
  struct CRectangleGeometryProxy **v25; // rbx
  int v26; // eax
  CSecondaryWindowRepresentation *v28; // rcx
  _DWORD *v29; // r8
  int v30; // ecx
  __int32 v31; // eax
  int v32; // ecx
  int v33; // ecx
  __int32 v34; // eax
  int v35; // ecx
  int v36; // eax
  FLOAT v37; // xmm2_4
  CSecondaryWindowRepresentation *v38; // r9
  int IconicHeight; // eax
  int v40; // r10d
  FLOAT v41; // xmm1_4
  CSecondaryWindowRepresentation *v42; // rcx
  CSecondaryWindowRepresentation *v43; // rcx
  int v44; // eax
  CRectResourceProxy *v45; // rcx
  int v46; // eax
  int RectangleGeometry; // eax
  int v48; // edx
  int v49; // r8d
  int v50; // ecx
  int v51; // r8d
  int v52; // ecx
  struct D2D_SIZE_F v53; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v54[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v55; // [rsp+58h] [rbp-19h] BYREF
  __m128i v56; // [rsp+68h] [rbp-9h] BYREF
  struct D2D_RECT_F v57; // [rsp+78h] [rbp+7h] BYREF

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 41);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v56 = 0LL;
  v8 = *(_BYTE *)(v5 + 34);
  if ( !v8 )
  {
    if ( v5 )
    {
      v29 = *(_DWORD **)(v5 + 16);
      if ( v29 )
      {
        v30 = 0;
        v56.m128i_i32[0] = -*((_DWORD *)this + 16);
        v56.m128i_i32[1] = -*((_DWORD *)this + 17);
        if ( v29[57] - v29[55] >= 0 )
          v30 = v29[57] - v29[55];
        v31 = v56.m128i_i32[2];
        v32 = v30 - v29[68] - v29[67];
        if ( v32 > 0 )
          v31 = v32;
        v33 = 0;
        v56.m128i_i32[2] = v31;
        if ( v29[58] - v29[56] >= 0 )
          v33 = v29[58] - v29[56];
        v34 = v56.m128i_i32[3];
        v35 = v33 - v29[70] - v29[69];
        if ( v35 > 0 )
          v34 = v35;
        v56.m128i_i32[3] = v34;
        v6 = _mm_loadu_si128(&v56);
      }
    }
  }
  if ( v7 )
  {
    *((__m128i *)this + 30) = v6;
    return v2;
  }
  if ( *((_QWORD *)this + 45) && *((_QWORD *)this + 46) )
  {
    v9 = *((_DWORD *)this + 18);
    v10 = *((_DWORD *)this + 19);
    *((_QWORD *)&v55 + 1) = __PAIR64__(v10, v9);
    *(_QWORD *)&v55 = 0LL;
    if ( !v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 434) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
    if ( IsImmersiveIconic )
    {
      v36 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x3FCu, 0LL);
        return v2;
      }
      v37 = (float)(v9 / 2
                  - (int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this + 42))
                  / 2);
      v57.left = v37;
      IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v38);
      v41 = (float)(v10 / v40 - IconicHeight / v40);
      v57.top = v41;
      v57.right = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v42) + v37;
      v44 = CSecondaryWindowRepresentation::GetIconicHeight(v43);
      v45 = (CRectResourceProxy *)*((_QWORD *)this + 45);
      v57.bottom = (float)v44 + v41;
      v46 = CRectResourceProxy::Update(v45, &v57);
      v2 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x404u, 0LL);
        return v2;
      }
    }
    else
    {
      v11 = (CRectResourceProxy *)*((_QWORD *)this + 45);
      v57.left = 0.0;
      v57.top = 0.0;
      v57.right = (float)v9 + 0.0;
      v57.bottom = (float)v10 + 0.0;
      v12 = CRectResourceProxy::Update(v11, &v57);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x40Fu, 0LL);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 53);
    if ( !v13 || !*((_BYTE *)this + 434) )
    {
      v14 = 0LL;
      v53 = 0LL;
      if ( IsImmersiveIconic )
      {
        IconicWidth = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this
                                                                                 + 42));
        v53.width = IconicWidth;
        v19 = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v28);
      }
      else
      {
        if ( v13 )
        {
          v15 = 0;
          v14 = (CDesktopManager *)(unsigned int)(*((_DWORD *)this + 69) - *((_DWORD *)this + 67));
          v16 = 0;
          if ( (int)v14 >= 0 )
            v15 = *((_DWORD *)this + 69) - *((_DWORD *)this + 67);
          if ( *((_DWORD *)this + 68) - *((_DWORD *)this + 66) >= 0 )
            v16 = *((_DWORD *)this + 68) - *((_DWORD *)this + 66);
        }
        else
        {
          v15 = v10;
          v16 = v9;
        }
        v17 = (float *)CDesktopManager::ClampToMaxTextureSizeImpl(v14, (float *)v54, v16, v15);
        IconicWidth = *v17;
        v19 = v17[1];
        v53.width = *v17;
      }
      v53.height = v19;
      if ( !*((_BYTE *)this + 434)
        || (*((float *)this + 109) != IconicWidth || *((float *)this + 110) != v19)
        && (*(_DWORD *)(*((_QWORD *)this + 41) + 36LL) & 0x100000) == 0 )
      {
        v20 = CSizeResourceProxy::Update(*((CSizeResourceProxy **)this + 46), &v53);
        v2 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x42Du, 0LL);
          return v2;
        }
        *(struct D2D_SIZE_F *)((char *)this + 436) = v53;
        *((_BYTE *)this + 434) = 1;
      }
    }
    *(_OWORD *)v54 = 0LL;
    if ( v8 )
      *(_OWORD *)v54 = v55;
    else
      IntersectRectT<D2D_POINTANDSIZE_L>(v54, &v55, &v56);
    if ( CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 48) )
    {
      v24 = v54[3];
      v23 = v54[2];
      v22 = v54[1];
      v21 = v54[0];
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            v54[0],
                            v54[1],
                            v54[2],
                            v54[3],
                            (struct CRectangleGeometryProxy **)this + 48);
      v2 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x443u, 0LL);
        return v2;
      }
      v48 = *((_DWORD *)this + 111);
      v49 = *((_DWORD *)this + 18);
      v50 = *((_DWORD *)this + 19);
      LODWORD(v55) = v48;
      DWORD1(v55) = v48;
      v51 = v49 - 2 * v48;
      v52 = v50 - 2 * v48;
      *((_QWORD *)&v55 + 1) = __PAIR64__(v52, v51);
      if ( v51 <= 0 || v52 <= 0 )
        goto LABEL_21;
      if ( v8 )
      {
        v21 = v48;
        v22 = v48;
        v23 = v51;
        v24 = v52;
        goto LABEL_21;
      }
      IntersectRectT<D2D_POINTANDSIZE_L>(v54, &v55, &v56);
    }
    v21 = v54[0];
    v22 = v54[1];
    v23 = v54[2];
    v24 = v54[3];
LABEL_21:
    *((_OWORD *)this + 28) = v55;
    *((__m128i *)this + 30) = v6;
    v25 = (struct CRectangleGeometryProxy **)((char *)this + 376);
    if ( *v25 )
    {
      v26 = ResourceHelper::CreateRectangleGeometry(v21, v22, v23, v24, v25);
      v2 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x45Cu, 0LL);
    }
  }
  return v2;
}
