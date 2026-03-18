/*
 * XREFs of ??$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F78
 * Callers:
 *     DxgkEngAcquireStableSprite @ 0x140025300 (DxgkEngAcquireStableSprite.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140023FC8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 */

__int64 __fastcall GreAcquireSemaphoreShared<6,>(_QWORD *a1)
{
  EtwTraceGreLockAcquireSemaphoreShared(L"Sprite", *a1 + 1040LL);
  GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*a1 + 1040LL));
  return GrepAcquireLockValidate<6>();
}
