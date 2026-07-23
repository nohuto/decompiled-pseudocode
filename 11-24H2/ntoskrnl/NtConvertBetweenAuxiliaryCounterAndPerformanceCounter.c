/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140A8ADD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        BOOLEAN ConvertAuxiliaryToPerformanceCounter,
        PLARGE_INTEGER PerformanceOrAuxiliaryCounterValue,
        PLARGE_INTEGER ConvertedValue,
        PLARGE_INTEGER ConversionError)
{
  LONGLONG QuadPart; // r14
  NTSTATUS v7; // ecx
  LONGLONG v9; // [rsp+20h] [rbp-28h] BYREF
  LONGLONG v10; // [rsp+28h] [rbp-20h]
  LONGLONG v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return guard_dispatch_icall_no_overrides(PerformanceOrAuxiliaryCounterValue->QuadPart, ConvertedValue);
  if ( ((unsigned __int8)PerformanceOrAuxiliaryCounterValue & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  QuadPart = PerformanceOrAuxiliaryCounterValue->QuadPart;
  v11 = PerformanceOrAuxiliaryCounterValue->QuadPart;
  ProbeForWrite(ConvertedValue, 8uLL, 4u);
  if ( ConversionError )
    ProbeForWrite(ConversionError, 8uLL, 4u);
  v7 = guard_dispatch_icall_no_overrides(QuadPart, &v9);
  if ( v7 >= 0 )
  {
    ConvertedValue->QuadPart = v9;
    if ( ConversionError )
      ConversionError->QuadPart = v10;
  }
  return v7;
}
