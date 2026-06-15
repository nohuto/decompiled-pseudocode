/*
 * XREFs of ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A8EC
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800028C0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x180004A50 (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_ @ 0x180014F1C (_lambda_78bc9aa717e0c7ae8337a2b0ddd14613_--__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180018A8C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@Z @ 0x180018AC0 (--0-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@.c)
 *     ??0?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001E7AC (--0-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPlaybackManager::QueueStreamStoppedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  __int64 v3; // rax
  int v4; // eax
  CApplicationManager *v5; // rcx
  int v6; // ebx
  int ProcessFromStreamInfo; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct CProcess *v19; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF

  v19 = this;
  wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
    &v21,
    (__int64)a2);
  v3 = *(_QWORD *)a2;
  v20 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v3 + 32))(a2, &v20);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v19 = 0LL;
    ProcessFromStreamInfo = CApplicationManager::GetProcessFromStreamInfo(v5, a2, &v19);
    v6 = ProcessFromStreamInfo;
    if ( ProcessFromStreamInfo >= 0 )
    {
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
        &v14,
        (__int64 *)&v19);
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
        &v15,
        &v20);
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
        &v16,
        &v21);
      v17[0] = (__int64)off_1800510B8;
      v10 = v14;
      v14 = 0LL;
      v17[1] = v10;
      v11 = v15;
      v15 = 0LL;
      v17[2] = v11;
      v12 = v16;
      v16 = 0LL;
      v17[3] = v12;
      v17[7] = (__int64)v17;
      v6 = QueueGenericWorkItem(v17);
      lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_((__int64)&v14);
      if ( v6 >= 0 )
      {
        wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v19);
        v6 = 0;
        goto LABEL_9;
      }
      v8 = (unsigned int)v6;
      v9 = 106LL;
    }
    else
    {
      v8 = (unsigned int)ProcessFromStreamInfo;
      v9 = 101LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)v8);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_9:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v21);
  return (unsigned int)v6;
}
