/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1407B2510
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x1405ACFB0 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryAuxiliaryCounterFrequency(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency((__int64)a1);
  ProbeForWrite(a1, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency((__int64)&v3);
  if ( (int)result >= 0 )
    *a1 = v3;
  return result;
}
