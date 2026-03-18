/*
 * XREFs of xxxClientCallDitThread @ 0x1C0075B68
 * Callers:
 *     ClientCallDitThread @ 0x1C0075B50 (ClientCallDitThread.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bl
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rcx
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  __int128 v25; // xmm5
  __int128 v26; // xmm6
  int v28; // [rsp+30h] [rbp-128h] BYREF
  __int64 v29; // [rsp+38h] [rbp-120h]
  unsigned __int64 v30[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v31; // [rsp+60h] [rbp-F8h] BYREF
  _OWORD v32[12]; // [rsp+68h] [rbp-F0h] BYREF

  v30[0] = 0LL;
  v28 = 0;
  memset_0(v32, 0, sizeof(v32));
  v31 = a1;
  v32[0] = *a2;
  v32[1] = a2[1];
  v32[2] = a2[2];
  v32[3] = a2[3];
  v32[4] = a2[4];
  v32[5] = *a3;
  v32[6] = a3[1];
  v32[7] = a3[2];
  v32[8] = a3[3];
  v32[9] = a3[4];
  v32[10] = a3[5];
  v32[11] = a3[6];
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() || (v10 = 1, !IS_USERCRIT_OWNED_AT_ALL()) )
    v10 = 0;
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  EtwTraceBeginCallback(56LL);
  v11 = KeUserModeCallback(56LL, &v31, 200LL, v30, &v28);
  EtwTraceEndCallback(56LL);
  if ( v10 )
    EnterSharedCrit(v13, v12, v14);
  else
    EnterCrit(0LL, 0LL);
  if ( v11 < 0 || v28 != 24 )
    return 0LL;
  v15 = (__int64 *)v30[0];
  if ( v30[0] + 8 < v30[0] || v30[0] + 8 > MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  v16 = *v15;
  v29 = *v15;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    LODWORD(v29) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v17 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v17 = *ThreadWin32Thread;
  v19 = *(_QWORD *)(v17 + 512);
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 84) & 1) != 0 && *(_OWORD **)(v19 + 96) == a3 )
      return 0LL;
  }
  v20 = *(_OWORD **)(v30[0] + 16);
  if ( v20 + 7 < v20 || (unsigned __int64)(v20 + 7) > MmUserProbeAddress )
    v20 = (_OWORD *)MmUserProbeAddress;
  v21 = v20[1];
  v22 = v20[2];
  v23 = v20[3];
  v24 = v20[4];
  v25 = v20[5];
  v26 = v20[6];
  *a3 = *v20;
  a3[1] = v21;
  a3[2] = v22;
  a3[3] = v23;
  a3[4] = v24;
  a3[5] = v25;
  a3[6] = v26;
  return (unsigned int)v16;
}
