/*
 * XREFs of PnpSetDeviceAffinityThread @ 0x1403751EC
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14037529C (PnpSendIrp.c)
 *     PnpCallAddDevice @ 0x1409C71F8 (PnpCallAddDevice.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140206990 (KeAndGroupAffinityEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1403A8640 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PnpSetDeviceAffinityThread(__int64 a1, struct _GROUP_AFFINITY *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // r8d
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF

  Affinity = 0LL;
  if ( !a1 )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v3 )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 660);
  if ( v5 > 0xFFFFFFFD )
    return 0LL;
  if ( v5 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  KeQueryNodeActiveAffinity(*(_WORD *)(v3 + 660), &Affinity, 0LL);
  KeAndGroupAffinityEx(&KeActiveProcessors, (__int64)&Affinity, (char *)&Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
