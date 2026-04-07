/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180006058
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x180005EBC (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800B60F0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18004D7CC (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180055C3C (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  int v1; // edi
  CBaseObject **v2; // rsi
  __int64 v4; // rax
  int v5; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  int v9; // r11d
  int v10; // ecx
  int v11; // r8d
  CBaseObject *v12; // rcx
  unsigned int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v16[4]; // [rsp+48h] [rbp-38h] BYREF
  float v17[4]; // [rsp+58h] [rbp-28h] BYREF
  double v18[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return (unsigned int)v1;
  v1 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         (char *)this + 24);
  if ( v1 < 0 )
  {
    v14 = 602;
    goto LABEL_14;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, _DWORD *))(*(_QWORD *)this + 16LL))(this, v16);
  if ( v1 < 0 )
  {
    v14 = 605;
    goto LABEL_14;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v15);
  if ( v1 < 0 )
  {
    v14 = 608;
    goto LABEL_14;
  }
  v4 = v15;
  v5 = v16[0];
  v6 = v16[1];
  v7 = v16[2];
  v8 = v16[3];
  v9 = HIDWORD(v15);
  *((_DWORD *)this + 8) = v16[0];
  *((_DWORD *)this + 9) = v6;
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 11) = v8;
  *((_QWORD *)this + 6) = v4;
  if ( !(_DWORD)v4 || (v10 = v6, !v9) )
  {
    *((_DWORD *)this + 12) = v7 - v5;
    *((_DWORD *)this + 13) = v8 - v6;
    v10 = v6;
  }
  v11 = v8 - v10;
  v12 = *v2;
  v17[1] = (float)v6;
  v17[0] = (float)v5;
  v17[2] = (float)(v7 - v5) + (float)v5;
  v18[1] = (double)v9;
  v17[3] = (float)v11 + (float)v6;
  v18[0] = (double)(int)v4;
  v1 = CCachedVisualImageProxy::Update(v12, v17, v18, 0LL);
  if ( v1 < 0 )
  {
    v14 = 640;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v14, 0LL);
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
  }
  return (unsigned int)v1;
}
