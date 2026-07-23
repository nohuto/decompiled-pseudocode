/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x140748410
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     PpmQueryTime @ 0x140444524 (PpmQueryTime.c)
 *     KeFirstGroupAffinityEx @ 0x14044FD10 (KeFirstGroupAffinityEx.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(__int64 a1, unsigned __int16 *a2, __int64 *a3, __int64 a4)
{
  int v7; // esi
  unsigned int GroupAffinity; // r14d
  __int64 Pool3; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-30h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-20h] BYREF

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
      Pool3 = ExAllocatePool2(0x40uLL, (unsigned int)(8 * v7 + 336), 0x704D5050u);
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
