/*
 * XREFs of ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800045B0
 * Callers:
 *     TS_AudioProtocolNotifyRundown @ 0x180041310 (TS_AudioProtocolNotifyRundown.c)
 *     TS_UnregisterAudioProtocolNotification @ 0x180041350 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180016058 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x18001AC84 (-TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18003CB08 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdDeleteNotify(struct AUDIOPROTOCOLNOTIFY *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct TSSession *v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = *((_DWORD *)a1 + 1);
  EnterCriticalSection(&stru_180064A78);
  v4 = *(_QWORD *)(qword_180064AB8
                 + 16
                 * (qword_180064AD0 & (0x100000001B3LL
                                     * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                      * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                    * ((0x100000001B3LL
                                                                                      * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))
                 + 8);
  if ( v4 == qword_180064AA8 )
  {
LABEL_5:
    v4 = 0LL;
  }
  else
  {
    while ( v3 != *(_DWORD *)(v4 + 16) )
    {
      if ( v4 == *(_QWORD *)(qword_180064AB8
                           + 16
                           * (qword_180064AD0 & (0x100000001B3LL
                                               * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                                * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                              * ((0x100000001B3LL
                                                                                                * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))) )
        goto LABEL_5;
      v4 = *(_QWORD *)(v4 + 8);
    }
  }
  v5 = qword_180064AA8;
  if ( v4 )
    v5 = v4;
  if ( v5 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D3,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL,
      v11);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2147943568LL;
  }
  else
  {
    v7 = *(struct TSSession **)(v5 + 24);
    LeaveCriticalSection(&stru_180064A78);
    v8 = TsSessionDeleteNotify(v7, a1);
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( TsSessionMayBeDeleted(v7) )
      {
        EnterCriticalSection(&stru_180064A78);
        std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Erase<unsigned long>(
          v10,
          (char *)a1 + 4);
        LeaveCriticalSection(&stru_180064A78);
      }
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D6,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v8,
        v11);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v9;
    }
  }
}
