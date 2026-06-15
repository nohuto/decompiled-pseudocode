/*
 * XREFs of ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18000CA20
 * Callers:
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012160 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D668 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180039F88 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TsSessionIdIsMuted(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 i; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  struct TSSession *v10; // rbx
  bool v11; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v13; // [rsp+40h] [rbp+8h]
  struct TSSession *v14; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v16 = v2;
  v13 = a1;
  v14 = 0LL;
  EnterCriticalSection(&stru_180067AF8);
  v15 = &stru_180067AF8;
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v3 = 0x100000001B3LL * (*((unsigned __int8 *)&v13 + i) ^ (unsigned __int64)v3);
  v5 = 2 * (qword_180067B50 & v3);
  v6 = *(_QWORD *)(qword_180067B38 + 8 * v5 + 8);
  if ( v6 == qword_180067B28 )
  {
LABEL_7:
    v6 = 0LL;
  }
  else
  {
    while ( a1 != *(_DWORD *)(v6 + 16) )
    {
      if ( v6 == *(_QWORD *)(qword_180067B38 + 8 * v5) )
        goto LABEL_7;
      v6 = *(_QWORD *)(v6 + 8);
    }
  }
  v7 = qword_180067B28;
  if ( v6 )
    v7 = v6;
  if ( v7 != qword_180067B28 )
  {
    v10 = *(struct TSSession **)(v7 + 24);
    LeaveCriticalSection(&stru_180067AF8);
    goto LABEL_17;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  v8 = TsSessionCreate(a1, &v14);
  if ( v8 >= 0 )
  {
    v10 = v14;
LABEL_17:
    v11 = *((_DWORD *)v10 + 9) != 0;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
    return v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43A,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v8);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 1;
}
