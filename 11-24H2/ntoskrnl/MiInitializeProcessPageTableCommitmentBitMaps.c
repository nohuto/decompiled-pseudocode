/*
 * XREFs of MiInitializeProcessPageTableCommitmentBitMaps @ 0x1404853B8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeProcessPageTableCommitmentBitMaps(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // r10
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 1040);
  v2 = 256LL;
  v3 = 0LL;
  v1[164] = 256LL;
  v1[165] = v1 + 156;
  v4 = v1 + 166;
  do
  {
    v5 = qword_140E2F3E8[v3] + qword_140E2F3C8;
    v3 = (unsigned int)(v3 + 1);
    v2 <<= 9;
    *v4 = v2;
    v4[1] = v5;
    v4 += 2;
    result = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)result < 3 );
  return result;
}
