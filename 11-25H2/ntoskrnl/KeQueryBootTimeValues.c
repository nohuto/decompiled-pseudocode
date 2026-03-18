/*
 * XREFs of KeQueryBootTimeValues @ 0x140496000
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PipHardwareConfigInit @ 0x140C0F9A4 (PipHardwareConfigInit.c)
 *     EtwpFixBootSystemTime @ 0x140C2BD48 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C2C458 (EtwpInitializeBootTimeStamps.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
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
