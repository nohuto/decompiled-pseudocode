/*
 * XREFs of RtlpHpLfhBlockBitmapInitialize @ 0x1403D96B0
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1403D8348 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403D8A60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhBlockBitmapInitialize(void *a1, unsigned int a2)
{
  char v2; // bl
  unsigned __int64 v4; // rdi
  __int64 result; // rax

  v2 = a2;
  v4 = ((unsigned __int64)a2 + 63) >> 6;
  memset_0(a1, 0, 8LL * (unsigned int)v4);
  result = (unsigned int)(v4 - 1);
  *((_QWORD *)a1 + result) = ~(0xFFFFFFFFFFFFFFFFuLL >> (-v2 & 0x3F));
  return result;
}
