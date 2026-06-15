/*
 * XREFs of ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x180068A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsStrictPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 108) == 1;
}
