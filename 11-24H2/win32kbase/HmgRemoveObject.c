/*
 * XREFs of HmgRemoveObject @ 0x140031C10
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140014C24 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C256C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1401CD5B0 (EngDeleteDriverObj.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401CEAD8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001FB50 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140022558 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, int a2, int a3, int a4, char a5, _DWORD *a6)
{
  unsigned int v7; // r12d
  HSEMAPHORE v8; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // r11
  unsigned int v19; // r10d
  unsigned int v20; // ecx
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r10
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  __int64 v27; // r11
  __int64 v28; // rbx
  int v29; // ecx
  char v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v35; // r8d
  struct _KTHREAD *v36; // r15
  __int64 v37; // rsi
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v44; // edx
  int v45; // eax
  int v46; // ebx
  __int64 v47; // rax
  unsigned int *v48; // [rsp+20h] [rbp-20h] BYREF
  int v49; // [rsp+28h] [rbp-18h]
  __int16 v50; // [rsp+2Ch] [rbp-14h]
  __int64 v51; // [rsp+30h] [rbp-10h]
  struct _ERESOURCE *v52; // [rsp+80h] [rbp+40h] BYREF
  int v53; // [rsp+88h] [rbp+48h]
  int v54; // [rsp+90h] [rbp+50h]

  v54 = a3;
  v53 = a2;
  v7 = a1;
  v52 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 1512LL);
  v8 = (HSEMAPHORE)v52;
  GreAcquireSemaphoreInternal(v52);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
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
      v44 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v45 = i;
        v15 = *v14;
        if ( !_bittest64(&v15, i) )
          v45 = v44;
        v44 = v45;
      }
      if ( v45 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0x1C);
    *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0x1C) = i + 1;
    if ( !(_BYTE)i )
      *v14 |= 0x100000uLL;
  }
  v48 = 0LL;
  v49 = 0;
  v50 = 0;
  v51 = *(_QWORD *)(W32GetSessionState(i) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v48, (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000, 0);
  if ( !v49 )
  {
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v48);
    SEMOBJ<20>::vUnlock((HSEMAPHORE *)&v52);
    return v10;
  }
  v16 = *(_QWORD *)(v51 + 5672);
  v17 = *v48;
  if ( (unsigned int)v17 >= 0x10000 )
  {
    if ( *(_DWORD *)v16 <= 0x10000u )
    {
      v17 = (unsigned __int16)v17;
    }
    else
    {
      v18 = *(_QWORD *)(v16 + 16);
      v19 = *(_DWORD *)(v18 + 2056);
      if ( (unsigned __int16)v17 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
      {
        v23 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v17 >= v19 )
          v20 = (((unsigned __int16)v17 - v19) >> 16) + 1;
        else
          v20 = 0;
        v21 = *(_QWORD *)(v18 + 8LL * v20 + 8);
        if ( v20 )
          v22 = (unsigned __int16)v17 + ((1 - v20) << 16) - v19;
        else
          v22 = (unsigned __int16)v17;
        v23 = 0LL;
        if ( (unsigned int)v22 < *(_DWORD *)(v21 + 20) )
          v23 = *(_QWORD *)v21 + 24 * v22;
      }
      if ( *(unsigned __int8 *)(v23 + 13) == WORD1(v17) )
        v17 = (unsigned __int16)v17;
    }
  }
  v24 = *(_QWORD *)(v16 + 16);
  v25 = *(_DWORD *)(v24 + 2056);
  if ( (unsigned int)v17 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
    goto LABEL_57;
  if ( (unsigned int)v17 >= v25 )
    v26 = (((unsigned int)v17 - v25) >> 16) + 1;
  else
    v26 = 0;
  v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
  if ( v26 )
    v17 = ((1 - v26) << 16) - v25 + (unsigned int)v17;
  if ( (unsigned int)v17 >= *(_DWORD *)(v27 + 20) )
LABEL_57:
    v28 = 0LL;
  else
    v28 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
  if ( *((_BYTE *)v48 + 14) == a5 && *((_WORD *)v48 + 6) == HIWORD(v7) )
  {
    v29 = *(_DWORD *)(v28 + 8);
    if ( v29 == v54 && *(_WORD *)(v28 + 12) == (_WORD)v53 )
    {
      if ( a4 || (*((_BYTE *)v48 + 15) & 1) == 0 )
      {
        v30 = *(_BYTE *)(HmgPentryFromPobj(v28) + 14);
        if ( v30 == 5 )
        {
          v31 = *(_QWORD *)(v28 + 680);
          v32 = 0LL;
        }
        else
        {
          if ( v30 != 16 )
          {
LABEL_39:
            HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v48);
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v48);
            if ( v8 )
              GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v33, v8);
            return v28;
          }
          v31 = *(_QWORD *)(v28 + 136);
          v32 = 2LL;
        }
        TrackObjectReferenceDecrement(v32, v31);
        goto LABEL_39;
      }
    }
    else
    {
      *((_BYTE *)v48 + 15) |= 8u;
      if ( a6 )
        *a6 = v29;
    }
  }
  else
  {
    HIBYTE(v50) = 1;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v48);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v48);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Hmgr", (int)v8, v35);
    v36 = KeGetCurrentThread();
    v37 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v46 = W32GetCurrentWin32kSessionId(),
          v47 = PsGetCurrentThreadProcess(),
          v46 == (unsigned int)PsGetProcessSessionIdEx(v47)) )
    {
      v38 = (__int64 *)PsGetThreadWin32Thread(v36);
      if ( v38 )
        v37 = *v38;
    }
    v39 = v37 + 8;
    v40 = -v37;
    if ( (v39 & -(__int64)(v40 != 0)) != 0 && (*(_BYTE *)((v39 & -(__int64)(v40 != 0)) + 0x1C))-- == 1 )
      *(_QWORD *)(v39 & -(__int64)(v40 != 0)) &= ~0x100000uLL;
    GreReleaseSemaphoreSharedInternal((struct _ERESOURCE *)v8);
  }
  return v10;
}
