/*
 * XREFs of _lambda_a637cfb7c0d6f432862cea2c6b753eb0_::operator() @ 0x1800F6CD0
 * Callers:
 *     ?DeactivateMulticastSession@DummyBroadcastProvider@@UEAAJAEBU_GUID@@@Z @ 0x1800F74D0 (-DeactivateMulticastSession@DummyBroadcastProvider@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800540F8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18005CC3C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18009FE60 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800F7E08 (-RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall lambda_a637cfb7c0d6f432862cea2c6b753eb0_::operator()(__int64 a1)
{
  _QWORD *BroadcastSession; // rdi
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdi
  char *v9; // r15
  __int64 i; // rax
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rsi
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // esi
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  __int64 v20; // rsi
  __int64 v21; // rsi
  _QWORD *v22; // rsi
  int v23; // [rsp+20h] [rbp-88h]
  __int64 *v24; // [rsp+28h] [rbp-80h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int128 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+60h] [rbp-48h]
  _BYTE v31[32]; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  BroadcastSession = (_QWORD *)DummyBroadcastProvider::RetrieveBroadcastSession(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 0LL);
  v29 = 0LL;
  v3 = 0LL;
  v30 = 0LL;
  v4 = BroadcastSession[2];
  if ( v4 )
  {
    std::wstring::wstring((__int64)v31, v4);
    std::vector<std::wstring>::push_back((__int64)&v29, (__int64)v31);
    std::wstring::_Tidy_deallocate((__int64)v31);
    v3 = v30;
  }
  v5 = (__int64 *)BroadcastSession[3];
  v6 = (__int64 *)BroadcastSession[4];
  while ( v5 != v6 )
  {
    std::wstring::wstring((__int64)v31, *v5);
    std::vector<std::wstring>::push_back((__int64)&v29, (__int64)v31);
    std::wstring::_Tidy_deallocate((__int64)v31);
    ++v5;
    v3 = v30;
  }
  v7 = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v23 = 0;
  v9 = (char *)v29;
  for ( i = v29; ; i = v28 + 32 )
  {
    v28 = i;
    if ( i == *((_QWORD *)&v29 + 1) )
      break;
    v24 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v24);
    v12 = std::wstring::c_str(v28);
    v13 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, __int64, __int64 **))GetDevice)(
            g_DeviceEnumerator,
            v12,
            &v24);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<std::wstring>>((__int64)v9, *((__int64 *)&v29 + 1));
        std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v3 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL));
      }
      return v14;
    }
    v25 = 0LL;
    v16 = *v24;
    v25 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v16 + 32))(v24, 2LL, &v25);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x152,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
        (const char *)(unsigned int)v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<std::wstring>>((__int64)v9, *((__int64 *)&v29 + 1));
        std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v3 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL));
      }
      return v18;
    }
    (*(void (__fastcall **)(__int64, const struct _tagpropertykey *, _QWORD))(*(_QWORD *)v25 + 48LL))(
      v25,
      &PKEY_Multicast_Child_SessionDescriptor,
      *(_QWORD *)(a1 + 16));
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(***(_QWORD ***)(a1 + 24) + 48LL))(
      **(_QWORD **)(a1 + 24),
      v24,
      1LL);
    v19 = v23;
    if ( !v23 )
    {
      v20 = v8;
      v8 = v25;
      v26 = v25;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v21 = v7;
      v7 = (__int64)v24;
      v27 = v24;
      if ( v24 )
        (*(void (__fastcall **)(__int64 *))(*v24 + 8))(v24);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v19 = v23;
    }
    v23 = v19 + 1;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
  }
  if ( v7 )
  {
    v22 = *(_QWORD **)(a1 + 24);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v22 + 48LL))(*v22, v7, 0LL);
    (*(void (__fastcall **)(__int64, const struct _tagpropertykey *, _QWORD))(*(_QWORD *)v8 + 48LL))(
      v8,
      &PKEY_Multicast_Target_SessionDescriptor,
      *(_QWORD *)(a1 + 16));
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v22 + 48LL))(*v22, v7, 1LL);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>((__int64)v9, *((__int64 *)&v29 + 1));
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v3 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return 0LL;
}
