/*
 * XREFs of MiMarkPfnTradable @ 0x1404B4A4C
 * Callers:
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 */

__int64 __fastcall MiMarkPfnTradable(_QWORD *a1)
{
  unsigned __int8 v2; // al

  v2 = MiLockPageInline((__int64)a1);
  *a1 |= 1uLL;
  return MiUnlockPage((__int64)a1, v2);
}
