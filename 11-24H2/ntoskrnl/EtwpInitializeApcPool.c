/*
 * XREFs of EtwpInitializeApcPool @ 0x140454140
 * Callers:
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1407A93F8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 * Callees:
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 */

void (__fastcall *__fastcall EtwpInitializeApcPool(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4))(__int64 a1, __int64 a2, unsigned int **a3)
{
  void (__fastcall *result)(__int64, __int64, unsigned int **); // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 16));
  InitializeSListHead((PSLIST_HEADER)(a1 + 32));
  *(_DWORD *)(a1 + 168) = a3;
  result = EtwpApcPoolDpc;
  *(_DWORD *)(a1 + 172) = a4;
  *(_QWORD *)(a1 + 120) = EtwpApcPoolDpc;
  *(_DWORD *)(a1 + 96) = 275;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 97) = 2;
  return result;
}
