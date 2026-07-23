/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x140261DE8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140261D70 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x1407B1080 (EtwpLogMemInfoRundown.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140E37690;
  *((_QWORD *)&v2 + 1) = qword_140E2CB88;
  *(_QWORD *)&v3 = qword_140E3DA00;
  *((_QWORD *)&v3 + 1) = qword_140E3D880;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
