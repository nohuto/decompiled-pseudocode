/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58
 * Callers:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140023A90 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgRemoveGarbageCollectible @ 0x14014EA50 (HmgRemoveGarbageCollectible.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1401C0A70 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C256C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401CEAD8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140022558 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x140022E60 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 */

__int64 __fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, __int16 a2, int a3, char a4, char a5, unsigned int *a6)
{
  unsigned int v8; // r15d
  struct _ERESOURCE *v9; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 *v14; // rbx
  __int64 v15; // r8
  unsigned int *v16; // rsi
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r9
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rbx
  unsigned int v30; // ecx
  char v31; // cl
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r8d
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v38; // edx
  int v39; // eax
  unsigned int v40; // edi
  unsigned int *v41; // [rsp+20h] [rbp-20h] BYREF
  int v42; // [rsp+28h] [rbp-18h]
  __int16 v43; // [rsp+2Ch] [rbp-14h]
  __int64 v44; // [rsp+30h] [rbp-10h]
  struct _ERESOURCE *v45; // [rsp+80h] [rbp+40h] BYREF
  int v46; // [rsp+90h] [rbp+50h]

  v46 = a3;
  v8 = (unsigned int)a1;
  v45 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 1512LL);
  v9 = v45;
  GreAcquireSemaphoreInternal(v45);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  v14 = (__int64 *)((v11 + 8) & -(__int64)(v11 != 0));
  if ( v14 )
  {
    if ( (*v14 & 0xFFFFFFFFFFF00000uLL) != 0 && (*v14 & 0x100000) == 0 )
    {
      v38 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v39 = i;
        v15 = *v14;
        if ( !_bittest64(&v15, i) )
          v39 = v38;
        v38 = v39;
      }
      if ( v39 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0x1C);
    *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0x1C) = i + 1;
    if ( !(_BYTE)i )
      *v14 |= 0x100000uLL;
  }
  v43 = 0;
  v41 = 0LL;
  v42 = 0;
  v44 = *(_QWORD *)(W32GetSessionState(i) + 88);
  HANDLELOCK::vLockHandle(&v41, (unsigned __int16)v8 | (v8 >> 8) & 0xFF0000, (a4 & 2) != 0);
  if ( !v42 )
    goto LABEL_47;
  v16 = v41;
  v17 = *(_QWORD *)(v44 + 5672);
  v18 = *v41;
  if ( (unsigned int)v18 >= 0x10000 )
  {
    if ( *(_DWORD *)v17 <= 0x10000u )
    {
      v18 = (unsigned __int16)v18;
    }
    else
    {
      v19 = *(_QWORD *)(v17 + 16);
      v20 = *(_DWORD *)(v19 + 2056);
      if ( (unsigned __int16)v18 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
      {
        v24 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v18 >= v20 )
          v21 = (((unsigned __int16)v18 - v20) >> 16) + 1;
        else
          v21 = 0LL;
        v22 = *(_QWORD *)(v19 + 8 * v21 + 8);
        if ( (_DWORD)v21 )
          v23 = (unsigned __int16)v18 + ((1 - (_DWORD)v21) << 16) - v20;
        else
          v23 = (unsigned __int16)v18;
        v24 = 0LL;
        if ( (unsigned int)v23 < *(_DWORD *)(v22 + 20) )
          v24 = *(_QWORD *)v22 + 24 * v23;
      }
      if ( *(unsigned __int8 *)(v24 + 13) == WORD1(v18) )
        v18 = (unsigned __int16)v18;
    }
  }
  v25 = *(_QWORD *)(v17 + 16);
  v26 = *(_DWORD *)(v25 + 2056);
  if ( (unsigned int)v18 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
    goto LABEL_52;
  if ( (unsigned int)v18 >= v26 )
    v27 = (((unsigned int)v18 - v26) >> 16) + 1;
  else
    v27 = 0LL;
  v28 = *(_QWORD *)(v25 + 8 * v27 + 8);
  if ( (_DWORD)v27 )
    v18 = ((1 - (_DWORD)v27) << 16) - v26 + (unsigned int)v18;
  if ( (unsigned int)v18 >= *(_DWORD *)(v28 + 20) )
LABEL_52:
    v29 = 0LL;
  else
    v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
  if ( (a4 & 2) != 0 )
  {
    v40 = v41[2] & 0xFFFFFFFE;
    if ( v40 != -2147483630 && v40 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && v40 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v41);
      HIBYTE(v43) = 1;
      goto LABEL_47;
    }
  }
  if ( *((_BYTE *)v16 + 14) != a5 || *((_WORD *)v16 + 6) != HIWORD(v8) )
  {
    HIBYTE(v43) = 1;
    goto LABEL_46;
  }
  v30 = *(_DWORD *)(v29 + 8);
  if ( (a4 & 4) == 0 && (v30 != v46 || *(_WORD *)(v29 + 12) != a2) )
  {
    *((_BYTE *)v16 + 15) |= 8u;
    if ( a6 )
      *a6 = v30;
    goto LABEL_46;
  }
  if ( (a4 & 1) == 0 && (*((_BYTE *)v16 + 15) & 1) != 0 )
  {
LABEL_46:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v41);
LABEL_47:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v41);
    SEMOBJ<20>::vUnlock((HSEMAPHORE *)&v45);
    return 0LL;
  }
  v31 = *(_BYTE *)(HmgPentryFromPobj(v29) + 14);
  if ( v31 == 5 )
  {
    v32 = *(_QWORD *)(v29 + 680);
    v33 = 0LL;
    goto LABEL_40;
  }
  if ( v31 == 16 )
  {
    v32 = *(_QWORD *)(v29 + 136);
    v33 = 2LL;
LABEL_40:
    TrackObjectReferenceDecrement(v33, v32);
  }
  HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v41);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v41);
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Hmgr", (int)v9, v34);
    GrepReleaseLockValidate<20>();
    GreReleaseSemaphoreSharedInternal(v9);
  }
  return v29;
}
