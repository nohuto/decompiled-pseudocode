/*
 * XREFs of ??$_Erase@K@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18005CCEC
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014CAB0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801516C0 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180154BDC (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z @ 0x1801A3430 (-RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Erase<unsigned long>(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (_QWORD *)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  v11 = *(_QWORD **)(v9 + 8 * v10 + 8);
  if ( v11 == v7 )
  {
LABEL_7:
    v11 = 0LL;
  }
  else
  {
    while ( *a2 != *((_DWORD *)v11 + 4) )
    {
      if ( v11 == *(_QWORD **)(v9 + 8 * v10) )
        goto LABEL_7;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( !v11 )
    return 0LL;
  if ( *(_QWORD **)(v9 + 8 * v10 + 8) == v11 )
  {
    if ( *(_QWORD **)(v9 + 8 * v10) == v11 )
      *(_QWORD *)(v9 + 8 * v10) = v7;
    else
      v7 = (_QWORD *)v11[1];
    *(_QWORD *)(v9 + 8 * v10 + 8) = v7;
  }
  else if ( *(_QWORD **)(v9 + 8 * v10) == v11 )
  {
    *(_QWORD *)(v9 + 8 * v10) = *v11;
  }
  v12 = *v11;
  --a1[2];
  *(_QWORD *)v11[1] = v12;
  *(_QWORD *)(v12 + 8) = v11[1];
  operator delete(v11, (const struct std::nothrow_t *)0x18);
  return 1LL;
}
