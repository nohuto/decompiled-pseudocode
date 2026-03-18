/*
 * XREFs of KeAllocateKernelHiberSwapShadowStacks @ 0x1405B8408
 * Callers:
 *     VslAllocateSecureHibernateResources @ 0x140703628 (VslAllocateSecureHibernateResources.c)
 *     VslFreeSecureHibernateResources @ 0x140703984 (VslFreeSecureHibernateResources.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KiAllocateProcessorHiberSwapShadowStacks @ 0x1405B8504 (KiAllocateProcessorHiberSwapShadowStacks.c)
 */

__int64 __fastcall KeAllocateKernelHiberSwapShadowStacks(unsigned int a1)
{
  int ProcessorHiberSwapShadowStacks; // ebx
  __int64 Prcb; // rax
  __int64 v5; // rax
  struct _KAFFINITY_EX *v6; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]
  __int16 v8; // [rsp+30h] [rbp-10h]
  int v9; // [rsp+32h] [rbp-Eh]
  __int16 v10; // [rsp+36h] [rbp-Ah]
  unsigned int v11; // [rsp+68h] [rbp+28h] BYREF

  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !(_BYTE)KiKernelCetEnabled )
    return 0LL;
  ProcessorHiberSwapShadowStacks = 0;
  ExAcquireFastMutex(&KiDynamicProcessorLock);
  if ( a1 )
  {
    if ( !KiHiberSwapStacksAllocated )
    {
      v7 = KeActiveProcessors.Bitmap[0];
      v8 = 0;
      v6 = &KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, (unsigned __int16 **)&v6) )
      {
        Prcb = KeGetPrcb(v11);
        ProcessorHiberSwapShadowStacks = KiAllocateProcessorHiberSwapShadowStacks(Prcb, a1);
        if ( ProcessorHiberSwapShadowStacks < 0 )
        {
          a1 = 0;
          goto LABEL_9;
        }
      }
    }
  }
  else
  {
LABEL_9:
    v7 = KeActiveProcessors.Bitmap[0];
    v8 = 0;
    v6 = &KeActiveProcessors;
    do
    {
      if ( (unsigned int)KeEnumerateNextProcessor(&v11, (unsigned __int16 **)&v6) )
        break;
      v5 = KeGetPrcb(v11);
      ProcessorHiberSwapShadowStacks = KiAllocateProcessorHiberSwapShadowStacks(v5, a1);
    }
    while ( ProcessorHiberSwapShadowStacks >= 0 );
  }
  KiHiberSwapStacksAllocated = a1;
  KeReleaseGuardedMutex(&KiDynamicProcessorLock);
  return (unsigned int)ProcessorHiberSwapShadowStacks;
}
