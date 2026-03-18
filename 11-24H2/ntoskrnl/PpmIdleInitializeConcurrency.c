/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x14074A0E0
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmParkInitParkNode @ 0x1405E3894 (PpmParkInitParkNode.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KeCountSetBitsAffinityEx @ 0x1403AFC80 (KeCountSetBitsAffinityEx.c)
 *     PpmQueryTime @ 0x14044D624 (PpmQueryTime.c)
 *     KeFirstGroupAffinityEx @ 0x14045A8C0 (KeFirstGroupAffinityEx.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(__int64 a1, unsigned __int16 *a2, __int64 *a3, __int64 a4)
{
  int v7; // esi
  unsigned int GroupAffinity; // r14d
  __int64 Pool3; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-20h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v7 = KeCountSetBitsAffinityEx(a2);
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    GroupAffinity = 0;
  else
    GroupAffinity = KeFirstGroupAffinityEx((__int64)&Affinity, a2);
  if ( a4 && v7 == *(_DWORD *)(a4 + 8) )
  {
    Pool3 = a4;
  }
  else
  {
    if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    {
      Pool3 = ExAllocatePool3(0x40uLL, 1);
    }
    else
    {
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      Pool3 = ExAllocatePool2(0x40uLL);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    if ( Pool3 )
    {
      *(_QWORD *)Pool3 = 0LL;
      *(_DWORD *)(Pool3 + 8) = v7;
      PpmQueryTime();
    }
    GroupAffinity = -1073741670;
  }
  *a3 = Pool3;
  return GroupAffinity;
}
