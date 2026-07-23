/*
 * XREFs of MmReturnPoolQuota @ 0x14027CEF0
 * Callers:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x14027CC50 (PspReturnQuota.c)
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140E2CC10 -= a2;
  else
    qword_140E2CC18 -= a2;
}
