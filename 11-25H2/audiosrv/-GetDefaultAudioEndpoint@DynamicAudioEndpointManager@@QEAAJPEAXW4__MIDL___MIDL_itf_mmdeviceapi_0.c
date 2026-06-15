/*
 * XREFs of ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180011970
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x180011540 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18008E304 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
        void *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  DynamicAudioEndpointManager *v9; // rsi
  RTL_SRWLOCK *v10; // r15
  void *v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  int DefaultAudioEndpoint; // edi
  unsigned int v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, LPVOID *); // r13
  void *v22; // r12
  DWORD LastError; // r14d
  int v24; // eax
  LPVOID v25; // rcx
  int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+20h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h]
  RTL_SRWLOCK *v31; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPVOID pv; // [rsp+80h] [rbp+30h] BYREF

  pv = a1;
  v9 = g_DynamicAudioEndpointManager;
  v10 = (RTL_SRWLOCK *)((char *)g_DynamicAudioEndpointManager + 16);
  AcquireSRWLockShared((PSRWLOCK)g_DynamicAudioEndpointManager + 2);
  v31 = v10;
  v11 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  pv = 0LL;
  v29 = 0LL;
  v12 = *(_QWORD *)g_PolicyManager;
  v29 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v12 + 32))(
          g_PolicyManager,
          a2,
          &v29);
  DefaultAudioEndpoint = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v13,
      v26);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( pv )
      CoTaskMemFree(pv);
LABEL_6:
    if ( v10 )
      ReleaseSRWLockShared(v10);
    return (unsigned int)DefaultAudioEndpoint;
  }
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
  v30 = 0LL;
  v27 = a5;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(v9, v16, a3, a4);
  if ( DefaultAudioEndpoint < 0 )
  {
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    goto LABEL_6;
  }
  v28 = 0LL;
  v17 = v30;
  v18 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v30)(
          v30,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v28);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v18,
      v27);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
LABEL_24:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v10 )
      ReleaseSRWLockShared(v10);
    return v19;
  }
  v20 = v28;
  v21 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v28 + 56LL);
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
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v24,
      v27);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    goto LABEL_24;
  }
  v25 = pv;
  pv = 0LL;
  *a6 = v25;
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v11 = pv;
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v10 )
    ReleaseSRWLockShared(v10);
  return 0LL;
}
