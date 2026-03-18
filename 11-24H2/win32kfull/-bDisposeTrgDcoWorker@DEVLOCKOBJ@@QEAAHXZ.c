/*
 * XREFs of ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x140020204
 * Callers:
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x14001FDD0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x14002072C (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x140020CB0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14026AE14 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026AF84 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDcoWorker(DEVLOCKOBJ *this)
{
  struct XDCOBJ *v1; // rsi
  __int64 v2; // rbx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  SURFACE *v7; // rcx
  __int64 v8; // rcx
  Gre::Base *v9; // rcx
  DC **v10; // rbx
  __int64 v11; // rax
  struct _DC_ATTR *UserAttr; // rax
  DC *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rsi
  HSEMAPHORE v18; // rbp
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v24; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v32; // [rsp+40h] [rbp+8h] BYREF

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  v2 = *((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 105) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *(_QWORD *)(v2 + 48);
    if ( (v4 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 105) )
      {
        if ( (v4 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v4 = *((_DWORD *)this + 6);
        }
        if ( (v4 & 0x2000) != 0 )
        {
          bUnHookBmpDrv(v1);
          *((_DWORD *)this + 6) &= ~0x2000u;
          v4 = *((_DWORD *)this + 6);
        }
        v6 = *(_QWORD *)v1;
        if ( *(_QWORD *)v1 && *((_BYTE *)v1 + 73) && (v4 & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(v6 + 44) & 1) == 0 )
          {
            v7 = *(SURFACE **)(v6 + 496);
            if ( v7 )
              SURFACE::bUnMap(v7);
          }
          *(_DWORD *)(*(_QWORD *)v1 + 44LL) &= ~1u;
          v8 = *((_QWORD *)this + 4);
          if ( _bittest((const signed __int32 *)(v8 + 36), 0xEu) && *(_QWORD *)(v8 + 472) && *(_DWORD *)(v8 + 488) )
            GrepUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x40000);
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v5 + 2544));
      }
      v9 = (Gre::Base *)*((_QWORD *)this + 4);
      if ( v9
        && *((_BYTE *)this + 105)
        && _bittest((const signed __int32 *)this + 6, 0xCu)
        && (*((_DWORD *)v9 + 9) & 0x200) != 0 )
      {
        v18 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v9) + 728LL);
        GreAcquireSemaphoreSharedInternal(v18);
        GrepAcquireLockValidate<3>();
        if ( !*((_QWORD *)this + 14) )
          DC::vClearRendering(*((DC **)this + 4));
        if ( !_bittest((const signed __int32 *)(*((_QWORD *)this + 4) + 36LL), 0xEu) )
        {
          CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
          v20 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
          v21 = v20 + 8;
          v22 = -v20;
          if ( (v21 & -(__int64)(v22 != 0)) != 0 )
            *(_DWORD *)((v21 & -(__int64)(v22 != 0)) + 0x158) &= ~1u;
        }
        EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v18);
        CurrentThread = KeGetCurrentThread();
        v24 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v24 = *ThreadWin32Thread;
        }
        v26 = v24 + 8;
        v27 = -v24;
        v28 = (_QWORD *)(v26 & -(__int64)(v27 != 0));
        if ( v28 )
        {
          if ( (*(_BYTE *)((v26 & -(__int64)(v27 != 0)) + 0xB))-- == 1 )
            *v28 &= ~8uLL;
          if ( !*v28 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreSharedInternal(v18);
      }
    }
    v10 = (DC **)((char *)this + 32);
    v11 = *((_QWORD *)this + 4);
    if ( v11 && *((_BYTE *)this + 104) )
    {
      *(_DWORD *)(v11 + 40) &= ~2u;
      *((_BYTE *)this + 104) = 0;
    }
    if ( *v10 )
    {
      if ( *((_DWORD *)this + 10) && (*((_DWORD *)*v10 + 11) & 2) != 0 )
      {
        if ( (*((_DWORD *)this + 16) & 2) == 0 )
        {
          UserAttr = XDCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32));
          if ( UserAttr )
            DC::RestoreAttributes(*v10, UserAttr);
        }
        *((_DWORD *)*v10 + 11) &= ~2u;
        *((_DWORD *)this + 10) = 0;
      }
      v13 = *v10;
      v14 = *((unsigned int *)this + 16);
      v15 = *((_QWORD *)this + 6);
      v32 = 0;
      v16 = *(_QWORD *)v13;
      HmgDecrementExclusiveReferenceCountExFastOpt(v15, v13, v14, &v32);
      if ( v32 )
        GrepDeleteDC(v16, 0x2000000LL);
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  return 1LL;
}
