/*
 * XREFs of MiReservePageHash @ 0x140685F10
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x14066E484 (MiAttemptChangePagingFileMaximum.c)
 *     MiCreatePagefile @ 0x1407DE100 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 */

__int64 __fastcall MiReservePageHash(unsigned int a1)
{
  __int64 result; // rax

  result = MiReservePtes(
             (__int64)&qword_140E37328,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140E3704C) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140E3704C) & 0xFFF) != 0));
  if ( result )
    return result << 25 >> 16;
  return result;
}
