/*
 * XREFs of ExpLicUpdateChecksum @ 0x14065400C
 * Callers:
 *     ExpGetLicenseTamperState @ 0x140653EA0 (ExpGetLicenseTamperState.c)
 *     sub_1407B8A00 @ 0x1407B8A00 (sub_1407B8A00.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
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
