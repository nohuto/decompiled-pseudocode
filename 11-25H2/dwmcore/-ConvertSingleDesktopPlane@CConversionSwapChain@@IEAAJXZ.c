/*
 * XREFs of ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18019EF74
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801714A0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802D49A0 (-Present@CConversionSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18019F174 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleDesktopPlane(CConversionSwapChain *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(_QWORD *, __int64, _QWORD **); // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  FastRegion::Internal::CRgnData *v13; // rcx
  void *v15; // [rsp+30h] [rbp-41h]
  _QWORD *v16; // [rsp+48h] [rbp-29h] BYREF
  int v17[2]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v18[6]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-1h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+7h]
  _DWORD *v21; // [rsp+80h] [rbp+Fh]
  __int64 v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24[4]; // [rsp+A0h] [rbp+2Fh] BYREF

  v2 = 0;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL) + 32LL))(
    *((_QWORD *)this + 65) + 8LL,
    v17);
  v3 = v17[0];
  *((_DWORD *)this + 219) = 0;
  *((_DWORD *)this + 218) = 0;
  *((_DWORD *)this + 220) = v3;
  *((_DWORD *)this + 221) = v17[1];
  if ( **((_DWORD **)this + 100) )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 65);
    v5 = v4 + 1;
    v6 = v4[1];
    v16 = 0LL;
    v7 = *(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD **))(v6 + 104);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *))(*v4 + 88LL))(v4, v18);
    v9 = v7(v5, v8, &v16);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x280u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, int *))(v16[1] + 24LL))(v16 + 1, v24);
      FastRegion::CRegion::BeginIterator((int **)this + 100, (__int64)v19);
      while ( (unsigned __int64)v21 < v20 )
      {
        v18[1] = *v21;
        v18[3] = v21[2];
        v10 = 2 * v23;
        v18[0] = *(_DWORD *)(v22 + 4 * v10);
        v18[2] = *(_DWORD *)(v22 + 4 * v10 + 4);
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 128LL))(v16);
        LODWORD(v15) = 1;
        v12 = CConversionSwapChain::ConvertSingleResource(
                (int)this,
                v11,
                (int)v17,
                (int)v24,
                (__int64)this + 872,
                v15,
                (__int64)this + 872,
                (__int64)v18);
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x291u, 0LL);
          break;
        }
        FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v19);
      }
      if ( v16 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    }
  }
  return v2;
}
