/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18003BF40
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180019954 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001E410 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18003C28C (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x18003C2D0 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18003E04C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18009A4F0 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18009A50C (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800DA8D8 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v1; // r14d
  __m128i v3; // xmm6
  __int64 v4; // r10
  __int64 v5; // r10
  _DWORD *v6; // r11
  __int64 v7; // rcx
  LONG left; // ebx
  LONG top; // esi
  __int64 j; // rax
  __int32 v11; // eax
  int v12; // eax
  __m128i v13; // xmm6
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r9
  LONG v17; // eax
  CRectResourceProxy *v19; // rcx
  int v20; // eax
  CSecondaryWindowRepresentation *v21; // rcx
  CSecondaryWindowRepresentation *v22; // rcx
  __int64 i; // rax
  __int32 v24; // eax
  int v25; // ecx
  LONG v26; // eax
  LONG v27; // ecx
  __m128i v28; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v29; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_RECT_F v30; // [rsp+50h] [rbp-30h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 44) || !*((_QWORD *)this + 41) )
    return v1;
  v3 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v21 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 42);
    v30.left = 0.0;
    v30.top = 0.0;
    v30.right = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v21);
    top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v30.bottom = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v22);
  }
  else
  {
    v4 = *((_QWORD *)this + 41);
    if ( (*(_BYTE *)(v4 + 36) & 2) != 0 )
    {
      for ( i = 0LL; i < 4; ++i )
        *(&v30.left + i) = (float)*(int *)(v4 + 4 * i + 56);
      left = *(_DWORD *)(v4 + 56);
      v24 = v28.m128i_i32[2];
      top = *(_DWORD *)(v4 + 60);
      v25 = *(_DWORD *)(v4 + 64) - left;
      v28.m128i_i64[0] = __PAIR64__(top, left);
      if ( v25 >= 0 )
        v24 = v25;
      v28.m128i_i32[2] = v24;
      v12 = *(_DWORD *)(v4 + 68) - top;
      if ( v12 < 0 )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( *((_QWORD *)this + 42) )
    {
      CSecondaryWindowRepresentation::GetRelativeWindowRect(*((CSecondaryWindowRepresentation **)this + 42), &v29);
      v7 = *(_QWORD *)(v5 + 24);
      if ( (*(_BYTE *)(v7 + 740) & 8) != 0
        && !*(_DWORD *)(v5 + 77)
        && v6[18] == 2
        && ((*(_DWORD *)(v7 + 116) & 0x1000000) != 0 || (*(_BYTE *)(v7 + 741) & 1) != 0) )
      {
        v29.right -= *(_DWORD *)(v7 + 304) + *(_DWORD *)(v7 + 308);
        v29.bottom -= *(_DWORD *)(v7 + 312) + *(_DWORD *)(v7 + 316);
      }
      if ( *(_BYTE *)(v5 + 32) )
      {
        v26 = v6[20];
        left = 0;
        v27 = v6[21];
        top = 0;
        *(_QWORD *)&v29.left = 0LL;
        v29.right = v26;
        v29.bottom = v27;
      }
      else
      {
        if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 41) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 53),
                                                                               *(_QWORD *)(*(_QWORD *)(v5 + 24) + 136LL)) )
          ShiftViewPortOrigin(&v29);
        left = v29.left;
        top = v29.top;
      }
      for ( j = 0LL; j < 16; j += 4LL )
        *(float *)((char *)&v30.left + j) = (float)*(int *)((char *)&v29.left + j);
      v11 = v28.m128i_i32[2];
      v28.m128i_i64[0] = __PAIR64__(top, left);
      if ( v29.right - left >= 0 )
        v11 = v29.right - left;
      v28.m128i_i32[2] = v11;
      v12 = v28.m128i_i32[3];
      if ( v29.bottom - top >= 0 )
        v12 = v29.bottom - top;
LABEL_17:
      v28.m128i_i32[3] = v12;
LABEL_18:
      v3 = _mm_loadu_si128(&v28);
      goto LABEL_19;
    }
    top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
  }
  left = _mm_cvtsi128_si32((__m128i)0LL);
LABEL_19:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v13 = *((__m128i *)this + 28);
    v14 = MulDiv(*((_DWORD *)this + 116) - left, *((_DWORD *)this + 114), *((_DWORD *)this + 118))
        + _mm_cvtsi128_si32(v13);
    v15 = MulDiv(*((_DWORD *)this + 117) - top, _mm_cvtsi128_si32(_mm_srli_si128(v13, 12)), *((_DWORD *)this + 119));
    v16 = *((_QWORD *)this + 41);
    v17 = *(_DWORD *)(v16 + 44) + _mm_cvtsi128_si32(_mm_srli_si128(v13, 4)) + v15;
    v29.left = v14 + *(_DWORD *)(v16 + 40);
    v29.top = v17;
    CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)&v29);
  }
  else
  {
    v19 = (CRectResourceProxy *)*((_QWORD *)this + 44);
    *((__m128i *)this + 29) = v3;
    v20 = CRectResourceProxy::Update(v19, &v30);
    v1 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x3B8u, 0LL);
  }
  return v1;
}
