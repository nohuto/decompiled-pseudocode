/*
 * XREFs of HalpCallEfiGetTime @ 0x14054A144
 * Callers:
 *     HalEfiGetTime @ 0x140549C4C (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x140549E64 (HalEfiSetTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCallEfiGetTime(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))*HalEfiRuntimeServicesTable)(a1, 0LL);
}
