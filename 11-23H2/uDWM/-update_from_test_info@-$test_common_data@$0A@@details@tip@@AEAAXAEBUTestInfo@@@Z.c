/*
 * XREFs of ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800F3D38
 * Callers:
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18002E0BC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180030704 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x1800F0FAC (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall tip::details::test_common_data<0>::update_from_test_info(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 20);
  *(_DWORD *)(a1 + 56) |= result;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    result = *(unsigned int *)(a2 + 16);
    *(_DWORD *)(a1 + 160) = result;
  }
  return result;
}
