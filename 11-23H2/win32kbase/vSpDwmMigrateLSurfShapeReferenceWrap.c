/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C0232948
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C015A180 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vSpDwmMigrateLSurfShapeReferenceWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02946A8;
  if ( qword_1C02946A8 )
    return (__int64 (*)(void))qword_1C02946A8();
  return result;
}
