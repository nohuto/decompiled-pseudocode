/*
 * XREFs of ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180074340
 * Callers:
 *     ??_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z @ 0x180074300 (--_GBamoPeer@MPCManagerBamo_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1800B60D0 (--_GBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v5; // rcx

  v5 = (char *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFE0uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 3,
    a2,
    a3,
    a4);
}
