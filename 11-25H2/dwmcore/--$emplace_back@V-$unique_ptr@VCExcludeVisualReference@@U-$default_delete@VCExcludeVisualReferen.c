/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@@Z @ 0x180220D6C
 * Callers:
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180298E4C (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180298D54 (--$_Emplace_reallocate@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisual.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 == *(_QWORD **)(a1 + 16) )
    return std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
             a1,
             *(_QWORD *)(a1 + 8),
             a2);
  v3 = *a2;
  *a2 = 0LL;
  *v2 = v3;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 8;
  return v4;
}
