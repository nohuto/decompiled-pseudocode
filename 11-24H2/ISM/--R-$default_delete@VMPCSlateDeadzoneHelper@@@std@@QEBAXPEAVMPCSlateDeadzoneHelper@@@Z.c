/*
 * XREFs of ??R?$default_delete@VMPCSlateDeadzoneHelper@@@std@@QEBAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800BF848
 * Callers:
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800BF510 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800C1754 (-reset@-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<MPCSlateDeadzoneHelper>::operator()(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx

  if ( a2 )
  {
    v2 = (std::_Ref_count_base *)a2[3];
    if ( v2 )
      std::_Ref_count_base::_Decref(v2);
    operator delete(a2, (const struct std::nothrow_t *)0x20);
  }
}
