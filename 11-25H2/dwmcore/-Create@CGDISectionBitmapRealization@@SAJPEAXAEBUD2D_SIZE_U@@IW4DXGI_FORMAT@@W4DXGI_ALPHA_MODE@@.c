/*
 * XREFs of ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x1801031D4
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x180104AAC (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1801033E8 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGDISectionBitmapRealization::Create(
        HANDLE hObject,
        const struct D2D_SIZE_U *a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        unsigned __int8 **a6,
        struct IGDIBitmapRealization **a7)
{
  UINT32 height; // eax
  CSectionBitmapRealization *v12; // rax
  CSectionBitmapRealization *v13; // rbx
  int v14; // edi
  unsigned int v15; // eax
  HANDLE v17; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 width; // [rsp+38h] [rbp-C8h]
  UINT32 v19; // [rsp+3Ch] [rbp-C4h]
  int v20; // [rsp+40h] [rbp-C0h]
  enum DXGI_FORMAT v21; // [rsp+44h] [rbp-BCh]
  _OWORD v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  _DWORD v24[20]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h]

  *a6 = 0LL;
  *a7 = 0LL;
  memset_0(v24, 0, 0x90uLL);
  v24[12] = 0;
  v24[19] = 0;
  v24[0] = a5;
  v23 = 0LL;
  width = a2->width;
  height = a2->height;
  memset(v22, 0, sizeof(v22));
  v19 = height;
  v24[18] = 1065353216;
  v25 = _xmm;
  LODWORD(v22[0]) = 1;
  v17 = hObject;
  v20 = a3;
  v21 = a4;
  v12 = (CSectionBitmapRealization *)operator new(0x1A0uLL);
  v13 = v12;
  if ( v12 )
  {
    CSectionBitmapRealization::CSectionBitmapRealization(
      v12,
      (const struct CSM_BUFFER_ATTRIBUTES *)v24,
      (const struct CSM_REALIZATION_INFO *)v22,
      (const struct CSM_SYSMEM_SECTION_INFO *)&v17,
      1);
    *(_QWORD *)v13 = &CGDISectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    *((_QWORD *)v13 + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
    *((_QWORD *)v13 + 10) = &CGDISectionBitmapRealization::`vftable'{for `IBitmapRealization'};
    *((_QWORD *)v13 + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
    *((_QWORD *)v13 + 41) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
    *((_QWORD *)v13 + 42) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
    *((_QWORD *)v13 + 49) = &CGDISectionBitmapRealization::`vftable';
    *((_OWORD *)v13 + 25) = 0LL;
    (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v13 + 8LL))(v13);
    hObject = 0LL;
    v14 = (*(__int64 (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v13 + 72LL))(v13);
    if ( v14 >= 0 )
    {
      *a6 = (unsigned __int8 *)*((_QWORD *)v13 + 47);
      *a7 = (struct IGDIBitmapRealization *)(((unsigned __int64)v13 + 392) & -(__int64)(v13 != 0LL));
      return (unsigned int)v14;
    }
    v15 = 55;
  }
  else
  {
    v13 = 0LL;
    v14 = -2147024882;
    v15 = 50;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
  if ( hObject )
    CloseHandle(hObject);
  if ( v13 )
    (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v14;
}
