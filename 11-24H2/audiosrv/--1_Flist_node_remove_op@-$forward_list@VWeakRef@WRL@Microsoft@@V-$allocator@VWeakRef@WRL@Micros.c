/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006AEBC
 * Callers:
 *     std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___ @ 0x18009C528 (std--forward_list_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--remove_if__.c)
 *     std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_a405cf70824d0724669728a8122b89b2___ @ 0x1800A1788 (std--forward_list_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef____ea_1800A1788.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<Microsoft::WRL::WeakRef>::_Flist_node_remove_op::~_Flist_node_remove_op(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v2; // rbx

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (__int64 *)*v1;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1 + 1);
      std::_Deallocate<16,0>((char *)v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
