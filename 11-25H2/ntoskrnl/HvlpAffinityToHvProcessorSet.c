/*
 * XREFs of HvlpAffinityToHvProcessorSet @ 0x14026D37C
 * Callers:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x14026C074 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x14026C870 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1404518A8 (HvlpSlowFlushListTbEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404C2F48 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404C62C0 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlMapDeviceInterrupt @ 0x140583FD0 (HvlMapDeviceInterrupt.c)
 *     HvlWakeVirtualProcessors @ 0x140586170 (HvlWakeVirtualProcessors.c)
 *     HvlpFastFlushListTbEx @ 0x140695B20 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140695D9C (HvlpSlowFlushAddressSpaceTbEx.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
            goto LABEL_13;
          }
        }
        else
        {
          a2[2] = 0LL;
          v8 = 1;
        }
        v14 = (1LL << v8) - 1;
LABEL_13:
        a2[1] = v14;
        return 8 * v8;
      }
      v7 = *(_QWORD *)(a1 + 8LL * v9 + 8);
    }
    _BitScanForward64(&v10, v7);
    v7 &= ~(1LL << v10);
    v11 = *((unsigned int *)qword_140F216A8 + 64 * v9 + (unsigned __int8)v10);
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
