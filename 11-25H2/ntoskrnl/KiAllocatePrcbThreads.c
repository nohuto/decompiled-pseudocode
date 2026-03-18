/*
 * XREFs of KiAllocatePrcbThreads @ 0x1405B1CEC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateDpcDelegateThread @ 0x1405B1A3C (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405BEA04 (KiAllocateSmtIsolationThread.c)
 */

__int64 __fastcall KiAllocatePrcbThreads(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v5; // edi
  __int64 result; // rax

  v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
  result = KiAllocateDpcDelegateThread((_QWORD *)(a1 + 14392), v5, a3, a4);
  if ( (int)result >= 0 )
  {
    result = KiAllocateSmtIsolationThread(a1 + 36480, v5);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
