/*
 * XREFs of VslRequestSecureKernelDebuggerBreakIn @ 0x14058E090
 * Callers:
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslRequestSecureKernelDebuggerBreakIn()
{
  int v0; // edx
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _BYTE v3[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v3, 0, 0x68uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v0) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v0);
    }
  }
  result = VslpEnterIumSecureMode(2u, 275LL, 0, (__int64)v3);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
