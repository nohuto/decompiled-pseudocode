/*
 * XREFs of KiIpiTargetCall @ 0x1405C3DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x140466C7C (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x14046925C (KiIpiStallOnPacketTargets.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiIpiTargetCall(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-148h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v11[264]; // [rsp+48h] [rbp-130h] BYREF

  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  if ( KeGetCurrentPrcb()->Number == a1 )
  {
    v9 = guard_dispatch_icall_no_overrides(a3);
  }
  else
  {
    memset_0(v11, 0, 0x100uLL);
    v10[1] = 0;
    v10[0] = 2097153;
    memset_0(v11, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v10, a1);
    KiIpiSendPacket(0, (char *)v10, (__int64)KiIpiTargetCallIpi, a2, a3, (__int64)&v9);
    KiIpiStallOnPacketTargets(v7);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v9;
}
