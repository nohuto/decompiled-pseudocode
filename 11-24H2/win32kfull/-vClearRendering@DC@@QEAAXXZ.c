/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x140020810
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x140020204 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1400205A4 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400212B0 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400218E4 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     UntrapAppContainerRenderingWrap @ 0x140147F00 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x140020C00 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     GreSelectRedirectionBitmap @ 0x1400CD670 (GreSelectRedirectionBitmap.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     GreDeleteSpriteDelayDelete @ 0x140321830 (GreDeleteSpriteDelayDelete.c)
 *     GreHintSpriteShapeDelayDelete @ 0x140321EDC (GreHintSpriteShapeDelayDelete.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // r12d
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  HSEMAPHORE v6; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  char v12; // cl
  unsigned __int64 *CurrentThreadNonPaged; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // r14d
  int v18; // r15d
  int v19; // eax
  int v20; // ebx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v23; // rcx
  int v24; // r8d
  int v25; // eax
  int v26; // r11d
  HDEV v27; // rcx
  int v28; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= ~1u;
  v1 = 0;
  v2 = *((_DWORD *)this + 9);
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
      EngLockSurface(*(HSURF *)(v4 + 32));
    v5 = *((_QWORD *)this + 62);
    if ( (*((_DWORD *)this + 9) & 0x40000) != 0 )
    {
      EngUnlockSurface((SURFOBJ *)((v5 + 24) & -(__int64)(v5 != 0)));
      GreSelectRedirectionBitmap(*(HDC *)this, *((HSURF *)this + 265));
      *((_QWORD *)this + 265) = 0LL;
      *((_DWORD *)this + 9) &= ~0x40000u;
    }
    if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      v6 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals((Gre::Base *)v4) + 1040LL);
      GreAcquireSemaphoreInternal(v6);
      CurrentThread = KeGetCurrentThread();
      v8 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v8 = *ThreadWin32Thread;
      }
      v10 = (__int64 *)((v8 + 8) & -(__int64)(v8 != 0));
      if ( v10 )
      {
        v11 = *v10;
        if ( (*v10 & 0xFFFFFFFFFFFFFFC0uLL) != 0 && (v11 & 0x40) == 0 )
        {
          v23 = 0LL;
          v24 = 37;
          do
          {
            v25 = v23;
            if ( !_bittest64(&v11, v23) )
              v25 = v24;
            ++v23;
            v24 = v25;
          }
          while ( v23 < 0x40 );
          if ( v25 > 6 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v11, (unsigned int)v25);
        }
        v12 = *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xE);
        *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xE) = v12 + 1;
        if ( !v12 )
          *v10 |= 0x40uLL;
      }
      EngUnlockSurface((SURFOBJ *)((v5 + 24) & -(__int64)(v5 != 0)));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 272));
      if ( (*(_DWORD *)(v5 + 324))-- != 1 )
        goto LABEL_53;
      CurrentThreadNonPaged = (unsigned __int64 *)W32GetCurrentThreadNonPaged();
      if ( CurrentThreadNonPaged )
        v15 = *CurrentThreadNonPaged;
      else
        v15 = 0LL;
      v16 = (v15 + 8) & ((unsigned __int128)-(__int128)v15 >> 64);
      if ( v16 )
      {
        v17 = *(_DWORD *)(((v15 + 8) & ((unsigned __int128)-(__int128)v15 >> 64)) + 0x15C);
        *(_DWORD *)(((v15 + 8) & ((unsigned __int128)-(__int128)v15 >> 64)) + 0x15C) = 0;
        v18 = *(_DWORD *)(((v15 + 8) & ((unsigned __int128)-(__int128)v15 >> 64)) + 0x160);
        *(_DWORD *)(((v15 + 8) & ((unsigned __int128)-(__int128)v15 >> 64)) + 0x160) = 0;
      }
      else
      {
        v17 = v28;
        v18 = v28;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v26 = *(_DWORD *)(v5 + 488);
        v27 = *(HDEV *)(v5 + 328);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
          GreHintSpriteShapeDelayDelete(v27, *(HWND *)(v5 + 336), *(HBITMAP *)(v5 + 344), v26, *(_DWORD *)(v5 + 492));
        else
          GreHintSpriteShape(v27, v26, *(_DWORD *)(v5 + 492), 0);
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState() + 96) + 4832LL));
      }
      v19 = *(_DWORD *)(v5 + 116);
      if ( (v19 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v19 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 496), *(HWND *)(v5 + 504), *(HSPRITE *)(v5 + 512));
        v1 = 1;
      }
      if ( v16 )
      {
        *(_DWORD *)(v16 + 348) = v17;
        *(_DWORD *)(v16 + 352) = v18;
      }
      if ( !v1 )
      {
LABEL_53:
        if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
        {
          v20 = *(_DWORD *)(v5 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
          if ( v20 == 1 )
            bDeleteSurface(*(_QWORD *)v5);
        }
      }
      if ( v6 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Sprite", v6);
        GrepReleaseLockValidate<6>();
        GreReleaseSemaphoreExclusiveInternal(v6);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(HDC *)this, *((HSURF *)this + 265));
    *((_QWORD *)this + 265) = 0LL;
    *((_DWORD *)this + 9) &= ~0x40000u;
  }
}
