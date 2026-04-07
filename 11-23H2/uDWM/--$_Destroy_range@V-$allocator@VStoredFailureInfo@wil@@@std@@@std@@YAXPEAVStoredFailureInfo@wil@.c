/*
 * XREFs of ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800EEEBC
 * Callers:
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800EF90C (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x1800F0FAC (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAXQEAVStoredFailureInfo@wil@@_K1@Z @ 0x1800F2330 (-_Change_array@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18000A18C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::details::shared_buffer::reset((volatile signed __int32 **)(v3 + 152));
      v3 += 168LL;
    }
    while ( v3 != a2 );
  }
}
