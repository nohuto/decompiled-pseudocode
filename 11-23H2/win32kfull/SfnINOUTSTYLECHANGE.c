/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00756E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
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
  bool v22; // bl
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v36; // [rsp+58h] [rbp-C0h]
  __int64 v37; // [rsp+60h] [rbp-B8h] BYREF
  int v38; // [rsp+68h] [rbp-B0h]
  int v39; // [rsp+6Ch] [rbp-ACh]
  __int64 v40; // [rsp+70h] [rbp-A8h]
  __int64 v41; // [rsp+78h] [rbp-A0h]
  __int64 v42; // [rsp+80h] [rbp-98h]
  __int64 v43; // [rsp+88h] [rbp-90h]
  __int64 v44; // [rsp+90h] [rbp-88h]
  __int128 v45; // [rsp+B8h] [rbp-60h]
  __int128 v46; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-40h]
  int v48; // [rsp+120h] [rbp+8h] BYREF
  int v49; // [rsp+128h] [rbp+10h]
  unsigned __int64 v50; // [rsp+130h] [rbp+18h] BYREF

  v12 = 0LL;
  v50 = 0LL;
  v48 = 0;
  v46 = 0LL;
  v47 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    v49 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v13 + 472);
  v39 = 0;
  v37 = v12;
  v38 = a2;
  v40 = a3;
  v42 = a5;
  v43 = a6;
  v41 = *a4;
  ThreadLock(a1, &v46);
  v15 = *(_QWORD *)(v13 + 480);
  v45 = *(_OWORD *)(v15 + 64);
  v36 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v17;
  v22 = !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  EtwTraceBeginCallback(39LL);
  v23 = KeUserModeCallback(39LL, &v37, 48LL, &v50, &v48);
  EtwTraceEndCallback(39LL);
  if ( v22 )
    EnterSharedCrit(v25, v24, v26);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v30 + 64) = v45;
  *(_QWORD *)(v30 + 80) = v36;
  if ( v23 >= 0 && v48 == 24 )
  {
    v31 = (__int64 *)v50;
    if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    v44 = *v31;
    if ( a2 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *((_QWORD *)PtiCurrentShared() + 64);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(__int64 **)(v33 + 96) != a4 )
    {
      v34 = *(__int64 **)(v50 + 16);
      if ( v34 + 1 < v34 || (unsigned __int64)(v34 + 1) > MmUserProbeAddress )
        v34 = (__int64 *)MmUserProbeAddress;
      *a4 = *v34;
      return v32;
    }
  }
  return 0LL;
}
