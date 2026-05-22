/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801A0EC8
 * Callers:
 *     ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801A0648 (--1-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A0654 (--1Edge@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A1F1C (--1-$_Tidy_guard@V-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-.c)
 *     ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x1801A1F80 (--4Edge@@QEAAAEAV0@$$QEAV0@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A05D8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
      (__int64 *)v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
