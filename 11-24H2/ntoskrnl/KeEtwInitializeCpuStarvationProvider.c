/*
 * XREFs of KeEtwInitializeCpuStarvationProvider @ 0x1405B15EC
 * Callers:
 *     EtwpCpuStarvationProvEnableCallback @ 0x14064AE00 (EtwpCpuStarvationProvEnableCallback.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 KeEtwInitializeCpuStarvationProvider()
{
  __int64 Prcb; // rbx
  _WORD *Pool3; // rax
  __int64 result; // rax
  unsigned __int16 *v3[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 v4; // [rsp+50h] [rbp-10h]
  int v5; // [rsp+52h] [rbp-Eh]
  __int16 v6; // [rsp+56h] [rbp-Ah]
  unsigned int v7; // [rsp+70h] [rbp+10h] BYREF

  v3[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
  v5 = 0;
  v3[0] = (unsigned __int16 *)&KeActiveProcessors;
  v6 = 0;
  v7 = 0;
  v4 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v7, v3);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v7);
    if ( !*(_QWORD *)(Prcb + 14544) )
    {
      Pool3 = (_WORD *)ExAllocatePool3(0x40uLL, 1);
      if ( Pool3 )
      {
        *(_BYTE *)Pool3 = 19;
        Pool3[1] = 0;
        *((_QWORD *)Pool3 + 3) = KiLogSingleDpcSoftTimeoutEvent;
        *((_QWORD *)Pool3 + 4) = Prcb;
        *((_QWORD *)Pool3 + 7) = 0LL;
        *((_QWORD *)Pool3 + 2) = 0LL;
        *((_BYTE *)Pool3 + 1) = 2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Prcb + 14544), (signed __int64)Pool3, 0LL) )
          ExFreePoolWithTag(Pool3, 0x7043694Bu);
      }
    }
  }
  return result;
}
