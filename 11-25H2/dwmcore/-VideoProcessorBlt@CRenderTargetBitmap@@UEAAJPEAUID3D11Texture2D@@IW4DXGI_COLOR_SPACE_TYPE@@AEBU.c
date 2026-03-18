/*
 * XREFs of ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180176210
 * Callers:
 *     ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180176180 (-VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagREC.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180176E04 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$query_to@VIDeviceTexture@@@?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceTexture@@@Z @ 0x180176474 (--$query_to@VIDeviceTexture@@@-$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x1801764A4 (-VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::VideoProcessorBlt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 (__fastcall **v12)(_QWORD *, GUID *, __int64 *); // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v21; // [rsp+70h] [rbp-61h] BYREF
  __int64 v22; // [rsp+78h] [rbp-59h] BYREF
  __int64 v23; // [rsp+80h] [rbp-51h] BYREF
  _DWORD v24[2]; // [rsp+88h] [rbp-49h] BYREF
  _OWORD v25[2]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-21h]
  int v27; // [rsp+B8h] [rbp-19h]

  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v12 = (__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2;
  memset(v25, 0, sizeof(v25));
  ((void (__fastcall *)(_QWORD *, _OWORD *))v12[10])(a2, v25);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8, v24);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v23);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x177u, 0LL);
  }
  else
  {
    v15 = wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::query_to<IDeviceTexture>(a1 + 40, &v22);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x179u, 0LL);
    }
    else
    {
      v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 120LL))(v22);
      v17 = (**v16)(v16, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v21);
      v14 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x17Bu, 0LL);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40));
        v19 = CD3DDevice::VideoProcessorBlt(
                v18,
                v23,
                a3,
                a4,
                v25[0],
                DWORD1(v25[0]),
                a5,
                a6,
                a7,
                v21,
                v24[0],
                v24[1],
                a8);
        v14 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x195u, 0LL);
      }
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v14;
}
