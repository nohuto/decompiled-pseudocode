/*
 * XREFs of ??$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800F0320
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2794 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F0028 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F2D20 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F39C0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

void __fastcall cereal::save<cereal::JSONOutputArchive,wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo>>(
        __int64 a1,
        int **a2)
{
  _QWORD *v3; // r9
  int *v4; // rbp
  int *i; // rdi
  __int64 v6; // rbx

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_DWORD *)(*(_QWORD *)(v3[58] + 8 * (((unsigned __int64)(v3[61] - 1LL + v3[60]) >> 2) & (v3[59] - 1LL)))
            + 4LL * ((*((_DWORD *)v3 + 122) - 1 + *((_DWORD *)v3 + 120)) & 3)) = 2;
  v4 = a2[1];
  for ( i = *a2; i != v4; i += 42 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v6 + 32));
    wil::save<cereal::JSONOutputArchive>(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL), i);
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v6 + 32));
  }
}
