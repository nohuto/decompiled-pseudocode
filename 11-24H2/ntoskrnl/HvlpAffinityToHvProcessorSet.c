/*
 * XREFs of HvlpAffinityToHvProcessorSet @ 0x1403A4864
 * Callers:
 *     HvlParkedVirtualProcessors @ 0x1403A3A14 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403A4210 (HvlRetargetDeviceInterrupt.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403A4524 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x1403A46F4 (HvlpFastFlushListTbEx.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1403A4C68 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404BB764 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlMapDeviceInterrupt @ 0x140584AD0 (HvlMapDeviceInterrupt.c)
 *     HvlWakeVirtualProcessors @ 0x140586AD0 (HvlWakeVirtualProcessors.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A2028 (HvlpSlowFlushAddressSpaceTbEx.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlpAffinityToHvProcessorSet(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v7; // rbp
  unsigned int v8; // r9d
  unsigned __int16 v9; // si
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  char v13; // al
  __int64 v14; // rax
  char v15; // [rsp+50h] [rbp+8h]

  result = 0LL;
  v4 = a3;
  a2[1] = 0LL;
  if ( !a1 )
  {
    *a2 = 1LL;
    return result;
  }
  *a2 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    while ( !v7 )
    {
      if ( ++v9 >= *(_WORD *)a1 )
      {
        if ( v8 )
        {
          if ( v8 == 64 )
          {
            v14 = -1LL;
            goto LABEL_14;
          }
        }
        else
        {
          a2[2] = 0LL;
          v8 = 1;
        }
        v14 = (1LL << v8) - 1;
LABEL_14:
        a2[1] = v14;
        return 8 * v8;
      }
      v7 = *(_QWORD *)(a1 + 8LL * v9 + 8);
    }
    _BitScanForward64(&v10, v7);
    v7 &= ~(1LL << v10);
    v11 = *((unsigned int *)qword_140F22998 + 64 * v9 + (unsigned __int8)v10);
    v12 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v11];
    v13 = HvlpVirtualProcessorMapping[2 * v11 + 1];
    v15 = v13;
    if ( (unsigned int)v12 < v8 )
      goto LABEL_5;
    if ( 8 * (unsigned __int64)(unsigned int)(v12 + 1) > v4 )
      return 0xFFFFFFFFLL;
    memset_0(&a2[v8 + 2], 0, 8LL * ((unsigned int)v12 - v8 + 1));
    v13 = v15;
    v8 = v12 + 1;
LABEL_5:
    a2[v12 + 2] |= 1LL << v13;
  }
}
