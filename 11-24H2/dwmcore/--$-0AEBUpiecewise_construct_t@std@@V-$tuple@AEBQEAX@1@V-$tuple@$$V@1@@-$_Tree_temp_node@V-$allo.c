/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802167F8
 * Callers:
 *     ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x180125F20 (--$_Try_emplace@AEBQEAX$$V@-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUD.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  char *v7; // rax
  __int64 v8; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = (char *)operator new(0x60uLL);
  a1[1] = v7;
  v8 = 0LL;
  *((_QWORD *)v7 + 4) = **a5;
  *(_OWORD *)(v7 + 40) = 0LL;
  *(_OWORD *)(v7 + 56) = 0LL;
  *(_OWORD *)(v7 + 72) = 0LL;
  *((_QWORD *)v7 + 11) = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
  {
    *(_BYTE *)(v8 + a1[1] + 24) = 0;
    ++v8;
  }
  while ( v8 < 2 );
  return a1;
}
