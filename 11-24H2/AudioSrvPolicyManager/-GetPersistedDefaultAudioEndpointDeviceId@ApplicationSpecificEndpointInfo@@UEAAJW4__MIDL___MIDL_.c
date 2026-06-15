/*
 * XREFs of ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180016160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpointDeviceId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // rcx
  int v9; // eax
  LPVOID v10; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  LPVOID v13; // [rsp+38h] [rbp-20h] BYREF
  LPVOID pv[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  pv[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)a1 + 32LL))(a1, a2, a3, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v13;
    if ( v13 )
    {
      v12 = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(v13, &v12) >= 0 )
      {
        v16 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 48LL))(v12, &v16) >= 0 && v16 == 1 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, pv);
          if ( v9 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xFC,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
              (const char *)(unsigned int)v9,
              v11);
        }
      }
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v12);
      v8 = v13;
    }
    v10 = pv[0];
    pv[0] = 0LL;
    *a4 = v10;
    if ( v8 )
      CoTaskMemFree(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v5);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( v13 )
      CoTaskMemFree(v13);
    return v6;
  }
}
