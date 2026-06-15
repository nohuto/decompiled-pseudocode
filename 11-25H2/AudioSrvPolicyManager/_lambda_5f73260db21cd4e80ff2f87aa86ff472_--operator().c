/*
 * XREFs of _lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator() @ 0x18002F0F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5f73260db21cd4e80ff2f87aa86ff472__long_IAudioSessionInfo___::_Do_call @ 0x180031670 (std--_Func_impl_no_alloc__lambda_5f73260db21cd4e80ff2f87aa86ff472__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180013440 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18001DC10 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ??$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA?AV?$shared_ptr@UIDuckingDescriptor@@@0@AEBV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@@Z @ 0x18001E7FC (--$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA-AV-$shared.c)
 *     ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001FA80 (--1-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Construct_in_place@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV?$shared_ptr@VDuckingDescriptor@@@std@@@std@@YAXAEAVDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV?$shared_ptr@VDuckingDescriptor@@@0@@Z @ 0x18002E30C (--$_Construct_in_place@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV-$shared_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator()(
        __int64 *a1,
        int (__fastcall ***a2)(__int64, GUID *, __int64 *))
{
  const struct _tlgProvider_t *v4; // rdi
  _WORD *v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  int (__fastcall **v8)(__int64, GUID *, __int64 *); // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  int v11; // ebx
  std::_Ref_count_base *v12; // rax
  std::_Ref_count_base *v13; // rbx
  int v14; // edi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  int v17; // eax
  volatile signed __int32 *v19; // [rsp+30h] [rbp-29h] BYREF
  __int64 v20; // [rsp+38h] [rbp-21h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h] BYREF
  std::_Ref_count_base *v23; // [rsp+58h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp+7h] BYREF
  _WORD *v25; // [rsp+80h] [rbp+27h]
  int v26; // [rsp+88h] [rbp+2Fh]
  int v27; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 4u )
  {
    v5 = (_WORD *)((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*a2)[8])(a2);
    if ( v5 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      v7 = 2 * v6 + 2;
    }
    else
    {
      v5 = &unk_180056790;
      v7 = 2;
    }
    v25 = v5;
    v26 = v7;
    v27 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, byte_18005AB12, 0LL, 0LL, 3u, &v24);
  }
  v8 = *a2;
  v20 = 0LL;
  if ( (*v8)((__int64)a2, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, &v20) < 0 )
    goto LABEL_32;
  v19 = 0LL;
  v9 = *a1;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) )
  {
    v12 = (std::_Ref_count_base *)operator new(0x30uLL);
    v13 = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 2) = 1;
      *((_DWORD *)v12 + 3) = 1;
      *(_QWORD *)v12 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
      std::_Construct_in_place<DeactivatableDuckingDescriptor,IDuckingController * &,std::shared_ptr<DuckingDescriptor> &>(
        (__int64)v12 + 16,
        (_QWORD *)a1[1]);
    }
    else
    {
      v13 = 0LL;
    }
    v21[0] = (__int64)v13 + 16;
    v21[1] = (__int64)v13;
    if ( v13 == (std::_Ref_count_base *)-16LL )
    {
      v14 = -2147024882;
      v15 = 890LL;
    }
    else
    {
      v16 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v22, v21);
      v21[0] = (__int64)&DuckingPolicyGuid;
      v19 = 0LL;
      v14 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
              &v19,
              v21,
              v16);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
      if ( v14 >= 0 )
      {
        if ( v13 )
          std::_Ref_count_base::_Decref(v13);
        goto LABEL_29;
      }
      v15 = 892LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v14);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v11 = v14;
    goto LABEL_26;
  }
  v10 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v22, (__int64 *)(v9 + 376));
  v21[0] = (__int64)&DuckingPolicyGuid;
  v19 = 0LL;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
          &v19,
          v21,
          v10);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v11 >= 0 )
  {
LABEL_29:
    v17 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v20 + 32LL))(v20, v19);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        895LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v17);
    wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(&v19);
LABEL_32:
    v11 = 0;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36F,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_26:
  wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(&v19);
LABEL_33:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v20);
  return (unsigned int)v11;
}
