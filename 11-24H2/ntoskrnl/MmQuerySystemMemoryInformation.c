/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1403D3E68
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1403D3DF0 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x1407B0C30 (EtwpLogMemInfoRundown.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140E37550;
  *((_QWORD *)&v2 + 1) = qword_140E2CA48;
  *(_QWORD *)&v3 = qword_140E3D8C0;
  *((_QWORD *)&v3 + 1) = qword_140E3D740;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
