/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C7B78
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800C7DFC (--$_Try_emplace@AEBK$$V@-$map@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocator.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  char *v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = (char *)operator new(0x50uLL);
  a1[1] = v7;
  *((_DWORD *)v7 + 8) = **a5;
  *((_QWORD *)v7 + 9) = 0LL;
  *(_OWORD *)(v7 + 40) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 7LL;
  *((_WORD *)v7 + 20) = 0;
  *((_DWORD *)v7 + 18) = 0;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
