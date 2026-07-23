/*
 * XREFs of PspCheckCpuPartitionCreateAccess @ 0x140776CD4
 * Callers:
 *     PsCreateCpuPartition @ 0x14077665C (PsCreateCpuPartition.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 */

__int64 __fastcall PspCheckCpuPartitionCreateAccess(char a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned int v4[3]; // [rsp+64h] [rbp-1A4h] BYREF
  _BYTE v5[32]; // [rsp+70h] [rbp-198h] BYREF
  int v6[32]; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v7[224]; // [rsp+110h] [rbp-F8h] BYREF

  memset_0(v5, 0, 0xA0uLL);
  memset_0(v7, 0, sizeof(v7));
  v4[0] = 0;
  if ( !a1 )
    return 0LL;
  result = SeCreateAccessState(v5, v7, 0x2000000LL, &PsCpuPartitionType->TypeInfo.GenericMapping);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SeAccessCheckWithHint(
      PsCpuPartitionDefaultSd,
      7,
      v6,
      0,
      0x2000000u,
      0,
      0LL,
      &PsCpuPartitionType->TypeInfo.GenericMapping.GenericRead,
      a1,
      v4,
      (int *)&v3);
    SeDeleteAccessState(v5);
    return v3;
  }
  return result;
}
