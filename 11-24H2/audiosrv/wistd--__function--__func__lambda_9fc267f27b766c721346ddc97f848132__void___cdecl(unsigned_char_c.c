/*
 * XREFs of wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator() @ 0x18014BC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A07F8 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18010A530 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_copy@UIMixedRealitySpatialAudioFormatPolicyChange@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIMixedRealitySpatialAudioFormatPolicyChange@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18014B9A4 (--$try_copy@UIMixedRealitySpatialAudioFormatPolicyChange@@@-$com_ptr_t@UIWeakReference@@Uerr_ret.c)
 *     ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18014D220 (-SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl_unsigned_char_const___unsigned___int64__::operator()(
        __int64 a1,
        const void **a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  const void *v5; // rsi
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 8;
  v4 = *a3;
  v5 = *a2;
  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_copy<IMixedRealitySpatialAudioFormatPolicyChange>(
    (struct IWeakReference **)(a1 + 8),
    &v9);
  if ( v9 )
  {
    updated = CExclusiveModeListener::SpatialApplicationInfoUpdateCallback(
                WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                *(_DWORD *)(v3 + 16),
                0LL,
                *(void **)(v3 + 8),
                v5,
                v4);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x4A,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)updated);
  }
  return wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v9);
}
