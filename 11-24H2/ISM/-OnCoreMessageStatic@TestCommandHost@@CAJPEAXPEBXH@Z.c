/*
 * XREFs of ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x18010AF20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x18003A670 (--$_Try_emplace@AEBW4TestCommandMessageType@@$$V@-$_Hash@V-$_Umap_traits@W4TestCommandMessageTyp.c)
 *     ??$count@X@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x18003A9AC (--$count@X@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestComman.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TestCommandHost::OnCoreMessageStatic(_QWORD *a1, const void *a2, int a3, const char *a4)
{
  size_t v4; // r14
  _DWORD *v7; // rbx
  __int64 v8; // rax
  const char *v9; // r9
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  if ( (unsigned __int64)a3 < 4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      a4);
  v7 = malloc(a3);
  memcpy_0(v7, a2, v4);
  if ( std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count<void>(
         (__int64)(a1 + 9),
         (__int64)v7) )
  {
    try
    {
      v8 = std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Try_emplace<enum TestCommandMessageType const &,>(
             a1 + 9,
             (__int64)v11,
             v7);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)v8 + 32LL))(
             *(_QWORD *)(*(_QWORD *)v8 + 24LL),
             v7) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)*a1 + 184LL))(
          *a1,
          a1[1],
          v7,
          (unsigned int)v4);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xA1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
        v9);
    }
  }
  return 0LL;
}
