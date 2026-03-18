/*
 * XREFs of MmInitializeProcessor @ 0x140B51F08
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     KeGetProcessorNodeNumber @ 0x14043ACA0 (KeGetProcessorNodeNumber.c)
 *     MiAllocatePrcb @ 0x14068349C (MiAllocatePrcb.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  __int64 ProcessorNodeNumber; // rbx
  __int64 Prcb; // rax
  _QWORD *v4; // rsi
  __int64 result; // rax
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[1] = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 36784) = -1LL;
  ProcessorNodeNumber = (unsigned __int16)KeGetProcessorNodeNumber(a1);
  Prcb = MiAllocatePrcb(ProcessorNodeNumber);
  v4 = (_QWORD *)Prcb;
  if ( !Prcb )
    return 0LL;
  *(_DWORD *)(Prcb + 320) = 0;
  *(_DWORD *)(a1 + 34644) = *(unsigned __int8 *)(57216 * ProcessorNodeNumber + qword_140E389D0 + 15144);
  *(_DWORD *)(a1 + 34640) = ExGenRandom(1);
  MiInitializePageColorBase(0LL, 3, ProcessorNodeNumber + 1, (__int64)v7);
  v7[0] = a1 + 34640;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(v4 + 1), (__int64)v7, 15, 8LL) )
  {
LABEL_6:
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  v6 = MiReservePtes((__int64)&qword_140E37328, 1u);
  v4[42] = v6;
  if ( !v6 )
  {
    MiDeleteUltraThreadContext((__int64)(v4 + 1));
    goto LABEL_6;
  }
  result = 1LL;
  v4[41] = *(_QWORD *)(384 * ProcessorNodeNumber + qword_140E2D8B8 + 376);
  *(_QWORD *)(a1 + 34872) = v4;
  return result;
}
