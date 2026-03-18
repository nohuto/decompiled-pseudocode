/*
 * XREFs of SfnINOUTLPPOINT5 @ 0x1C011BB60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall SfnINOUTLPPOINT5(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // bl
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rcx
  ULONG64 v36; // rcx
  __int128 v37; // xmm3
  __int64 v38; // xmm0_8
  _DWORD v40[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-100h] BYREF
  __int128 v42; // [rsp+58h] [rbp-F0h]
  __int64 v43; // [rsp+68h] [rbp-E0h]
  __int64 v44; // [rsp+70h] [rbp-D8h]
  __int128 v45; // [rsp+98h] [rbp-B0h]
  __int128 v46; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-90h]
  __int64 v48; // [rsp+C0h] [rbp-88h] BYREF
  int v49; // [rsp+C8h] [rbp-80h]
  __int64 v50; // [rsp+D0h] [rbp-78h]
  __int128 v51; // [rsp+D8h] [rbp-70h]
  __int128 v52; // [rsp+E8h] [rbp-60h]
  __int64 v53; // [rsp+F8h] [rbp-50h]
  __int64 v54; // [rsp+100h] [rbp-48h]
  __int64 v55; // [rsp+108h] [rbp-40h]

  v12 = 0LL;
  v41 = 0LL;
  v40[0] = 0;
  v46 = 0LL;
  v47 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v13 + 472);
  memset_0(&v48, 0, 0x50uLL);
  v48 = v12;
  v49 = a2;
  v50 = a3;
  v51 = *a4;
  v52 = a4[1];
  v53 = *((_QWORD *)a4 + 4);
  v54 = a5;
  v55 = a6;
  ThreadLock(a1, &v46);
  v15 = *(_QWORD *)(v13 + 480);
  v45 = *(_OWORD *)(v15 + 64);
  v42 = v45;
  v43 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  v16 = 0LL;
  if ( a1 )
    v16 = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v17;
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() || (v22 = 1, !IS_USERCRIT_OWNED_AT_ALL()) )
    v22 = 0;
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  EtwTraceBeginCallback(18LL);
  v23 = KeUserModeCallback(18LL, &v48, 80LL, &v41, v40);
  EtwTraceEndCallback(18LL);
  if ( v22 )
    EnterSharedCrit(v25, v24, v26);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v30 + 64) = v45;
  *(_QWORD *)(v30 + 80) = v43;
  if ( v23 < 0 || v40[0] != 24 )
    return 0LL;
  v31 = (__int64 *)v41;
  if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v44 = *v31;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v32;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v33 = 0LL;
  v34 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v34 )
    v33 = *v34;
  v35 = *(_QWORD *)(v33 + 512);
  if ( !v35 || (*(_DWORD *)(v35 + 84) & 1) == 0 || *(__int128 **)(v35 + 96) != a4 )
  {
    v36 = *(_QWORD *)(v41 + 16);
    if ( v36 + 40 < v36 || v36 + 40 > MmUserProbeAddress )
      v36 = MmUserProbeAddress;
    v37 = *(_OWORD *)(v36 + 16);
    v38 = *(_QWORD *)(v36 + 32);
    *a4 = *(_OWORD *)v36;
    a4[1] = v37;
    *((_QWORD *)a4 + 4) = v38;
    return v32;
  }
  return 0LL;
}
