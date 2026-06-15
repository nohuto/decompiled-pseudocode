/*
 * XREFs of ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x180004A50
 * Callers:
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A79C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A8EC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::GetProcessFromStreamInfo(
        CApplicationManager *this,
        struct IAudioStreamInfo *a2,
        struct CProcess **a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CApplicationManager *v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = this;
  v4 = *(_QWORD *)a2;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, CApplicationManager **))(v4 + 24))(a2, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(CApplicationManager *, GUID *, __int64 *))v12)(
           v12,
           &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
           &v13);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct CProcess **))(*(_QWORD *)v13 + 24LL))(v13, a3);
      if ( v8 >= 0 )
      {
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v13);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v12);
        return 0LL;
      }
      v9 = 773LL;
    }
    else
    {
      v9 = 771LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v8,
      v10);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v13);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v12);
    return (unsigned int)v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x300,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)(unsigned int)v5,
    v10);
  if ( v12 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v12 + 16LL))(v12);
  return v6;
}
