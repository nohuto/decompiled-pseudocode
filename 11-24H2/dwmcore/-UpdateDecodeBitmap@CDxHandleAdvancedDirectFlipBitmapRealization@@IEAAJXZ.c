/*
 * XREFs of ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8364
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180197040 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D7C10 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 * Callees:
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180063F70 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1801CFD98 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1801DC1EC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18026D6D0 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int IsValid; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  CDecodeBitmap *v5; // rdi
  int v6; // ebx
  struct ID3D11Texture2D *v7; // rax
  int v8; // eax
  int RectangleCount; // eax
  _DWORD v11[2]; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v12; // [rsp+50h] [rbp-21h] BYREF
  int *v13[10]; // [rsp+68h] [rbp-9h] BYREF

  IsValid = CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(*((_QWORD *)this + 36) + 80LL));
  v3 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IsValid, 0x114u, 0LL);
  }
  else if ( *((_BYTE *)this + 432) )
  {
    (*(void (__fastcall **)(char *, _DWORD *))(*((_QWORD *)this + 10) + 32LL))((char *)this + 80, v11);
    v12.left = 0;
    v12.top = 0;
    v12.right = v11[0];
    v12.bottom = v11[1];
    CRegion::CRegion((CRegion *)v13, (const struct MilRectU *)&v12);
    CRegion::Subtract(
      (const struct FastRegion::Internal::CRgnData **)v13,
      *((const struct FastRegion::Internal::CRgnData ***)this + 52));
    v4 = *((_QWORD *)this + 47);
    v5 = (CDecodeBitmap *)*((_QWORD *)this + 36);
    v6 = *(_DWORD *)(v4 + 232);
    v7 = (struct ID3D11Texture2D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 72) + 120LL))(v4 + 72);
    v8 = CDecodeBitmap::CopyRegion(v5, v13, v7, v6);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x127u, 0LL);
    }
    else
    {
      *(_BYTE *)(*((_QWORD *)this + 36) + 136LL) = 1;
      *((_BYTE *)this + 432) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v12 = 0LL;
        FastRegion::CRegion::GetBoundingRect(v13, &v12);
        RectangleCount = FastRegion::CRegion::GetRectangleCount(v13);
        McTemplateU0xddddd_EventWriteTransfer(
          (unsigned int)v12.top,
          &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
          *((unsigned int *)this + 24) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)this + 12)) << 32),
          RectangleCount,
          v12.left,
          v12.top,
          v12.right,
          v12.bottom);
      }
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v13);
  }
  return v3;
}
