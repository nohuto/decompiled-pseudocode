/*
 * XREFs of ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180089CD0
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x18007CBC0 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180089A34 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
        void *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  DynamicAudioEndpointManager *v9; // rsi
  struct IMMDevice *v10; // r15
  void *v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  int DefaultAudioEndpoint; // edi
  unsigned int v16; // eax
  struct IMMDevice *v17; // rdi
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, LPVOID *); // r13
  void *v22; // r12
  DWORD LastError; // r14d
  int v24; // eax
  LPVOID v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  struct IMMDevice *v28[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPVOID pv; // [rsp+80h] [rbp+30h] BYREF

  pv = a1;
  v9 = g_DynamicAudioEndpointManager;
  v10 = (struct IMMDevice *)((char *)g_DynamicAudioEndpointManager + 16);
  AcquireSRWLockShared((PSRWLOCK)g_DynamicAudioEndpointManager + 2);
  v28[1] = v10;
  v11 = 0LL;
  v28[0] = 0LL;
  v26 = 0LL;
  pv = 0LL;
  v27 = 0LL;
  v12 = *(_QWORD *)g_PolicyManager;
  v27 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v12 + 32))(
          g_PolicyManager,
          a2,
          &v27);
  DefaultAudioEndpoint = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v13);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( pv )
      CoTaskMemFree(pv);
LABEL_6:
    if ( v10 )
      ReleaseSRWLockShared((PSRWLOCK)v10);
    return (unsigned int)DefaultAudioEndpoint;
  }
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
  v28[0] = 0LL;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint((__int64)v9, v16, a3, a4, a5, v28);
  if ( DefaultAudioEndpoint < 0 )
  {
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v28[0] )
      ((void (__fastcall *)(struct IMMDevice *))v28[0]->lpVtbl->Release)(v28[0]);
    goto LABEL_6;
  }
  v26 = 0LL;
  v17 = v28[0];
  v18 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v28[0]->lpVtbl->QueryInterface)(
          v28[0],
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v26);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v18);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_24:
    ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
    if ( v10 )
      ReleaseSRWLockShared((PSRWLOCK)v10);
    return v19;
  }
  v20 = v26;
  v21 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v26 + 56LL);
  v22 = pv;
  if ( pv )
  {
    LastError = GetLastError();
    CoTaskMemFree(v22);
    SetLastError(LastError);
  }
  pv = 0LL;
  v24 = v21(v20, &pv);
  v19 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v24);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    goto LABEL_24;
  }
  v25 = pv;
  pv = 0LL;
  *a6 = v25;
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v11 = pv;
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
  if ( v10 )
    ReleaseSRWLockShared((PSRWLOCK)v10);
  return 0LL;
}
