/*
 * XREFs of ??$?0AEAPEAVCWindowData@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@AEAPEAVCWindowData@@@Z @ 0x1800BC8F8
 * Callers:
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800843E4 (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
const struct std::nothrow_t **__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<CWindowData *,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        const struct std::nothrow_t **a1,
        const struct std::nothrow_t *a2,
        __int64 a3,
        _QWORD *a4)
{
  const struct std::nothrow_t *v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = (const struct std::nothrow_t *)operator new[](0x28uLL, a2);
  a1[1] = v7;
  *((_QWORD *)v7 + 4) = *a4;
  *(_QWORD *)a1[1] = a3;
  *((_QWORD *)a1[1] + 1) = a3;
  *((_QWORD *)a1[1] + 2) = a3;
  for ( i = 0LL; i < 2; ++i )
    *((_BYTE *)a1[1] + i + 24) = 0;
  return a1;
}
