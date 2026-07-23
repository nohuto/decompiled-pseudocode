/*
 * XREFs of MiReleasePageHash @ 0x1406923E0
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x14067AF10 (MiAttemptChangePagingFileMaximum.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140E376A8,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (unsigned int)((a2 * (unsigned __int64)(unsigned int)dword_140E373CC) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140E373CC) & 0xFFF) != 0));
}
