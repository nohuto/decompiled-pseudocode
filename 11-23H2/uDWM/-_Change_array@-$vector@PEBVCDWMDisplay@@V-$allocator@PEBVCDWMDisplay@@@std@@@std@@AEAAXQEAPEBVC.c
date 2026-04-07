/*
 * XREFs of ?_Change_array@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXQEAPEBVCDWMDisplay@@_K1@Z @ 0x1800BD3D0
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@QEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800BC640 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CDWMDisplay const *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
