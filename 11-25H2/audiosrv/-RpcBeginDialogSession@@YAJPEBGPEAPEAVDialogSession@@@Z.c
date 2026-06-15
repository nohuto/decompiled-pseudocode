/*
 * XREFs of ?RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z @ 0x1800F630C
 * Callers:
 *     s_StartPersonalAssistantDialogSession @ 0x1800F6530 (s_StartPersonalAssistantDialogSession.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVDialogSession@@$$QEAPEAUIAudioProcess@@AEAPEBG@Z @ 0x1800F6030 (--$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RpcBeginDialogSession(const unsigned __int16 *a1, struct DialogSession **a2)
{
  __int64 (__fastcall *v3)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v9; // [rsp+30h] [rbp+8h] BYREF
  struct IAudioProcess *v10; // [rsp+40h] [rbp+18h] BYREF
  struct IAudioProcess *v11; // [rsp+48h] [rbp+20h] BYREF

  v9 = a1;
  v10 = 0LL;
  v3 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                               + 32LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v10);
  v4 = v3(g_PolicyManager, 0LL, &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = v10;
    v4 = Microsoft::WRL::Details::MakeAndInitialize<DialogSession,DialogSession,IAudioProcess *,unsigned short const * &>(
           a2,
           &v11,
           &v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 77LL;
  }
  else
  {
    v6 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dialogsession.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
