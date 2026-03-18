/*
 * XREFs of MiReservePageHash @ 0x140691370
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x140679D30 (MiAttemptChangePagingFileMaximum.c)
 *     MiCreatePagefile @ 0x1407EDFA0 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 */

__int64 __fastcall MiReservePageHash(unsigned int a1)
{
  __int64 result; // rax

  result = MiReservePtes(
             (__int64)&qword_140E37568,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140E3728C) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140E3728C) & 0xFFF) != 0));
  if ( result )
    return result << 25 >> 16;
  return result;
}
