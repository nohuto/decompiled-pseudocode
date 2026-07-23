/*
 * XREFs of EtwpContextRegisterTracingApc @ 0x14064ADC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceContextRegisters @ 0x14064B6B8 (EtwpTraceContextRegisters.c)
 */

__int64 __fastcall EtwpContextRegisterTracingApc(__int64 *a1, __int64 a2, int *a3, int *a4)
{
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v4 = *a1;
  v7 = *a3;
  v6 = *a4;
  return EtwpTraceContextRegisters(v4, &v6, KeGetCurrentThread(), 0LL);
}
