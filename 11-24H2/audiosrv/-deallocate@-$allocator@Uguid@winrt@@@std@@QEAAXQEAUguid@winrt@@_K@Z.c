/*
 * XREFs of ?deallocate@?$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z @ 0x1800E7D1C
 * Callers:
 *     _std::vector_winrt::guid_std::allocator_winrt::guid___::_Emplace_reallocate_winrt::guid__::_1_::catch$0 @ 0x18016EC42 (_std--vector_winrt--guid_std--allocator_winrt--guid___--_Emplace_reallocate_winrt--guid__--_1_--.c)
 *     _std::vector_std::_Loop_vals_t_std::allocator_std::_Loop_vals_t___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x1801715FF (_std--vector_std--_Loop_vals_t_std--allocator_std--_Loop_vals_t___--_Resize_reallocate_std--_Val.c)
 *     _std::vector_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails_std::allocator_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails___::_Emplace_reallocate_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails__::_1_::catch$3 @ 0x18017240D (_std--vector_AtmosCheck--CommonSpatialTechInfo--SpatialTechAppDetails_std--allocator_AtmosCheck-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<winrt::guid>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(16 * a3));
}
