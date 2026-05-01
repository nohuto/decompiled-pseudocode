/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V?$ComPtr@UIHolographicViewTransitionNotification@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180407A28
 * Callers:
 *     _lambda_ab9f828b40129b4f40202efbf92da624_::operator() @ 0x180407EF4 (_lambda_ab9f828b40129b4f40202efbf92da624_--operator().c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V?$ComPtr@UIHolographicViewTransitionNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180409588 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V-$.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IHolographicViewTransitionNotification,Microsoft::WRL::ComPtr<IHolographicViewTransitionNotification>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IHolographicViewTransitionNotification,Microsoft::WRL::ComPtr<IHolographicViewTransitionNotification>>::Iterator::GetCurrentObject();
  return a1;
}
