/*
 * XREFs of KiGetNumberOfActiveSubNodes @ 0x140428784
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042819C (KeConfigureHeteroProcessors.c)
 *     KeUpdateProcessorRestrictions @ 0x1405B16F8 (KeUpdateProcessorRestrictions.c)
 * Callees:
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140305140 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiInitializeSystemSubNodeEnumerationContext @ 0x1404287F0 (KiInitializeSystemSubNodeEnumerationContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 KiGetNumberOfActiveSubNodes()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v3[2]; // [rsp+28h] [rbp-30h] BYREF

  v2 = 0LL;
  v0 = 0;
  memset(v3, 0, sizeof(v3));
  KiInitializeSystemSubNodeEnumerationContext(v3, 0LL);
  while ( !(unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v3, &v2) )
    ++v0;
  return v0;
}
