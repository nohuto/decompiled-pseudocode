/*
 * XREFs of _lambda_01a1570c2758217eaf2f5213a51197c0_::operator() @ 0x1800FF948
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_01a1570c2758217eaf2f5213a51197c0__void_::_Do_call @ 0x180100C60 (std--_Func_impl_no_alloc__lambda_01a1570c2758217eaf2f5213a51197c0__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OnEndpointStateChanged@CMulticastSessionManager@@UEAAXPEBG_N@Z @ 0x180100850 (-OnEndpointStateChanged@CMulticastSessionManager@@UEAAXPEBG_N@Z.c)
 *     ?OnMulticastProviderStateChanged@CMulticastSessionManager@@UEAAXPEAUIMulticastProvider@@@Z @ 0x1801008A0 (-OnMulticastProviderStateChanged@CMulticastSessionManager@@UEAAXPEAUIMulticastProvider@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_01a1570c2758217eaf2f5213a51197c0_::operator()(CMulticastSessionManager **a1)
{
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, unsigned __int16 **); // rdi
  int v11; // eax
  unsigned __int16 *v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v16; // [rsp+78h] [rbp+38h] BYREF
  int v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0LL;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v14 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))lpVtbl->EnumAudioEndpoints)(
         g_DeviceEnumerator,
         0LL,
         15LL,
         &v14);
  v4 = v3;
  if ( v3 >= 0
    && (v16 = 0,
        v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 24LL))(v14, &v16),
        v4 = v3,
        v3 >= 0) )
  {
    v5 = 0;
    if ( v16 )
    {
      while ( 1 )
      {
        v18 = 0LL;
        v6 = v14;
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v18);
        v8 = v7(v6, v5, &v18);
        v4 = v8;
        if ( v8 < 0 )
          break;
        v13 = 0LL;
        v9 = v18;
        v10 = *(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v18 + 40LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v13,
          0LL);
        v11 = v10(v9, &v13);
        v4 = v11;
        if ( v11 < 0
          || (v17 = 0,
              v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v17),
              v4 = v11,
              v11 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD2,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
            (const char *)(unsigned int)v11);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
          goto LABEL_13;
        }
        CMulticastSessionManager::OnEndpointStateChanged(*a1, v13, v17 & 1);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
        if ( ++v5 >= v16 )
          goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_13:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    }
    else
    {
LABEL_9:
      CMulticastSessionManager::OnMulticastProviderStateChanged((CMulticastSessionManager *)((char *)*a1 + 8), 0LL);
      v4 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  return v4;
}
