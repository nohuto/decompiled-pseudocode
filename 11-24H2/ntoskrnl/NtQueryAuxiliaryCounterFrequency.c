/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1407C4310
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x1405B0940 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryAuxiliaryCounterFrequency(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency((__int64)a1, a2, a3, a4);
  ProbeForWrite(a1, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency((__int64)&v9, v5, v6, v7);
  if ( (int)result >= 0 )
    *a1 = v9;
  return result;
}
