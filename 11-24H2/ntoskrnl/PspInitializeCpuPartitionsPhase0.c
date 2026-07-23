/*
 * XREFs of PspInitializeCpuPartitionsPhase0 @ 0x140C37808
 * Callers:
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     PsCreateCpuPartition @ 0x14077665C (PsCreateCpuPartition.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C375B0 (PspInitializeCpuPartitionsDefaultSd.c)
 */

__int64 PspInitializeCpuPartitionsPhase0()
{
  __int64 result; // rax
  _DWORD v1[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v2; // [rsp+48h] [rbp-30h]
  const wchar_t *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  __int64 v6; // [rsp+60h] [rbp-18h]
  __int64 v7; // [rsp+68h] [rbp-10h]

  PspCpuPartitionListLock = 0LL;
  v5 = 0;
  v1[1] = 0;
  qword_140FDA3F0 = (__int64)&PspCpuPartitionListHead;
  PspCpuPartitionListHead = (__int64)&PspCpuPartitionListHead;
  result = PspInitializeCpuPartitionsDefaultSd(&PsCpuPartitionDefaultSd, 0);
  if ( (int)result >= 0 )
  {
    v2 = 0LL;
    v7 = 0LL;
    v3 = L"^`";
    v6 = PsCpuPartitionDefaultSd;
    v1[0] = 48;
    v4 = 592;
    result = PsCreateCpuPartition((__int64)v1, 917511LL, 0, 1, 0LL, &PspSystemCpuPartition, 0LL);
    if ( (int)result >= 0 )
    {
      result = 0LL;
      KiSystemCpuPartition = *(_QWORD *)PspSystemCpuPartition;
    }
  }
  return result;
}
