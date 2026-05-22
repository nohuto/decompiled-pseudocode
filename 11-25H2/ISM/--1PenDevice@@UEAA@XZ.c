/*
 * XREFs of ??1PenDevice@@UEAA@XZ @ 0x18018904C
 * Callers:
 *     ??_GPenDevice@@UEAAPEAXI@Z @ 0x180189130 (--_GPenDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180068568 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??1?$com_ptr_t@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801061E8 (--1-$com_ptr_t@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@.c)
 */

void __fastcall PenDevice::~PenDevice(PenDevice *this)
{
  __int64 v2; // rcx

  wil::com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>((__int64 *)this + 13);
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(
      v2,
      *((_QWORD *)this + 11));
    std::_Deallocate<16,0>(
      *((char **)this + 10),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  BamoImpl::BamoPenDevicePrincipalImpl::~BamoPenDevicePrincipalImpl((PenDevice *)((char *)this + 16));
}
