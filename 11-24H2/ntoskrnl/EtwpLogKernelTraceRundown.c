/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x140A0EFB0
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A0EDBC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A0EEA0 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A0F418 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A0F484 (EtwpLogGroupMask.c)
 */

__int64 __fastcall EtwpLogKernelTraceRundown(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, int a6)
{
  unsigned int v8; // esi
  __int64 v10; // r9

  v8 = a2;
  EtwpLogGroupMask(a1, a2, a3, 32LL);
  LOBYTE(v10) = a4;
  EtwpKernelTraceRundown(a3, a1, v8, v10, a5, a6);
  return EtwpLogAlwaysPresentRundown(a1, v8);
}
