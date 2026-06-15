/*
 * XREFs of ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18009FE60
 * Callers:
 *     _lambda_a637cfb7c0d6f432862cea2c6b753eb0_::operator() @ 0x1800F6CD0 (_lambda_a637cfb7c0d6f432862cea2c6b753eb0_--operator().c)
 * Callees:
 *     ??$_Construct_in_place@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@@Z @ 0x18009FE9C (--$_Construct_in_place@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@Y.c)
 */

__int64 __fastcall std::vector<std::wstring>::push_back(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(a1, v3, a2);
  result = std::_Construct_in_place<std::wstring,std::wstring>(v3, a2);
  *(_QWORD *)(v5 + 8) += 32LL;
  return result;
}
