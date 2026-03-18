/*
 * XREFs of ExpLicUpdateChecksum @ 0x14065590C
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406557A0 (ExpGetLicenseTamperState.c)
 *     sub_1407B85B0 @ 0x1407B85B0 (sub_1407B85B0.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}
