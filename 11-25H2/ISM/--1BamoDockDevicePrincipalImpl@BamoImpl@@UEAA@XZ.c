/*
 * XREFs of ??1BamoDockDevicePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18017D5C8
 * Callers:
 *     ??_EBamoDockableDevicePrincipal@@MEAAPEAXI@Z @ 0x18017D680 (--_EBamoDockableDevicePrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoDockDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18017D6C0 (--_EBamoDockDevicePrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoDockDevicePrincipalImpl::~BamoDockDevicePrincipalImpl(
        BamoImpl::BamoDockDevicePrincipalImpl *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  void *v5; // rcx

  v5 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v5 )
    operator delete(v5, a2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    (__int64)a2,
    a3,
    a4);
}
