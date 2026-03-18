/*
 * XREFs of ??$query_to@VIDeviceTexture@@@?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceTexture@@@Z @ 0x1801D0314
 * Callers:
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1801CFD98 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1801D00B0 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::query_to<IDeviceTexture>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // rcx
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64); // rax

  v2 = *a1;
  v3 = **v2;
  if ( (char *)v3 == (char *)CDeviceTextureTarget::QueryInterface )
    return CDeviceTextureTarget::QueryInterface(v2, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a2);
  else
    return v3(v2, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a2);
}
