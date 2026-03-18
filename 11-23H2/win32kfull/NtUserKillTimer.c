/*
 * XREFs of NtUserKillTimer @ 0x1C00404F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C0040918 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AB80 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  PERESOURCE *v6; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  _QWORD *v10; // rsi
  _QWORD *i; // rdi
  _QWORD *v12; // rbp
  _QWORD *v13; // r15
  int v14; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  struct _HANDLEENTRY *v17; // rsi
  PERESOURCE *v18; // rax
  PERESOURCE *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rsi
  __int64 **v22; // r14
  __int64 *v23; // rcx
  __int64 *v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  EnterCrit(0LL, 0LL);
  v5 = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v4) + 8)
    || (v6 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(),
        !ExIsResourceAcquiredSharedLite(*v6)) )
  {
    v35 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      goto LABEL_50;
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_48;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (_QWORD *)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v9)) & 0x3F));
  for ( i = (_QWORD *)*v10; ; i = (_QWORD *)*i )
  {
    if ( i == v10 )
      goto LABEL_48;
    v12 = i - 14;
    v13 = i - 3;
    if ( *v13 == v9 && v12[12] == a2 )
    {
      v14 = *((_DWORD *)v12 + 12);
      if ( (v14 & 0x1006) == 0 )
      {
        if ( (v14 & 0x40) != 0 )
          break;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
        v16 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v8 = -*(_QWORD *)CurrentProcessWin32Process;
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        }
        if ( v16 == *(_QWORD *)(v12[3] + 424LL) || !v9 && (v12[6] & 4) == 0 )
          break;
      }
    }
  }
  LOBYTE(v35) = 0;
  v17 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(i - 14);
  if ( !gbInDestroyHandleTableObjects )
  {
    v18 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
    if ( ExIsResourceAcquiredExclusiveLite(*v18) == 1 )
    {
      LOBYTE(v35) = gphePrimaryDestroyTarget == 0LL;
      if ( gphePrimaryDestroyTarget )
      {
        if ( v17 != gphePrimaryDestroyTarget )
          ++gcSecondaryDestroyTargets;
      }
      else
      {
        MEMORY[0] = v17;
      }
    }
  }
  *((_DWORD *)v12 + 12) |= 0x1000u;
  if ( (v12[6] & 1) != 0 )
    DecTimerCountAndClearReadyFlag((struct tagTIMER *)(i - 14));
  if ( (unsigned int)HMMarkObjectDestroy(i - 14) )
  {
    if ( *(_QWORD *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &() )
    {
      v19 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
      if ( ExIsResourceAcquiredSharedLite(*v19) )
        goto LABEL_34;
    }
    v36 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) == 0 )
    {
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_34:
      v20 = PsGetCurrentThreadWin32Thread();
      ++*(_DWORD *)(v20 + 48);
      if ( !*v13 )
        _bittestandreset(gTimerId, *((_DWORD *)v12 + 24) - 256);
      EtwTraceKillTimer(i - 14);
      HMAssignmentUnlock(i - 3);
      v21 = v12 + 9;
      v22 = (__int64 **)(v12 + 10);
      if ( (__int64 *)*v21 == v21 || *v22 == v21 )
      {
        v36 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
      }
      v23 = (__int64 *)*v21;
      if ( *(__int64 **)(*v21 + 8) != v21 )
        goto LABEL_49;
      v24 = *v22;
      if ( (__int64 *)**v22 != v21 )
        goto LABEL_49;
      *v24 = (__int64)v23;
      v23[1] = (__int64)v24;
      *v22 = v21;
      *v21 = (__int64)v21;
      v25 = i + 1;
      if ( (_QWORD *)*i == i || (_QWORD *)*v25 == i )
      {
        v36 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
      }
      v26 = (_QWORD *)*i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v27 = (_QWORD *)*v25, *(_QWORD **)*v25 != i) )
LABEL_49:
        __fastfail(3u);
      *v27 = v26;
      v26[1] = v27;
      *v25 = i;
      *i = i;
      HMFreeObject(i - 14);
      v28 = PsGetCurrentThreadWin32Thread();
      --*(_DWORD *)(v28 + 48);
      goto LABEL_47;
    }
LABEL_50:
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
LABEL_47:
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v35);
  v5 = 1LL;
LABEL_48:
  v29 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v29 + 48);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  return v5;
}
