/*
 * XREFs of MiMarkPfnTradable @ 0x1404AE4B0
 * Callers:
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 */

__int64 __fastcall MiMarkPfnTradable(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // al

  v5 = MiLockPageInline((__int64)a1, a2, a3, a4);
  *a1 |= 1uLL;
  return MiUnlockPage((__int64)a1, v5);
}
