/*
 * XREFs of ??4?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIDeviceTextureTarget@@@Z @ 0x180042F3C
 * Callers:
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x180042E74 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     ?AddRef@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802D69D0 (-AddRef@CDeviceTextureTarget@@WPA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v4)(__int64); // rax

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL);
    if ( (char *)v4 == (char *)CDeviceTextureTarget::AddRef )
      CDeviceTextureTarget::AddRef(a2);
    else
      v4(a2);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
