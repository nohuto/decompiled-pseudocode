/*
 * XREFs of MiMarkPfnTradable @ 0x1404B3C14
 * Callers:
 *     MiAllocateProcessShadow @ 0x140A5A1B0 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 */

__int64 __fastcall MiMarkPfnTradable(_QWORD *a1)
{
  unsigned __int8 v2; // al

  v2 = MiLockPageInline((__int64)a1);
  *a1 |= 1uLL;
  return MiUnlockPage((__int64)a1, v2);
}
