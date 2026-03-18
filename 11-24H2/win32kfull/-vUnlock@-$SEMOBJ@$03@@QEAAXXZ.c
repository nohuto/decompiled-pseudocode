/*
 * XREFs of ?vUnlock@?$SEMOBJ@$03@@QEAAXXZ @ 0x1400231A0
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x140022D88 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     GreMovePointer @ 0x1400240B0 (GreMovePointer.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SEMOBJ<4>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *v3; // rax

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Pointer", *a1);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      if ( (*((_BYTE *)v3 + 12))-- == 1 )
        *(_QWORD *)v3 &= ~0x10uLL;
      if ( !*(_QWORD *)v3 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
    *a1 = 0LL;
  }
}
