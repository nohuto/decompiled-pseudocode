/*
 * XREFs of CmpFatalFilter @ 0x1407DB3DC
 * Callers:
 *     CmpQueryKeyName @ 0x140952F50 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
