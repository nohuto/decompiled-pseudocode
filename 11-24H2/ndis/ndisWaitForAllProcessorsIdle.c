/*
 * XREFs of ndisWaitForAllProcessorsIdle @ 0x140151DD0
 * Callers:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1401420DC (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisWaitForExternalDriver @ 0x140152290 (ndisWaitForExternalDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void ndisWaitForAllProcessorsIdle()
{
  _GROUP_AFFINITY *p_PreviousAffinity; // rbp
  USHORT ActiveGroupCount; // di
  unsigned int v2; // ebx
  USHORT i; // si
  ULONG ActiveProcessorCount; // eax
  ULONG v5; // r14d
  ULONG j; // r15d
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  p_PreviousAffinity = &PreviousAffinity;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ActiveGroupCount = KeQueryActiveGroupCount();
  v2 = KeSetActualBasePriorityThread(KeGetCurrentThread(), 2LL);
  for ( i = 0; i < ActiveGroupCount; ++i )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(i);
    Affinity.Group = i;
    v5 = 0;
    for ( j = ActiveProcessorCount; v5 < j; p_PreviousAffinity = 0LL )
    {
      Affinity.Mask = 1LL << v5;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      ++v5;
    }
  }
  KeSetActualBasePriorityThread(KeGetCurrentThread(), v2);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
