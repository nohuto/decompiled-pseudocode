/*
 * XREFs of ?_Change_array@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXQEAU_D3D11_PARAMETER_DESC@@_K1@Z @ 0x18020B7C4
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801BF434 (--$_Reallocate@$0A@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x18028A1B8 (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<_D3D11_PARAMETER_DESC>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
