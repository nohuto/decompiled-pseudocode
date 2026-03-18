/*
 * XREFs of ?reserve@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAX_K@Z @ 0x1801BFD78
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1801C02E8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801BF434 (--$_Reallocate@$0A@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@.c)
 */

unsigned __int64 __fastcall std::vector<_D3D11_PARAMETER_DESC>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  result = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 3);
  if ( a2 > result )
  {
    if ( a2 > 0x492492492492492LL )
      std::_Xlength_error("vector too long");
    return std::vector<_D3D11_PARAMETER_DESC>::_Reallocate<0>((__int64)a1, &v3);
  }
  return result;
}
