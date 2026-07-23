/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140A89740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        BOOLEAN ConvertAuxiliaryToPerformanceCounter,
        PLARGE_INTEGER PerformanceOrAuxiliaryCounterValue,
        PLARGE_INTEGER ConvertedValue,
        PLARGE_INTEGER ConversionError)
{
  LONGLONG QuadPart; // r14
  NTSTATUS v7; // ecx

  if ( !KeGetCurrentThread()->PreviousMode )
    return guard_dispatch_icall_no_overrides(PerformanceOrAuxiliaryCounterValue->QuadPart);
  if ( ((unsigned __int8)PerformanceOrAuxiliaryCounterValue & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  QuadPart = PerformanceOrAuxiliaryCounterValue->QuadPart;
  ProbeForWrite(ConvertedValue, 8uLL, 4u);
  if ( ConversionError )
    ProbeForWrite(ConversionError, 8uLL, 4u);
  v7 = guard_dispatch_icall_no_overrides(QuadPart);
  if ( v7 >= 0 )
  {
    ConvertedValue->QuadPart = 0LL;
    if ( ConversionError )
      ConversionError->QuadPart = 0LL;
  }
  return v7;
}
