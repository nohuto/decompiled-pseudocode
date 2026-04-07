/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18009B670
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180024D44 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800255C4 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180025698 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     ?Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z @ 0x180027BC8 (-Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009AB5C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18009ADC0 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18009B604 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

signed int __fastcall wil::details::GetLastErrorFailHr(wil::details *this, __int64 a2, __int64 a3, const char *a4)
{
  signed int result; // eax
  const char *v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  result = wil::details::GetLastErrorFail(0LL, 0LL, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
