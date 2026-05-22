/*
 * XREFs of ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x1801C7D20
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@1@AEBUCursorId@@@Z @ 0x18006B5B0 (--$find@X@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursor.c)
 */

__int64 __fastcall DWMCursorBroker::SetClosestInteractiveBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // rcx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v11 = a2;
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find<void>(
    (_QWORD *)(a1 + 40),
    &v12,
    &v11);
  if ( v12 != *(_QWORD *)(a1 + 48) )
  {
    v6 = *(_DWORD **)(v12 + 24);
    v7 = a3[1];
    v8 = a3[2];
    v9 = a3[3];
    v6[24] = *a3;
    v6[25] = v7;
    v6[26] = v8;
    v6[27] = v9;
  }
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
