/*
 * XREFs of ?UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C7410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800C75C8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7688 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::UnsubscribeFromServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rbp
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 144);
  v4 = (_DWORD *)((char *)this + 152);
  if ( *((_QWORD *)this + 18) && *v4 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v6 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo(v3, v5, &v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v6);
      v8 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v7;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, (unsigned int)*v4);
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
  *v4 = 0;
  v11 = *((_QWORD *)this + 20);
  v12 = (_DWORD *)((char *)this + 168);
  if ( v11 && *v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  *v12 = 0;
  SmartCookie::Unregister((VoiceAssistantPositioner *)((char *)this + 200));
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 24);
  v13 = (__int64 *)((char *)this + 176);
  v14 = *((_QWORD *)this + 22);
  v15 = (_DWORD *)((char *)this + 184);
  if ( v14 && *v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 104LL))(v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
  *v15 = 0;
  return 0LL;
}
