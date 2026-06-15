/*
 * XREFs of ?CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180166898
 * Callers:
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x1801665D4 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_to_nothrow@UIAudioSystemEffectsPropertyStoreInternal@@AEAPEAUIAudioSystemEffectsPropertyStore@@@wil@@YAJAEAPEAUIAudioSystemEffectsPropertyStore@@PEAPEAUIAudioSystemEffectsPropertyStoreInternal@@@Z @ 0x1801664F8 (--$com_query_to_nothrow@UIAudioSystemEffectsPropertyStoreInternal@@AEAPEAUIAudioSystemEffectsPro.c)
 *     ?CopyProperties@@YAJPEAUIPropertyStore@@0@Z @ 0x180166A18 (-CopyProperties@@YAJPEAUIPropertyStore@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CopyContextProperties(
        struct IAudioSystemEffectsPropertyStore *a1,
        struct IAudioSystemEffectsPropertyStore *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+10h]
  struct IAudioSystemEffectsPropertyStore *v14; // [rsp+50h] [rbp+18h] BYREF
  struct IAudioSystemEffectsPropertyStore *v15; // [rsp+58h] [rbp+20h] BYREF
  struct IPropertyStore *v16; // [rsp+60h] [rbp+28h] BYREF
  struct IPropertyStore *v17; // [rsp+68h] [rbp+30h] BYREF

  v15 = a2;
  v14 = a1;
  v12[0] = 0LL;
  v2 = wil::com_query_to_nothrow<IAudioSystemEffectsPropertyStoreInternal,IAudioSystemEffectsPropertyStore * &>(
         &v14,
         (__int64)v12);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E5,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_14;
  }
  v16 = 0LL;
  v4 = *(_QWORD *)v12[0];
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, struct IPropertyStore **))(v4 + 24))(v12[0], 2LL, &v16);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E8,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v5);
LABEL_5:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    goto LABEL_14;
  }
  v11 = 0LL;
  v6 = wil::com_query_to_nothrow<IAudioSystemEffectsPropertyStoreInternal,IAudioSystemEffectsPropertyStore * &>(
         &v15,
         (__int64)&v11);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EB,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v6);
LABEL_8:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
    goto LABEL_5;
  }
  v17 = 0LL;
  v7 = *v11;
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IPropertyStore **))(v7 + 24))(v11, 0LL, &v17);
  v3 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EE,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    goto LABEL_8;
  }
  v9 = CopyProperties(v16, v17);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      752LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  v3 = 0;
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v12);
  return v3;
}
