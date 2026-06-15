/*
 * XREFs of ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x18013A9C8
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013A098 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013AACC (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x18013AD28 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::vector<bool>::end(unsigned __int64 *a1, _OWORD *a2)
{
  __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  _OWORD *result; // rax

  v3 = a1[3];
  v4 = (unsigned __int64 *)a2 + 1;
  *a2 = *a1;
  if ( v3 >= 0 || *v4 >= -v3 )
  {
    v5 = *v4 + v3;
    v6 = 4 * (v5 >> 5);
  }
  else
  {
    v5 = *v4 + v3;
    v6 = -4LL - 4 * (~v5 >> 5);
  }
  *(_QWORD *)a2 += v6;
  result = a2;
  *v4 = v5;
  *v4 = v5 & 0x1F;
  return result;
}
