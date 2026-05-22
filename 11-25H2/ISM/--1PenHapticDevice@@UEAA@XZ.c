/*
 * XREFs of ??1PenHapticDevice@@UEAA@XZ @ 0x18018BDB8
 * Callers:
 *     ??_GPenHapticDevice@@UEAAPEAXI@Z @ 0x18018BF00 (--_GPenHapticDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018B880 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil.c)
 */

void __fastcall PenHapticDevice::~PenHapticDevice(PenHapticDevice *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>>(
      v2,
      *((__int64 **)this + 10));
    std::_Deallocate<16,0>(
      *((char **)this + 9),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl((PenHapticDevice *)((char *)this + 16));
}
