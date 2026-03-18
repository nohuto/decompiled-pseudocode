/*
 * XREFs of NtUserMessageCall @ 0x1C0065CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v7; // ebp
  __int64 v8; // r15
  char v9; // di
  __int64 v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PERESOURCE *v21; // rax
  __int64 v22; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  PERESOURCE *v34; // rax
  __int64 v35; // rdi
  __int64 *v36; // rax
  int v37; // r14d
  __int64 v38; // rsi
  __int128 v39; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+50h] [rbp-48h]

  v7 = 0;
  v8 = a2;
  v9 = 0;
  v12 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 && (unsigned int)(a6 - 695) <= 1 )
  {
    v12 = -1LL;
LABEL_8:
    v9 = 1;
    goto LABEL_9;
  }
  if ( a6 != 689 || a2 - 992 <= 8 )
    goto LABEL_8;
  while ( 1 )
  {
LABEL_9:
    if ( v9 || !(unsigned __int8)ShouldRunShared(5LL) )
      EnterCrit(0LL, 1LL);
    else
      EnterSharedCrit(v15, v14, v16);
    v21 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v18, v17, v19, v20);
    if ( !ExIsResourceAcquiredSharedLite(*v21) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v22 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v22 = *ThreadWin32Thread;
    if ( v12 == -1 )
      break;
    v28 = ValidateHwnd(a1);
    v12 = v28;
    if ( !v28 )
    {
      UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
      return 0LL;
    }
    if ( *(_QWORD *)(v28 + 16) == v22 )
    {
      v25 = *(_QWORD *)(v28 + 40);
      if ( (*(_BYTE *)(v25 + 18) & 4) == 0 )
        break;
    }
    if ( v9 )
      break;
    v9 = 1;
    UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  }
  v40 = 0LL;
  v39 = 0LL;
  if ( v12 != -1 )
  {
    *(_QWORD *)&v39 = *(_QWORD *)(v22 + 416);
    *(_QWORD *)(v22 + 416) = &v39;
    *((_QWORD *)&v39 + 1) = v12;
    HMLockObject(v12);
  }
  if ( v9 )
  {
    if ( (unsigned int)v8 < 0x400 )
    {
      _mm_lfence();
      LOBYTE(v7) = a7 != 0;
      v29 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
              v12,
              (unsigned int)v8,
              a3,
              a4,
              a5,
              a6,
              v7);
    }
    else
    {
      v29 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
             + (((_BYTE)a6 + 6) & 0x1F)))(
              v12,
              (unsigned int)v8,
              a3,
              a4,
              a5);
    }
  }
  else
  {
    v34 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v25, v24, v26, v27);
    if ( !ExIsResourceAcquiredSharedLite(*v34) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v35 = 0LL;
    v36 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v36 )
      v35 = *v36;
    v37 = *(_DWORD *)(v35 + 1548);
    *(_DWORD *)(v35 + 1548) = 0;
    if ( (unsigned int)v8 < 0x400 )
    {
      _mm_lfence();
      LOBYTE(v7) = a7 != 0;
      v29 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
              v12,
              (unsigned int)v8,
              a3,
              a4,
              a5,
              a6,
              v7);
    }
    else
    {
      v29 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
             + (((_BYTE)a6 + 6) & 0x1F)))(
              v12,
              (unsigned int)v8,
              a3,
              a4,
              a5);
    }
    *(_DWORD *)(v35 + 1548) = v37;
  }
  v38 = v29;
  if ( v12 != -1 )
    ThreadUnlock1(v31, v30, v32);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  return v38;
}
