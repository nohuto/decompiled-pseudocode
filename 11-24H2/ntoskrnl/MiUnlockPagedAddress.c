/*
 * XREFs of MiUnlockPagedAddress @ 0x1403EE6C4
 * Callers:
 *     MiFreeClonePool @ 0x1403EDE7C (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x1403EE660 (MiFreeCombinePool.c)
 *     MiLockPagedRange @ 0x140A4C4C8 (MiLockPagedRange.c)
 *     MiFreeCloneDescriptor @ 0x140A6D78C (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = 48 * ((*(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v5 = MiLockPageInline(v4, a2, a3, a4);
  MiRemoveLockedPageChargeAndDecRef(v4, v6, v7, v8);
  return MiUnlockPage(v4, v5);
}
