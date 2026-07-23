/*
 * XREFs of MUIBugCheck @ 0x140658F00
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1408F7D70 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
