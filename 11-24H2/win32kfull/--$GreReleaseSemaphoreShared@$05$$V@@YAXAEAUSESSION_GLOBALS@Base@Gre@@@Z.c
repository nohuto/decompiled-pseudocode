/*
 * XREFs of ??$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401710CC
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     DxgkEngReleaseStableSprite @ 0x140171040 (DxgkEngReleaseStableSprite.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x14005D970 (IsThreadCrossSessionAttached.c)
 */

void __fastcall GreReleaseSemaphoreShared<6,>(__int64 *a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rdx

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"Sprite", *a1 + 1040);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v5 = v3 + 8;
  v6 = -v3;
  v7 = (_QWORD *)(v5 & -(__int64)(v6 != 0));
  if ( v7 )
  {
    if ( (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 0xE))-- == 1 )
      *v7 &= ~0x40uLL;
    if ( !*v7 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v1 + 1040));
}
