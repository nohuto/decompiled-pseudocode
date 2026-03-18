/*
 * XREFs of MmReturnPoolQuota @ 0x14024C8E0
 * Callers:
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x14024C640 (PspReturnQuota.c)
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140E2CAD0 -= a2;
  else
    qword_140E2CAD8 -= a2;
}
