/*
 * XREFs of MiReleasePageHash @ 0x140691310
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x140679D30 (MiAttemptChangePagingFileMaximum.c)
 *     MiDeletePagefile @ 0x1407EEEF8 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140E37568,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (unsigned int)((a2 * (unsigned __int64)(unsigned int)dword_140E3728C) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140E3728C) & 0xFFF) != 0));
}
