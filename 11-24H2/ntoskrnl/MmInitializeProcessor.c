/*
 * XREFs of MmInitializeProcessor @ 0x140B64108
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KeGetProcessorNodeNumber @ 0x14042ACE0 (KeGetProcessorNodeNumber.c)
 *     MiAllocatePrcb @ 0x14068FE5C (MiAllocatePrcb.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  __int64 ProcessorNodeNumber; // rbx
  __int64 Prcb; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[1] = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 36784) = -1LL;
  ProcessorNodeNumber = (unsigned __int16)KeGetProcessorNodeNumber(a1);
  Prcb = MiAllocatePrcb(ProcessorNodeNumber);
  v7 = (_QWORD *)Prcb;
  if ( !Prcb )
    return 0LL;
  *(_DWORD *)(Prcb + 320) = 0;
  *(_DWORD *)(a1 + 34644) = *(unsigned __int8 *)(57216 * ProcessorNodeNumber + qword_140E38D50 + 15144);
  *(_DWORD *)(a1 + 34640) = ExGenRandom(1, v4, v5, v6);
  MiInitializePageColorBase(0LL, 3, ProcessorNodeNumber + 1, (__int64)v10);
  v10[0] = a1 + 34640;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(v7 + 1), (__int64)v10, 15, 8u) )
  {
LABEL_6:
    ExFreePoolWithTag(v7, 0);
    return 0LL;
  }
  v9 = MiReservePtes((__int64)&qword_140E376A8, 1u);
  v7[42] = v9;
  if ( !v9 )
  {
    MiDeleteUltraThreadContext((__int64)(v7 + 1));
    goto LABEL_6;
  }
  result = 1LL;
  v7[41] = *(_QWORD *)(384 * ProcessorNodeNumber + qword_140E2DC38 + 376);
  *(_QWORD *)(a1 + 34872) = v7;
  return result;
}
