/*
 * XREFs of NtUserGetHDevName @ 0x140095CC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x140034270 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DrvGetHdevName @ 0x1400AC4F0 (DrvGetHdevName.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x14016AAC8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall NtUserGetHDevName(int a1, ULONG64 a2)
{
  BOOL v3; // esi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rcx
  _BYTE *v14; // rdx
  _WORD *v15; // rax
  __int64 v16; // rdx
  __int16 *v17; // r8
  int v18; // r11d
  __int64 v19; // r9
  __int16 v20; // r10
  _BOOL8 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  LONG v25; // r8d
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned int *CurrentThreadWin32Thread; // rbx
  __int64 v29; // rcx
  void (*v30)(void); // rax
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // ecx
  char v36[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v37[48]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-48h]

  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v3 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v36, 1LL);
  v4 = 0LL;
  v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 19928);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v6 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v6);
    v9 = *(_DWORD *)(W32GetUserSessionState(v8) + 19952) * (unsigned int)(unsigned __int16)a1;
    v10 = v9 + *(_QWORD *)(UserSessionState + 19944);
    v11 = W32GetUserSessionState(v9);
    v12 = (__int64 *)(*(_QWORD *)(v11 + 19888) + 40LL * (unsigned int)((v10 - *(_QWORD *)(v11 + 19944)) >> 5));
    LOWORD(a1) = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *(_WORD *)(v10 + 26)
       || (_WORD)a1 == 0x7FFF
       || !(_WORD)a1 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v10 + 25) & 1) == 0
      && *(_BYTE *)(v10 + 24) == 12 )
    {
      v4 = *v12;
    }
  }
  if ( v4 )
  {
    v13 = *(_QWORD *)(v4 + 88);
    if ( v13 && (unsigned int)DrvGetHdevName(v13, v37) )
    {
      HIWORD(v38) = 0;
      v14 = (_BYTE *)a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= MmUserProbeAddress )
        v14 = (_BYTE *)MmUserProbeAddress;
      *v14 = *v14;
      v14[63] = v14[63];
      v15 = (_WORD *)a2;
      v16 = 2147483646LL;
      v17 = (__int16 *)v37;
      v13 = 32LL;
      v18 = 0;
      v19 = 0LL;
      while ( v13 )
      {
        if ( !v16 )
          goto LABEL_24;
        v20 = *v17;
        if ( !*v17 )
          goto LABEL_24;
        ++v17;
        *v15++ = v20;
        --v13;
        --v16;
        ++v19;
      }
      --v15;
      v18 = -2147483643;
LABEL_24:
      *v15 = 0;
      v3 = v18 >= 0;
    }
  }
  else
  {
    UserSetLastError(1461);
  }
  v21 = v3;
  v22 = W32GetUserSessionState(v13);
  v24 = v22;
  v25 = *(_DWORD *)(v22 + 69136);
  if ( v25 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v22 + 69128), 0, v25, 0);
    *(_DWORD *)(v24 + 69136) = 0;
  }
  v26 = W32GetUserSessionState(v23);
  CurrentThreadWin32Thread = (unsigned int *)PsGetCurrentThreadWin32Thread();
  v29 = CurrentThreadWin32Thread[6];
  LOBYTE(v29) = v29 & 0xC;
  if ( (_BYTE)v29 == 8 )
  {
    v30 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v27) + 48) + 3968LL);
    if ( v30 )
      v30();
    *(_DWORD *)(v26 + 19844) = 0;
    *(_QWORD *)(v26 + 19824) = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
    *(_QWORD *)(v26 + 24) = 0LL;
  }
  if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
    *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
  v31 = PsGetCurrentThreadWin32Thread();
  if ( v31 )
  {
    v32 = *(_DWORD *)(v31 + 28);
    if ( v32 )
      KeBugCheckEx(0x160u, v32, 0LL, 0LL, 0LL);
  }
  EtwTraceReleaseUserCrit();
  v33 = CurrentThreadWin32Thread[6] & 0xFFFFFFF1;
  CurrentThreadWin32Thread[6] = v33;
  if ( (v33 & 0x10) != 0 )
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
  ExReleaseFastResource(*(_QWORD *)v26, CurrentThreadWin32Thread + 8);
  KeLeaveCriticalRegion();
  return v21;
}
