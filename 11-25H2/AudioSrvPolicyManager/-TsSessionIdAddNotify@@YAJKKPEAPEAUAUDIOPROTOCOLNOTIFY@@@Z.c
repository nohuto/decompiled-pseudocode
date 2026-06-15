/*
 * XREFs of ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18000CB6C
 * Callers:
 *     TS_RegisterAudioProtocolNotification @ 0x1800070B0 (TS_RegisterAudioProtocolNotification.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x18000D15C (--1-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@X.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$construct@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V12@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@PEAX@std@@@1@QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@$$QEAV31@@Z @ 0x18003F40C (--$construct@V-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TsSessionIdAddNotify(DWORD a1, int a2, struct AUDIOPROTOCOLNOTIFY **a3)
{
  _DWORD *v6; // rax
  void *v7; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 i; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  char *v16; // r9
  __int64 result; // rax
  struct TSSession *v18; // r14
  char *v19; // rax
  __int64 v20; // rcx
  void *v21; // [rsp+20h] [rbp-48h] BYREF
  struct TSSession *v22; // [rsp+28h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _DWORD *v26; // [rsp+88h] [rbp+20h]

  v6 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v26 = v6;
  if ( v6 )
  {
    *v6 = a2;
    v6[1] = a1;
  }
  else
  {
    v7 = 0LL;
  }
  try
  {
    v21 = v7;
    if ( v7 )
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      v24 = v8;
      LODWORD(v26) = a1;
      v22 = 0LL;
      EnterCriticalSection(&stru_180067AF8);
      v23 = &stru_180067AF8;
      v9 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 4; ++i )
        v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + i) ^ (unsigned __int64)v9);
      v11 = 2 * (qword_180067B50 & v9);
      v12 = *(_QWORD *)(qword_180067B38 + 8 * v11 + 8);
      if ( v12 == qword_180067B28 )
      {
LABEL_10:
        v12 = 0LL;
      }
      else
      {
        while ( a1 != *(_DWORD *)(v12 + 16) )
        {
          if ( v12 == *(_QWORD *)(qword_180067B38 + 8 * v11) )
            goto LABEL_10;
          v12 = *(_QWORD *)(v12 + 8);
        }
      }
      v13 = qword_180067B28;
      if ( v12 )
        v13 = v12;
      if ( v13 == qword_180067B28 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
        v14 = TsSessionCreate(a1, &v22);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x43A,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v14);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4BB,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)v15);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v24);
          std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(&v21);
          return v15;
        }
        v18 = v22;
      }
      else
      {
        v18 = *(struct TSSession **)(v13 + 24);
        if ( &stru_180067AF8 )
          LeaveCriticalSection(&stru_180067AF8);
      }
      v19 = (char *)operator new(0x10uLL);
      std::_Default_allocator_traits<std::allocator<std::_Flist_node<std::unique_ptr<DuckingDescriptorAndId>,void *>>>::construct<std::unique_ptr<DuckingDescriptorAndId>,std::unique_ptr<DuckingDescriptorAndId>>(
        v20,
        v19 + 8,
        &v21,
        v19);
      *(_QWORD *)v16 = *((_QWORD *)v18 + 2);
      *((_QWORD *)v18 + 2) = v16;
      *a3 = (struct AUDIOPROTOCOLNOTIFY *)v7;
      if ( v8 )
        LeaveCriticalSection(v8);
      if ( v21 )
        operator delete(v21, (const struct std::nothrow_t *)8);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B5,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(&v21);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x4C8,
                     (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                     v16);
    return (unsigned int)v26;
  }
  return result;
}
