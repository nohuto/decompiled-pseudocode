/*
 * XREFs of WheapGetTimestamp @ 0x140419F0C
 * Callers:
 *     WheaInitializeRecordHeader @ 0x140419EA0 (WheaInitializeRecordHeader.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
 */

__int64 __fastcall WheapGetTimestamp(_BYTE *a1)
{
  int v2; // ecx
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  RtlpTimeToTimeFields(&v5, &v4);
  v2 = (__int16)v4;
  *a1 = BYTE10(v4);
  a1[1] = BYTE8(v4);
  a1[2] = BYTE6(v4);
  *(_QWORD *)a1 &= ~0x1000000uLL;
  a1[4] = BYTE4(v4);
  a1[5] = BYTE2(v4);
  result = (unsigned int)(100 * (v2 / 100));
  a1[7] = v2 / 100;
  a1[6] = v2 % 100;
  return result;
}
