/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140080280
 * Callers:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAXXZ @ 0x140098710 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$inte.c)
 *     ndisIfReadHiddenFlag @ 0x140140CE0 (ndisIfReadHiddenFlag.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140149814 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140154860 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167770 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167E00 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140168320 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168A20 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x140169240 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140174910 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax

  v4 = *a1;
  if ( v4 )
    result = ZwClose(v4);
  *a1 = a2;
  return result;
}
