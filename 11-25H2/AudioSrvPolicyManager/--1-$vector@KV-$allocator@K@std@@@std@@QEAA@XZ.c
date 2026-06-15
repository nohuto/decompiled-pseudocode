/*
 * XREFs of ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x18001E82C
 * Callers:
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$2 @ 0x18004D3E0 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$2.c)
 *     __lambda_0a903797054c4de60318e94de109d2f9_::operator()_::_1_::dtor$0 @ 0x18004DBA4 (__lambda_0a903797054c4de60318e94de109d2f9_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned long>::~vector<unsigned long>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
