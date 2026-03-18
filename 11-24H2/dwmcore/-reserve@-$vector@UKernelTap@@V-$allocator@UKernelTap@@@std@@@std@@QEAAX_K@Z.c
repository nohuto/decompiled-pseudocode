/*
 * XREFs of ?reserve@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z @ 0x1801F595C
 * Callers:
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1801F5744 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801F59B0 (--$_Reallocate@$0A@@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 */

unsigned __int64 __fastcall std::vector<KernelTap>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  result = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2);
  if ( a2 > result )
  {
    if ( a2 > 0x1555555555555555LL )
      std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(a1);
    return std::vector<KernelTap>::_Reallocate<0>(a1, &v3);
  }
  return result;
}
