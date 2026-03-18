/*
 * XREFs of ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18020327C
 * Callers:
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x1802CD7E0 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

struct CMILPoolResource **__fastcall wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(
        struct CMILPoolResource **a1,
        __int64 a2)
{
  struct CMILPoolResource *v2; // rdi

  v2 = *a1;
  *a1 = (struct CMILPoolResource *)a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  if ( v2 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v2);
  return a1;
}
