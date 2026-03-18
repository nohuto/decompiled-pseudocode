/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x1403287E4
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<21,_SPRITESTATE *>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v3; // rax

  v1 = *(HSEMAPHORE *)(a1 + 136);
  GlobalLockName = GrepGetGlobalLockName(21);
  EtwTraceGreLockReleaseSemaphore(GlobalLockName, v1);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  if ( v3 )
  {
    if ( (*((_BYTE *)v3 + 29))-- == 1 )
      *(_QWORD *)v3 &= ~0x200000uLL;
    if ( !*(_QWORD *)v3 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(v1);
}
