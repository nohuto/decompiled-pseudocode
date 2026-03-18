/*
 * XREFs of MiReleasePageHash @ 0x140685EB0
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x14066E484 (MiAttemptChangePagingFileMaximum.c)
 *     MiDeletePagefile @ 0x1407DF058 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 */

char __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140E37328,
           (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           ((a2 * (unsigned __int64)(unsigned int)dword_140E3704C) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140E3704C) & 0xFFF) != 0));
}
