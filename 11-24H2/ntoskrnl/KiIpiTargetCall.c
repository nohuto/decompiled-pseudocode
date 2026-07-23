/*
 * XREFs of KiIpiTargetCall @ 0x1405C5730
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x14045D668 (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x14045F44C (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiIpiTargetCall(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-148h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v12[264]; // [rsp+48h] [rbp-130h] BYREF

  v10 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 12LL;
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  if ( KeGetCurrentPrcb()->Number == a1 )
  {
    v10 = guard_dispatch_icall_no_overrides(a3, v7);
  }
  else
  {
    memset_0(v12, 0, 0x100uLL);
    v11[1] = 0;
    v11[0] = 2097153;
    memset_0(v12, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v11, a1);
    KiIpiSendPacket(0, (char *)v11, (__int64)KiIpiTargetCallIpi, a2, a3, (__int64)&v10);
    KiIpiStallOnPacketTargets(v8);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
