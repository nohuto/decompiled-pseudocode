/*
 * XREFs of ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180047F7C
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180047970 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180048A40 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800192D4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistentId(struct IMMDevice *a1, char **a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v15 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a1, 0LL, &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *))(*(_QWORD *)v15 + 40LL))(
           v15,
           &PKEY_AudioEndpoint_PersistentId,
           &v12);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( (_WORD)v12 != 31 )
        goto LABEL_11;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(*((_QWORD *)&v12 + 1) + 2 * v9) );
      v4 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, *((const unsigned __int16 **)&v12 + 1), v9, v11, a2);
      v5 = v4;
      if ( v4 >= 0 )
      {
LABEL_11:
        v5 = 0;
        goto LABEL_12;
      }
      v6 = 825LL;
    }
    else
    {
      v6 = 821LL;
    }
  }
  else
  {
    v6 = 816LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v15);
  return v5;
}
