/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1407C2130
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x1405AD8B0 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  NTSTATUS result; // eax
  LONGLONG v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency((__int64)AuxiliaryCounterFrequency, v1);
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency((__int64)&v5, v3);
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v5;
  return result;
}
