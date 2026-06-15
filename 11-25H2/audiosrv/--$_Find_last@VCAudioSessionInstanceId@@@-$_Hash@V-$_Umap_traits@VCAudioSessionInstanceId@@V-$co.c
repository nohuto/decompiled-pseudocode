/*
 * XREFs of ??$_Find_last@VCAudioSessionInstanceId@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBVCAudioSessionInstanceId@@_K@Z @ 0x18001BF10
 * Callers:
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18001BC80 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     ??$emplace@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180022278 (--$emplace@AEBU-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800223B4 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AE58 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Find_last<CAudioSessionInstanceId>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 *v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax

  v4 = a1[1];
  v7 = (__int64 *)(a1[3] + 16 * (a4 & a1[6]));
  v8 = v7[1];
  if ( v8 == v4 )
  {
    *a2 = v4;
    a2[1] = 0LL;
  }
  else
  {
    v9 = *v7;
    while ( 1 )
    {
      if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)a3) )
      {
        v10 = *(_DWORD *)(a3 + 64);
        if ( v10 == *(_DWORD *)(v8 + 80) && (v10 || *(_DWORD *)(a3 + 56) == *(_DWORD *)(v8 + 72)) )
        {
          v11 = *(_DWORD *)(a3 + 48);
          if ( v11 == *(_DWORD *)(v8 + 64) && (v11 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(a3 + 8))) )
          {
            v12 = *(_QWORD *)(a3 + 24) - *(_QWORD *)(v8 + 40);
            if ( !v12 )
              v12 = *(_QWORD *)(a3 + 32) - *(_QWORD *)(v8 + 48);
            if ( !v12 )
            {
              *a2 = *(_QWORD *)v8;
              a2[1] = v8;
              return a2;
            }
          }
        }
      }
      if ( v8 == v9 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    *a2 = v8;
    a2[1] = 0LL;
  }
  return a2;
}
