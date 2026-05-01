/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18068AC9C
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18068E914 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayo.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::GetCurrentObject();
  return a1;
}
