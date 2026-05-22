/*
 * XREFs of ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CF830
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800CFC20 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x1800CFD24 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180016078 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058360 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800CEC08 (_lambda_7f3c0264f4cfe5c0819e572d89a9031e_--operator()_std--shared_ptr_LegacyDeviceInfo___.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CECD0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800CF09C (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x1800CF6D8 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800D0028 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCRawInputProvider::FlushQueuedDeviceChanges(MPCRawInputProvider *this)
{
  const char *v2; // r9
  __int64 v3; // rsi
  char **v4; // rax
  char *v5; // r14
  __int64 *v6; // rdi
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int **v11; // rbx
  __int64 *i; // r15
  __int64 *v13; // rbx
  __int64 *v14; // rbx
  unsigned int *v15; // r15
  unsigned int *j; // rbx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  const __m128i **v22; // [rsp+80h] [rbp+30h] BYREF
  const __m128i **v23; // [rsp+88h] [rbp+38h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x111,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v2);
  v19 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = (char **)((char *)this + 136);
  if ( &v19 == (__int128 *)((char *)this + 136) )
  {
    v6 = (__int64 *)*((_QWORD *)&v19 + 1);
    v5 = (char *)v19;
  }
  else
  {
    v5 = *v4;
    *(_QWORD *)&v19 = *v4;
    *v4 = 0LL;
    v6 = (__int64 *)*((_QWORD *)this + 18);
    *((_QWORD *)&v19 + 1) = v6;
    *((_QWORD *)this + 18) = 0LL;
    v3 = *((_QWORD *)this + 19);
    v20 = v3;
    *((_QWORD *)this + 19) = 0LL;
  }
  v7 = (_QWORD *)((char *)this + 160);
  if ( &v17 != (__int128 *)((char *)this + 160) )
  {
    v8 = v17;
    *(_QWORD *)&v17 = *v7;
    *v7 = v8;
    v9 = *((_QWORD *)&v17 + 1);
    *((_QWORD *)&v17 + 1) = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = v9;
    v10 = v18;
    v18 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v10;
  }
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v23 = (const __m128i **)&v17;
  v22 = (const __m128i **)&v17;
  v11 = (unsigned int **)v5;
  if ( v5 != (char *)v6 )
  {
    do
    {
      if ( lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(&v22, v11) )
        break;
      v11 += 2;
    }
    while ( v11 != (unsigned int **)v6 );
  }
  if ( v11 != (unsigned int **)v6 )
  {
    for ( i = (__int64 *)(v11 + 2); i != v6; i += 2 )
    {
      if ( !lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
              &v23,
              (unsigned int **)i) )
      {
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
          v11,
          i);
        v11 += 2;
      }
    }
    if ( v11 != (unsigned int **)v6 )
    {
      v13 = std::_Move_unchecked<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *>(v6, v6, v11);
      std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>((__int64)v13, (__int64)v6);
      v6 = v13;
      *((_QWORD *)&v19 + 1) = v13;
    }
  }
  v14 = (__int64 *)v5;
  if ( v5 != (char *)v6 )
  {
    do
    {
      MPCRawInputProvider::AttachDeviceImpl((__int64)this, v14);
      v14 += 2;
    }
    while ( v14 != v6 );
  }
  v15 = (unsigned int *)*((_QWORD *)&v17 + 1);
  for ( j = (unsigned int *)v17; j != v15; ++j )
    MPCRawInputProvider::RemoveDeviceImpl(this, *j);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v17);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>((__int64)v5, (__int64)v6);
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)((v3 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
