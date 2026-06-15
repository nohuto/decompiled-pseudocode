/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180015870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800154E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mm.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rbx
  const unsigned __int16 *v11; // r15
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v12; // r12d
  int v13; // r13d
  DWORD v14; // ebx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 i; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  struct TSSession *v22; // rbx
  int PolicyVolumeForStreamClass; // eax
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  DWORD v28; // [rsp+98h] [rbp+48h]
  __int64 v29; // [rsp+A0h] [rbp+50h] BYREF
  struct TSSession *v30; // [rsp+A8h] [rbp+58h] BYREF

  *((_DWORD *)a3 + 3) = 1065353216;
  *((_BYTE *)a3 + 8) = 0;
  v5 = *(_QWORD *)a2;
  v29 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, __int64 *))(v5 + 24))(a2, &v29);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)(unsigned int)v6);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D6,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)v7);
    return v7;
  }
  v8 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  v9 = v8;
  v10 = v29;
  if ( v8 >= 0x18 )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)0x80070057LL);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    goto LABEL_32;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v29 + 96LL))(v29)
    && dword_180056730[v9]
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 136LL))(v10) )
  {
    LODWORD(v9) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 376LL))(v10) != 0 ? v9 : 0;
  }
  v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 40LL))(a2);
  v12 = (*(unsigned int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 72LL))(a2);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 104LL))(v29);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v25 = v15;
  v28 = v14;
  v30 = 0LL;
  EnterCriticalSection(&stru_180067AF8);
  v26 = &stru_180067AF8;
  v16 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v16 = 0x100000001B3LL * (*((unsigned __int8 *)&v28 + i) ^ (unsigned __int64)v16);
  v18 = 2 * (qword_180067B50 & v16);
  v19 = *(_QWORD *)(qword_180067B38 + 8 * v18 + 8);
  if ( v19 == qword_180067B28 )
  {
LABEL_19:
    v19 = 0LL;
  }
  else
  {
    while ( v14 != *(_DWORD *)(v19 + 16) )
    {
      if ( v19 == *(_QWORD *)(qword_180067B38 + 8 * v18) )
        goto LABEL_19;
      v19 = *(_QWORD *)(v19 + 8);
    }
  }
  v20 = qword_180067B28;
  if ( v19 )
    v20 = v19;
  if ( v20 == qword_180067B28 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
    v21 = TsSessionCreate(v14, &v30);
    v7 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v21);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C5,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v7);
      if ( v15 )
        LeaveCriticalSection(v15);
      goto LABEL_30;
    }
    v22 = v30;
  }
  else
  {
    v22 = *(struct TSSession **)(v20 + 24);
    LeaveCriticalSection(&stru_180067AF8);
  }
  PolicyVolumeForStreamClass = CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
                                 (struct TSSession *)((char *)v22 + 72),
                                 v11,
                                 v9,
                                 v13,
                                 v12,
                                 (float *)a3 + 1,
                                 (__int64 *)a3 + 2);
  v7 = PolicyVolumeForStreamClass;
  if ( PolicyVolumeForStreamClass < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6CC,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)PolicyVolumeForStreamClass);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)v7);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    goto LABEL_32;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v29);
  *(_BYTE *)a3 = 0;
  return 0LL;
}
