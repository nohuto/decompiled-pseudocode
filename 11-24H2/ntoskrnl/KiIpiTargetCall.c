/*
 * XREFs of KiIpiTargetCall @ 0x1405C8000
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1404656E8 (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x1404679AC (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiIpiTargetCall(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-148h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v13[264]; // [rsp+48h] [rbp-130h] BYREF

  v11 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 12LL;
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  if ( KeGetCurrentPrcb()->Number == a1 )
  {
    v11 = guard_dispatch_icall_no_overrides(a3, v8, a3, a4);
  }
  else
  {
    memset_0(v13, 0, 0x100uLL);
    v12[1] = 0;
    v12[0] = 2097153;
    memset_0(v13, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v12, a1);
    KiIpiSendPacket(0, (char *)v12, (__int64)KiIpiTargetCallIpi, a2, a3, (__int64)&v11);
    KiIpiStallOnPacketTargets(v9);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v11;
}
