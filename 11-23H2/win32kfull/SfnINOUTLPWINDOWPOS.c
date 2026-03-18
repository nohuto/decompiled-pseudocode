/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C0067E00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r13d
  __int64 v12; // rbx
  PERESOURCE *v13; // rax
  __int64 v14; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int128 v21; // xmm6
  __int64 v22; // xmm7_8
  __int64 v23; // rcx
  __int64 v24; // rcx
  PERESOURCE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // di
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 *v41; // rax
  ULONG64 v42; // rdx
  __int64 v43; // rdi
  PERESOURCE *v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rcx
  ULONG64 v47; // rcx
  __int128 v48; // xmm3
  __int64 v49; // xmm0_8
  __int64 v51; // [rsp+60h] [rbp-E8h] BYREF
  int v52; // [rsp+68h] [rbp-E0h]
  int v53; // [rsp+6Ch] [rbp-DCh]
  __int64 v54; // [rsp+70h] [rbp-D8h]
  _BYTE v55[40]; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-A8h]
  __int64 v57; // [rsp+A8h] [rbp-A0h]
  __int64 v58; // [rsp+B0h] [rbp-98h]
  __int128 v59; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-60h]
  int v61; // [rsp+150h] [rbp+8h] BYREF
  int v62; // [rsp+158h] [rbp+10h]
  unsigned __int64 v63; // [rsp+160h] [rbp+18h] BYREF

  v10 = a2;
  v12 = 0LL;
  v63 = 0LL;
  v61 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v13 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v13) )
  {
    v62 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v14 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v14 = *ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(v14 + 472);
  else
    v16 = 0LL;
  v53 = 0;
  memset(&v55[8], 0, 32);
  v51 = v16;
  v52 = v10;
  v54 = a3;
  *(_DWORD *)(a4 + 36) = 0;
  *(_OWORD *)v55 = *(_OWORD *)a4;
  *(_OWORD *)&v55[16] = *(_OWORD *)(a4 + 16);
  *(_QWORD *)&v55[32] = *(_QWORD *)(a4 + 32);
  v56 = a5;
  v57 = a6;
  ThreadLock(a1, &v59);
  v20 = *(_QWORD *)(v14 + 480);
  v21 = *(_OWORD *)(v20 + 64);
  v22 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v16;
  v23 = 0LL;
  if ( a1 )
    v23 = *a1;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v24;
  v25 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v24, v17, v18, v19);
  v30 = ExIsResourceAcquiredExclusiveLite(*v25) != 1 && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  EtwTraceBeginCallback(22LL);
  v31 = KeUserModeCallback(22LL, &v51, 80LL, &v63, &v61);
  EtwTraceEndCallback(22LL);
  if ( v30 )
    EnterSharedCrit(v33, v32, v34);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v36, v35, v37);
  v40 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v40 + 64) = v21;
  *(_QWORD *)(v40 + 80) = v22;
  if ( v31 >= 0 && v61 == 24 )
  {
    v41 = (__int64 *)v63;
    v42 = v63 + 8;
    if ( v63 + 8 < v63 || v42 > MmUserProbeAddress )
      v41 = (__int64 *)MmUserProbeAddress;
    v43 = *v41;
    v58 = *v41;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v43;
    v44 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(MmUserProbeAddress, v42, v38, v39);
    if ( !ExIsResourceAcquiredSharedLite(*v44) )
    {
      v62 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    }
    v45 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v45 )
      v12 = *v45;
    v46 = *(_QWORD *)(v12 + 512);
    if ( !v46 || (*(_DWORD *)(v46 + 84) & 1) == 0 || *(_QWORD *)(v46 + 96) != a4 )
    {
      v47 = *(_QWORD *)(v63 + 16);
      if ( v47 + 40 < v47 || v47 + 40 > MmUserProbeAddress )
        v47 = MmUserProbeAddress;
      v48 = *(_OWORD *)(v47 + 16);
      v49 = *(_QWORD *)(v47 + 32);
      *(_OWORD *)a4 = *(_OWORD *)v47;
      *(_OWORD *)(a4 + 16) = v48;
      *(_QWORD *)(a4 + 32) = v49;
      return v43;
    }
  }
  return 0LL;
}
