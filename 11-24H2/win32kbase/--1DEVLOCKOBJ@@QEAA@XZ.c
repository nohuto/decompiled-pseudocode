/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetClipBox @ 0x140039310 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x140039A60 (GreGetNearestColor.c)
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x140179B90 (GreIntersectVisRect.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C0DB4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F2CC (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x140038004 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x140038030 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     GreDecLockCount @ 0x1400BF120 (GreDecLockCount.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  int v4; // r8d
  void (__fastcall *v5)(DEVLOCKOBJ *); // rax
  int v6; // eax
  int v7; // eax
  struct _ERESOURCE *v8; // rdi
  int (*v9)(void); // rax
  void (__fastcall *v10)(char *, char *, char *, char *); // rax
  struct _GRETHREAD *CurrentThread; // rax
  __int64 SessionState; // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 784LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
      v5 = *(void (__fastcall **)(DEVLOCKOBJ *))(v3 + 792);
      if ( v5 )
        v5(this);
    }
  }
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = GreGetCurrentThread();
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
  }
  else if ( (v6 & 0x80000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 6) & 0x100000) != 0 )
    {
      SessionState = W32GetSessionState(v3);
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        **(_QWORD **)(SessionState + 88) + 1144LL);
      *((_DWORD *)this + 6) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL));
    }
  }
  v7 = *((_DWORD *)this + 6);
  if ( (v7 & 8) != 0 )
    *((_DWORD *)this + 6) = v7 & 0xFFFFFFF7;
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", *((_QWORD *)this + 1), v4);
    GrepReleaseLockValidate<1>();
    GreReleaseSemaphoreSharedInternal(v8);
  }
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 800LL);
  if ( v9 )
  {
    if ( v9() >= 0 )
    {
      v10 = *(void (__fastcall **)(char *, char *, char *, char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                  + 808LL);
      if ( v10 )
        v10((char *)this + 128, (char *)this + 120, (char *)this + 112, (char *)this + 28);
    }
  }
  DLODCOBJ::~DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
