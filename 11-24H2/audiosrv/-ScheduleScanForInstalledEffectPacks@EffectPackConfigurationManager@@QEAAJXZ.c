/*
 * XREFs of ?ScheduleScanForInstalledEffectPacks@EffectPackConfigurationManager@@QEAAJXZ @ 0x1800FC44C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180043528 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x1800FC990 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall EffectPackConfigurationManager::ScheduleScanForInstalledEffectPacks(PTP_WORK *pv)
{
  PTP_WORK *v2; // rbx
  PTP_WORK ThreadpoolWork; // rax
  const char *v4; // r9
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( g_pEndpointCharacteristicsCache )
  {
    v2 = pv + 11;
    ThreadpoolWork = CreateThreadpoolWork(
                       (PTP_WORK_CALLBACK)lambda_c0f9d89d1dc1952fa9e092da8bc1b7ad_::_lambda_invoker_cdecl_,
                       pv,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
      v2,
      ThreadpoolWork);
    if ( *v2 )
    {
      SubmitThreadpoolWork(*v2);
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xAE,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
               v4);
    }
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xA8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)0x8000FFFFLL,
      (__int64)"ScanForInstalledEffectPacks called before EndpointCharacteristicsCache created.",
      v5);
    return 2147549183LL;
  }
}
