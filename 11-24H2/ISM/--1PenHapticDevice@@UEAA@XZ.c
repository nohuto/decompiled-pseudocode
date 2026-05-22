/*
 * XREFs of ??1PenHapticDevice@@UEAA@XZ @ 0x180188220
 * Callers:
 *     ??_GPenHapticDevice@@UEAAPEAXI@Z @ 0x180188320 (--_GPenHapticDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180187D68 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil.c)
 */

void __fastcall PenHapticDevice::~PenHapticDevice(PenHapticDevice *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>>(
      v2,
      *((_QWORD *)this + 12));
    std::_Deallocate<16,0>(
      *((char **)this + 11),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 13) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl((PenHapticDevice *)((char *)this + 16));
}
