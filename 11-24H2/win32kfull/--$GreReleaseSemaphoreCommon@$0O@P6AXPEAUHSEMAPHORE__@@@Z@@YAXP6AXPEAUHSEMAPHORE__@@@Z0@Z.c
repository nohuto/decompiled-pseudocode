/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14012D7A8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140259240 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ?W32GetCurrentThreadCrossSessionCheck@@YAPEAU_W32THREAD@@XZ @ 0x14012D820 (-W32GetCurrentThreadCrossSessionCheck@@YAPEAU_W32THREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // r9

  EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", a2);
  v4 = (__int64)W32GetCurrentThreadCrossSessionCheck();
  v5 = v4 + 8;
  v6 = -v4;
  v7 = (_QWORD *)(v5 & -(__int64)(v6 != 0));
  if ( v7 )
  {
    if ( (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 0x16))-- == 1 )
      *v7 &= ~0x4000uLL;
    if ( !*v7 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
