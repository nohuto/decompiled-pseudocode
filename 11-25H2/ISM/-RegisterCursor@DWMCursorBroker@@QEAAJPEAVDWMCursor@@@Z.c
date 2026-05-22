/*
 * XREFs of ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801C0520
 * Callers:
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x1801C0E0C (-Initialize@DWMCursor@@QEAAJXZ.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@UCursorId@@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@std@@@1@AEBUCursorId@@_K@Z @ 0x1800547BC (--$_Find_last@UCursorId@@@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UC.c)
 *     ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18007F974 (-ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@?$unordered_map@UCursorId@@PEAVDWMCursor@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x1801BF60C (--$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@-$unordered_map@UCursorId@@PEAVDWMCursor@@.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801BFB44 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::RegisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct DWMCursor *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  (*(void (__fastcall **)(struct DWMCursor *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v10);
  v4 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         v3,
         (__int64)&v10);
  if ( std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::_Find_last<CursorId>(
         (_QWORD *)this + 6,
         v8,
         &v10,
         v4)[1] )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x269,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL,
      v8[0]);
  std::unordered_map<CursorId,DWMCursor *,CursorIdHash,std::equal_to<CursorId>,std::allocator<std::pair<CursorId const,DWMCursor *>>>::_Insert_or_assign<CursorId const &,DWMCursor * &>(
    (float *)this + 12,
    (__int64)v8,
    &v10,
    &v11);
  v5 = 0;
  v6 = (_QWORD *)((char *)this + 216);
  do
  {
    if ( *v6 )
      DWMCursorBroker::CreateMotionTransformAndVerifySend(this, v11, v5);
    ++v5;
    v6 += 3;
  }
  while ( v5 < 0xA );
  if ( (unsigned int)(v10 - 1) <= 1 )
    DWMCursorBroker::ArbitrateCursor(this, v11);
  return 0LL;
}
