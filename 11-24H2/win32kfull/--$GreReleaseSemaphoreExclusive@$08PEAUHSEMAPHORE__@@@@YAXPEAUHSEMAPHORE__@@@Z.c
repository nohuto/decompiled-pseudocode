/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400D5DD8
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400D50D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<9,HSEMAPHORE__ *>(HSEMAPHORE a1)
{
  struct _GRETHREAD *v2; // rax

  EtwTraceGreLockReleaseSemaphore(L"SpriteRangeLock", a1);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 17))-- == 1 )
      *(_QWORD *)v2 &= ~0x200uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(a1);
}
