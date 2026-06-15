/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x1800081C0
 * Callers:
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002C8A0 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18002C970 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18002CBB0 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006290 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RpcGetProcess(
        CWindowsPolicyManager *this,
        void *a2,
        struct IAudioProcess **a3)
{
  int Process; // eax
  unsigned int v5; // ebx
  struct CProcess *v6; // rcx
  volatile signed __int32 *v7; // r8
  signed __int32 i; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a2, &v11);
  v5 = Process;
  if ( Process < 0 )
  {
    if ( Process == -2147416387 )
    {
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v11);
      return 2147550909LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17F,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v11);
      return v5;
    }
  }
  else
  {
    v6 = v11;
    *a3 = v11;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      for ( i = *((_DWORD *)v11 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)v7 + 5) )
      {
        if ( i == _InterlockedCompareExchange(v7 + 5, i - 1, i) )
          break;
      }
      if ( i == 1 )
      {
        if ( v7 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 560LL))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return 0LL;
  }
}
