/*
 * XREFs of CmSiBugCheck @ 0x140668C6C
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x1407DEDD4 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x1407DEDF4 (HvpInpageErrorFilter.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     CmpInitializeValueNameString @ 0x1409FF384 (CmpInitializeValueNameString.c)
 *     CmpInitializeKeyNameString @ 0x140A757B4 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
