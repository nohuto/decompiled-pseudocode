/*
 * XREFs of ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003EECC
 * Callers:
 *     ??$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Z @ 0x18003EBE8 (--$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInf.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180015CA0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18003918C (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18003C0E4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAastPreStartContext::RuntimeClassInitialize(
        CAastPreStartContext *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  const unsigned __int16 *v19; // rax
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  const unsigned __int16 *v24; // rax
  int v25; // edx
  CApplicationManager *v26; // rcx
  int v27; // r8d
  int v28; // r9d
  int updated; // eax
  bool v30; // [rsp+40h] [rbp-38h] BYREF
  DWORD dwMilliseconds; // [rsp+44h] [rbp-34h] BYREF
  float v32; // [rsp+48h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v34; // [rsp+50h] [rbp-28h] BYREF
  __int64 v35[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  bool v37; // [rsp+88h] [rbp+10h] BYREF
  bool v38; // [rsp+90h] [rbp+18h] BYREF
  bool v39; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v34 = 0LL;
  v5 = *(__int64 (**)(void))(v4 + 24);
  try
  {
    v6 = v5();
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = *(_QWORD *)a2;
      v35[0] = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v10 + 32))(a2, v35);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35[0] + 72LL))(v35[0]);
        v15 = -1LL;
        do
          ++v15;
        while ( *(_WORD *)(v13 + 2 * v15) );
        std::wstring::assign((char *)this + 24, v13, v15, v14);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
        *((_DWORD *)this + 5) = v16;
        v39 = 0;
        v38 = 0;
        v37 = 0;
        v30 = 0;
        v32 = 0.0;
        v19 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(
                                          (__int64)this + 24,
                                          v17,
                                          v16,
                                          v18);
        v21 = CApplicationManager::ApplyEndpointVolumeOverride(
                (struct _RTL_CRITICAL_SECTION *)&v38,
                v19,
                v20,
                &v39,
                &v38,
                &v32,
                &v37,
                &v30);
        v22 = v21;
        if ( v21 >= 0 )
        {
          if ( v39 )
          {
            v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
            CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, v23, 4u);
          }
          if ( v38 || v37 )
          {
            dwMilliseconds = 0;
            pcbData = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"AastRenderDelayInMs",
              0x18u,
              0LL,
              &dwMilliseconds,
              &pcbData);
            if ( dwMilliseconds )
              Sleep(dwMilliseconds);
            v24 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(
                                              (__int64)this + 24,
                                              v30,
                                              v38,
                                              v37);
            updated = CApplicationManager::UpdateEndpointVolume(v26, v24, v27, v32, v28, v25);
            if ( updated < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                104LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                (const char *)(unsigned int)updated);
          }
          *((_BYTE *)this + 16) = 1;
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v35);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v34);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
            (const char *)(unsigned int)v21);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v35);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v34);
          result = v22;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v35);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v34);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v34);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                           v8);
  }
  return result;
}
