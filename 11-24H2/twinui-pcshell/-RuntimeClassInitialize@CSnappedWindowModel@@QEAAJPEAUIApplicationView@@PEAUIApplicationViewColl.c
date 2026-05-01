/*
 * XREFs of ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@@Z @ 0x180091E78
 * Callers:
 *     ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Z @ 0x180091D10 (--$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800921A8 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800925AC (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplic_ea_1800925AC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnappedWindowModel::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v9; // rax
  void *v10; // rcx
  _QWORD v12[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, 40);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v9[1] = 0LL;
  v12[0] = v9;
  *v9 = v12;
  LODWORD(a4) = CSnappedWindowModel::RuntimeClassInitialize(a1, a2, a3, a4, a5, v12);
  std::deque<tagRECT>::_Tidy(v12);
  v10 = (void *)v12[0];
  v12[0] = 0LL;
  std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)0x10);
  return (unsigned int)a4;
}
