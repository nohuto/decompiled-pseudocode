/*
 * XREFs of MmReturnPoolQuota @ 0x1403C6C30
 * Callers:
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x1403C6990 (PspReturnQuota.c)
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140E2C890 -= a2;
  else
    qword_140E2C898 -= a2;
}
