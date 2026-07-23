/*
 * XREFs of MiReservePageHash @ 0x140692440
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x14067AF10 (MiAttemptChangePagingFileMaximum.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 */

__int64 __fastcall MiReservePageHash(unsigned int a1)
{
  __int64 result; // rax

  result = MiReservePtes(
             (__int64)&qword_140E376A8,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140E373CC) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140E373CC) & 0xFFF) != 0));
  if ( result )
    return result << 25 >> 16;
  return result;
}
