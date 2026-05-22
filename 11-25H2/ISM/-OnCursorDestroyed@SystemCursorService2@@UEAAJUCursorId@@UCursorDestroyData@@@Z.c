/*
 * XREFs of ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800F8900
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x18002360C (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180057610 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18006144C (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@QEAU32@@Z @ 0x18007502C (-_Unchecked_erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@AEAAP.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F6AA8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_K$$QEA_K@Z @ 0x1800F7588 (--A-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800F8358 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 *     ??$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z @ 0x180144EDC (--$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180145550 (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x1801455F8 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorDestroyed(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  CursorSuppressionProcessor *v10; // rbx
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  char *v13; // rdx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  if ( SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, a2) )
  {
    v4 = (_QWORD *)(a1 + 184);
    v16 = v2;
    v5 = *(_QWORD *)std::unordered_map<unsigned __int64,unsigned __int64>::operator[]((_QWORD *)(a1 + 184), &v16);
    v6 = *(_QWORD *)(a1 + 8);
    v17 = v5;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(v6 + 112))(a1 + 8) )
    {
      v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
             (float *)(a1 + 56),
             (__int64)v15,
             &v17);
      v9 = *(_QWORD *)v8;
      if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 16LL) )
      {
        v10 = CursorSuppressionProcessor::s_processor;
        if ( CursorSuppressionProcessor::s_processor )
        {
          if ( *((_DWORD *)CursorSuppressionProcessor::s_processor + 22) )
          {
            CursorSuppressionProcessor::SuppressCursor(CursorSuppressionProcessor::s_processor, 1);
            *((_DWORD *)v10 + 22) = 1;
            TestCursorTraceLogging::StateChange<unsigned short const (&)[8]>();
            InputTraceLogging::Cursor::SetSuppressionState((unsigned int)v2, *((unsigned int *)v10 + 22));
          }
        }
      }
      *(_QWORD *)(*(_QWORD *)(v9 + 24) + 184LL) = 0LL;
    }
    v16 = v2;
    v11 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>(
            v7,
            (__int64)&v16);
    v12 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>(
                      v4,
                      v15,
                      &v16,
                      v11)[1];
    if ( v12 )
    {
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
        (__int64)v4,
        v12,
        v11 & v4[6]);
      std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Unchecked_erase((__int64)(v4 + 1), v13);
    }
  }
  return 0LL;
}
