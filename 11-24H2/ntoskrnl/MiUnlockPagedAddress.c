/*
 * XREFs of MiUnlockPagedAddress @ 0x1403F85B4
 * Callers:
 *     MiFreeClonePool @ 0x1403F7F0C (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x1403F8550 (MiFreeCombinePool.c)
 *     MiLockPagedRange @ 0x140A5457C (MiLockPagedRange.c)
 *     MiFreeCloneDescriptor @ 0x140A73E2C (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = 48 * ((*(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v2 = MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1, v3, v4);
  return MiUnlockPage(v1, v2);
}
