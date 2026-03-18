/*
 * XREFs of ??$GreReleaseSemaphoreShared@$0L@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F6FA8
 * Callers:
 *     GreUnlockVisRgnPublish @ 0x1400F6F80 (GreUnlockVisRgnPublish.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreShared<11,>(struct _ERESOURCE **a1, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _GRETHREAD *v4; // rax

  v3 = *a1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"VisRgnPublish", (unsigned int)*a1 + 1248, a3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 19))-- == 1 )
      *(_QWORD *)v4 &= ~0x800uLL;
  }
  GreReleaseSemaphoreSharedInternal(v3 + 12);
}
