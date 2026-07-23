/*
 * XREFs of CmSiBugCheck @ 0x140669E44
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x1407DF324 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x1407DF344 (HvpInpageErrorFilter.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     CmpInitializeValueNameString @ 0x1409F82CC (CmpInitializeValueNameString.c)
 *     CmpInitializeKeyNameString @ 0x140A6FC54 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
