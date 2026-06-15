/*
 * XREFs of ?TsSessionIdIsMuted@@YA_NK@Z @ 0x1800023C8
 * Callers:
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012AA0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D798 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180037B18 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TsSessionIdIsMuted(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 i; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct TSSession *v14; // rbx
  bool v15; // bl
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v18; // [rsp+40h] [rbp+8h]
  struct TSSession *v19; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+58h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = v2;
  v18 = a1;
  v19 = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v20 = &stru_180064A78;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)&v18 + i) ^ (unsigned __int64)v4);
  v6 = 2 * (qword_180064AD0 & v4);
  v7 = *(_QWORD *)(qword_180064AB8 + 8 * v6 + 8);
  if ( v7 == qword_180064AA8 )
  {
LABEL_8:
    v7 = 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(qword_180064AB8 + 8 * v6);
    while ( a1 != *(_DWORD *)(v7 + 16) )
    {
      if ( v7 == v3 )
        goto LABEL_8;
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  v8 = qword_180064AA8;
  if ( v7 )
    v8 = v7;
  if ( v8 != qword_180064AA8 )
  {
    v14 = *(struct TSSession **)(v8 + 24);
    LeaveCriticalSection(&stru_180064A78);
    goto LABEL_18;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
    &v20,
    qword_180064AB8,
    qword_180064AA8,
    v3);
  v9 = TsSessionCreate(a1, &v19);
  if ( v9 >= 0 )
  {
    v14 = v19;
LABEL_18:
    v15 = *((_DWORD *)v14 + 9) != 0;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
      &v21,
      v10,
      v11,
      v12);
    return v15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43A,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v9,
    v16);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 1;
}
