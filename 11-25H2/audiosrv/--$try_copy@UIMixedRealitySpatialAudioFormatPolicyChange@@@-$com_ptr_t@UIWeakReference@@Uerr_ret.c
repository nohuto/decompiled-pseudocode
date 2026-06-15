/*
 * XREFs of ??$try_copy@UIMixedRealitySpatialAudioFormatPolicyChange@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIMixedRealitySpatialAudioFormatPolicyChange@@Uerr_returncode_policy@wil@@@1@XZ @ 0x180142F34
 * Callers:
 *     wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator() @ 0x180143220 (wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_c.c)
 *     wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x1801432B0 (wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(en_ea_1801432B0.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EDB80 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_copy<IMixedRealitySpatialAudioFormatPolicyChange>(
        struct IWeakReference **a1,
        void **a2)
{
  struct IWeakReference *v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  if ( v3 )
    wil::details::weak_query_policy::query(v3, &GUID_7bed7e32_17f3_4c79_be55_800439519b3e, a2);
  return a2;
}
