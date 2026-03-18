/*
 * XREFs of HalpNmiReboot @ 0x140557354
 * Callers:
 *     HalpReboot @ 0x14054237C (HalpReboot.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     HalpIsHvPresent @ 0x14049BF40 (HalpIsHvPresent.c)
 *     HalSendNMI @ 0x140541990 (HalSendNMI.c)
 *     HalpInterruptRebootService @ 0x1405578D0 (HalpInterruptRebootService.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 HalpNmiReboot()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi
  struct _KAFFINITY_EX v3; // [rsp+20h] [rbp-128h] BYREF

  memset_0(&v3.8, 0, sizeof(v3.8));
  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CpuStep & 0xFF00;
  if ( ((unsigned int)result | ((unsigned __int8)CurrentPrcb->CpuType << 16)) > 0x50100 )
  {
    v2 = HalpInterruptProcessorsStarted;
    v3.Reserved = 0;
    HalpInterruptNmiRebootInProgress = 1;
    *(_DWORD *)&v3.Count = 2097153;
    memset_0(&v3.8, 0, sizeof(v3.8));
    KiCopyAffinityEx(&v3, 0x20u, &KeActiveProcessors);
    KeRemoveProcessorAffinityEx(&v3.Count, CurrentPrcb->Number);
    HalSendNMI(&v3);
    KeStallExecutionProcessor(0x1F4u);
    if ( HalpIsHvPresent() )
    {
      while ( HalpInterruptProcessorsStarted > 1 )
        _mm_pause();
    }
    result = (unsigned int)HalpInterruptProcessorsStarted;
    if ( HalpInterruptProcessorsStarted != v2 )
      HalpInterruptRebootService(0LL, 0LL);
  }
  return result;
}
