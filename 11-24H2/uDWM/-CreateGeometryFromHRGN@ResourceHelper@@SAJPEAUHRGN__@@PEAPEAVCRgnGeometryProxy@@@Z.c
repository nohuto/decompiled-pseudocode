/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18002F428
 * Callers:
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180003D00 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x18002F370 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180063124 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800C7990 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x18002932C (-CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x18002F674 (-Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CRgnGeometryProxy **a2)
{
  CBaseObject *v2; // rdi
  int *v3; // rsi
  DWORD RegionData; // eax
  const struct std::nothrow_t *v7; // rdx
  DWORD v8; // ebx
  int *v9; // rax
  signed int v10; // eax
  signed int v11; // ebx
  int v12; // eax
  const struct std::nothrow_t *v13; // rdx
  signed int LastError; // eax
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-78h]
  struct CRgnGeometryProxy *v18; // [rsp+30h] [rbp-68h] BYREF
  int v19; // [rsp+38h] [rbp-60h] BYREF
  __int128 v20; // [rsp+3Ch] [rbp-5Ch]
  __int128 v21; // [rsp+4Ch] [rbp-4Ch]

  v2 = *a2;
  v3 = 0LL;
  v19 = 0;
  v18 = v2;
  v20 = 0LL;
  v21 = 0LL;
  if ( v2 )
  {
    CMILRefCountBase::AddRef(v2);
  }
  else
  {
    v16 = CCompositor::CreateRgnGeometryProxy(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), &v18);
    v11 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x8Bu, 0LL);
      v2 = v18;
      goto LABEL_18;
    }
    v2 = v18;
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v8 = RegionData;
    if ( !RegionData )
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      if ( v11 >= 0 )
        v11 = -2003304445;
      v17 = 144;
      goto LABEL_29;
    }
    v9 = (int *)operator new[](RegionData, v7);
    v3 = v9;
    if ( !v9 )
    {
      v11 = -2147024882;
      v17 = 147;
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v17, 0LL);
LABEL_18:
      if ( v2 )
        CBaseObject::Release(v2);
      goto LABEL_20;
    }
    memset_0(v9, 0, v8);
    SetLastError(0);
    if ( !GetRegionData(hrgn, v8, (LPRGNDATA)v3) )
    {
      v10 = GetLastError();
      v11 = v10;
      if ( v10 > 0 )
        v11 = (unsigned __int16)v10 | 0x80070000;
      if ( v11 >= 0 )
        v11 = -2003304445;
      v17 = 155;
      goto LABEL_29;
    }
  }
  else
  {
    v3 = &v19;
  }
  v12 = CRgnGeometryProxy::Update(v2, (const struct tagRECT *)v3 + 2, v3[2]);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xA4u, 0LL);
    goto LABEL_18;
  }
  if ( *a2 )
    CBaseObject::Release(*a2);
  *a2 = v2;
  if ( v2 )
  {
    CMILRefCountBase::AddRef(v2);
    goto LABEL_18;
  }
LABEL_20:
  if ( v3 && v3 != &v19 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v3, v13);
  return (unsigned int)v11;
}
