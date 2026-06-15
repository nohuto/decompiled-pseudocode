/*
 * XREFs of ??$?4VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@$0A@@?$shared_ptr@VDuckingDescriptor@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@1@@Z @ 0x18002B548
 * Callers:
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x18002E5CC (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180012ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<DuckingDescriptor>::operator=<DuckingDescriptor,std::default_delete<DuckingDescriptor>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  _DWORD *v5; // rax
  std::_Ref_count_base *v7; // rcx

  v2 = *a2;
  v4 = 0LL;
  v5 = 0LL;
  if ( *a2 )
  {
    v5 = operator new(0x18uLL);
    if ( v5 )
    {
      v5[2] = 1;
      v5[3] = 1;
      *(_QWORD *)v5 = &std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::`vftable';
      *((_QWORD *)v5 + 2) = v2;
    }
    *a2 = 0LL;
    v4 = v2;
  }
  *a1 = v4;
  v7 = (std::_Ref_count_base *)a1[1];
  a1[1] = v5;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
