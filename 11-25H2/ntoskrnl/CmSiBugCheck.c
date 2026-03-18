/*
 * XREFs of CmSiBugCheck @ 0x14065D19C
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x1407CF4FC (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x1407CF51C (HvpInpageErrorFilter.c)
 *     CmpInitializeValueNameString @ 0x140886BD4 (CmpInitializeValueNameString.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpInitializeKeyNameString @ 0x140A734DC (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
