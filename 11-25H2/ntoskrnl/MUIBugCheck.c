/*
 * XREFs of MUIBugCheck @ 0x14064EA1C
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140A168A0 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
