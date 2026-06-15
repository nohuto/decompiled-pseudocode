/*
 * XREFs of ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003C6AC
 * Callers:
 *     ??$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Z @ 0x18003C3C8 (--$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180015EC0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800367A4 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800398BC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned __int64 v14; // r8
  const unsigned __int16 *v15; // rax
  unsigned int v16; // r8d
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  const unsigned __int16 *v20; // rax
  int v21; // edx
  CApplicationManager *v22; // rcx
  int v23; // r8d
  int v24; // r9d
  int updated; // eax
  bool v26; // [rsp+40h] [rbp-38h] BYREF
  DWORD dwMilliseconds; // [rsp+44h] [rbp-34h] BYREF
  float v28; // [rsp+48h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v30; // [rsp+50h] [rbp-28h] BYREF
  __int64 v31[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  bool v33; // [rsp+88h] [rbp+10h] BYREF
  bool v34; // [rsp+90h] [rbp+18h] BYREF
  bool v35; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v30 = 0LL;
  v5 = *(__int64 (**)(void))(v4 + 24);
  try
  {
    v6 = v5();
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = *(_QWORD *)a2;
      v31[0] = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v10 + 32))(a2, v31);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31[0] + 72LL))(v31[0]);
        v14 = -1LL;
        do
          ++v14;
        while ( *(_WORD *)(v13 + 2 * v14) );
        std::wstring::assign((char *)this + 24, v13, v14);
        *((_DWORD *)this + 5) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 48LL))(v30);
        v35 = 0;
        v34 = 0;
        v33 = 0;
        v26 = 0;
        v28 = 0.0;
        v15 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)this + 24);
        v17 = CApplicationManager::ApplyEndpointVolumeOverride(
                (struct _RTL_CRITICAL_SECTION *)&v34,
                v15,
                v16,
                &v35,
                &v34,
                &v28,
                &v33,
                &v26);
        v18 = v17;
        if ( v17 >= 0 )
        {
          if ( v35 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 48LL))(v30);
            CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, v19, 4);
          }
          if ( v34 || v33 )
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
            v20 = (const unsigned __int16 *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)this + 24);
            updated = CApplicationManager::UpdateEndpointVolume(v22, v20, v23, v28, v24, v21);
            if ( updated < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                104LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                (const char *)(unsigned int)updated);
          }
          *((_BYTE *)this + 16) = 1;
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v31);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v30);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
            (const char *)(unsigned int)v17);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v31);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v30);
          result = v18;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v31);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v30);
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
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v30);
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
