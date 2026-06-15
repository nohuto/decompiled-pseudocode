/*
 * XREFs of ??$_Uninitialized_fill_n@V?$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV?$allocator@I@0@@Z @ 0x18012F7F4
 * Callers:
 *     ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x18012F49C (--$_Resize_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBI@Z.c)
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013A098 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

_DWORD *__fastcall std::_Uninitialized_fill_n<std::allocator<unsigned int>>(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rbx

  v3 = a1;
  if ( *a3 )
  {
    for ( ; a2; --a2 )
      *v3++ = *a3;
    return v3;
  }
  else
  {
    v4 = a2;
    memset_0(a1, 0, 4 * a2);
    return &v3[v4];
  }
}
