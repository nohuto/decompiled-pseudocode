/*
 * XREFs of PsUnEstablishWin32Callouts @ 0x140774930
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __noreturn PsUnEstablishWin32Callouts()
{
  KeBugCheckEx(0x1FCu, 0LL, 0LL, 0LL, 0LL);
}
