/*
 * XREFs of ??_G?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x1802597DC
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1802291B4 (--$destruct_range@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPE.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

struct CMILPoolResource **__fastcall wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>::`scalar deleting destructor'(
        struct CMILPoolResource **a1)
{
  struct CMILPoolResource *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v2);
  return a1;
}
