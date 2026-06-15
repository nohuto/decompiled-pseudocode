/*
 * XREFs of ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180004960
 * Callers:
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x1800039B0 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x18000E970 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18001F180 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180028DF0 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this)
{
  unsigned int AccessibilityAudioMonoMixState; // edi
  struct CProcess *v2; // rbx
  int Process; // eax
  unsigned int v4; // eax
  unsigned int v5; // esi
  CWindowsPolicyManager *v6; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v10; // [rsp+30h] [rbp+8h] BYREF

  AccessibilityAudioMonoMixState = *((_DWORD *)this + 12);
  v2 = 0LL;
  v10 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, 0LL, &v10);
  if ( Process >= 0 )
  {
    v2 = v10;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v10 + 8LL))(v10);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v10);
    v4 = (*(__int64 (__fastcall **)(struct CProcess *))(*(_QWORD *)v2 + 48LL))(v2);
    v5 = v4;
    if ( v4 )
    {
      if ( !TsSessionIdAreAccessibilityAudioSettingsInitialized(v4) )
        CWindowsPolicyManager::InitAccessibilityAudioSettings(v6, v5);
      AccessibilityAudioMonoMixState = TsSessionIdGetAccessibilityAudioMonoMixState(v5);
    }
  }
  else
  {
    if ( Process != -2147416387 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17E,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process,
        v8);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v10);
  }
  if ( v2 )
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v2 + 16LL))(v2);
  return AccessibilityAudioMonoMixState;
}
