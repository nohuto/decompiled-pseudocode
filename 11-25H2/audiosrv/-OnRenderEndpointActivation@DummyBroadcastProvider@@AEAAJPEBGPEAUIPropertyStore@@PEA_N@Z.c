/*
 * XREFs of ?OnRenderEndpointActivation@DummyBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800F7C50
 * Callers:
 *     _lambda_5376a2af323ddc5a5b83ae59d60facbc_::operator() @ 0x1800F68B0 (_lambda_5376a2af323ddc5a5b83ae59d60facbc_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AddOrVerifyTargetEndpointId@DummyBroadcastSession@@QEAAJPEBGPEA_N@Z @ 0x1800F7434 (-AddOrVerifyTargetEndpointId@DummyBroadcastSession@@QEAAJPEBGPEA_N@Z.c)
 *     ?RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800F7E08 (-RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DummyBroadcastProvider::OnRenderEndpointActivation(
        DummyBroadcastProvider *this,
        char *a2,
        struct IPropertyStore *a3,
        bool *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  DummyBroadcastSession *BroadcastSession; // rax
  const char *v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  int v15[2]; // [rsp+20h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  try
  {
    v7 = ((__int64 (*)(void))a3->lpVtbl->GetValue)();
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 65
        && LODWORD(pvar[1]) == 36
        && *(_QWORD *)(v17 + 4) == *(_QWORD *)&DUMMY_MULTICAST_PROVIDER.Data1
        && *(_QWORD *)(v17 + 12) == _mm_srli_si128((__m128i)DUMMY_MULTICAST_PROVIDER, 8).m128i_u64[0] )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
        *(_QWORD *)v15 = (char *)this + 24;
        BroadcastSession = (DummyBroadcastSession *)DummyBroadcastProvider::RetrieveBroadcastSession(
                                                      this,
                                                      v17 + 20,
                                                      1LL);
        v13 = DummyBroadcastSession::AddOrVerifyTargetEndpointId(BroadcastSession, a2, a4, v12);
        v14 = v13;
        if ( v13 >= 0 )
        {
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v15);
          PropVariantClear(pvar);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
            (const char *)(unsigned int)v13);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v15);
          PropVariantClear(pvar);
          result = v14;
        }
      }
      else
      {
        PropVariantClear(pvar);
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x246,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
        (const char *)(unsigned int)v7);
      PropVariantClear(pvar);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x251,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
                           v9);
  }
  return result;
}
