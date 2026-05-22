/*
 * XREFs of _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&)__const_&__::_1_::catch$0 @ 0x1801D491B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x1800B0E98 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Micro.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy______std::allocator_std::function_void___cdecl_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy_________::_Emplace_reallocate_std::function_void___cdecl_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy______const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(*(_QWORD *)(a2 + 120) << 6));
  throw;
}
