/*
 * XREFs of KeFreeCalloutStack @ 0x140A7D8D0
 * Callers:
 *     EtwpAdjustStackLookasideBuffers @ 0x140488FA4 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpStackDeleteProcessor @ 0x14064DFC0 (EtwpStackDeleteProcessor.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *P)
{
  __int64 v1; // rsi
  BOOL v3; // ebp
  int v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int128 i; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  v3 = P[4] != 0;
  v5 = 0LL;
  for ( i = 0LL; (unsigned int)v1 < (unsigned __int8)P[5]; v1 = (unsigned int)(v1 + 1) )
  {
    v6 = *(_QWORD *)&P[8 * v1 + 64];
    v4[0] = v3;
    v4[1] = 5;
    MmDeleteKernelStack(v4);
    *(_QWORD *)&P[8 * v1 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(P, 0);
}
