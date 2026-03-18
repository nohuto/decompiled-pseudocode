/*
 * XREFs of KeQueryBootTimeValues @ 0x14049462C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     PipHardwareConfigInit @ 0x140C20B04 (PipHardwareConfigInit.c)
 *     EtwpFixBootSystemTime @ 0x140C3D028 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3D738 (EtwpInitializeBootTimeStamps.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryBootTimeValues(_QWORD *a1, LARGE_INTEGER *a2, _QWORD *a3)
{
  _QWORD *v5; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  *v5 = MEMORY[0xFFFFF78000000014];
  *a2 = KeBootTime;
  *a3 = KeBootTimeBias;
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
