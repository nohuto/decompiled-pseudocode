/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBG@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBG@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801990F8
 * Callers:
 *     ??$_Try_emplace@AEBG$$V@?$map@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x180199874 (--$_Try_emplace@AEBG$$V@-$map@GU_HIDP_VALUE_CAPS@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGU_HID.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD **a5)
{
  _WORD *v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = operator new(0x68uLL);
  a1[1] = v7;
  v7[14] = **a5;
  memset_0(v7 + 16, 0, 0x48uLL);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
