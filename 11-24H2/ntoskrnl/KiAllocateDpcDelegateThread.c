/*
 * XREFs of KiAllocateDpcDelegateThread @ 0x1405B2BD0
 * Callers:
 *     KiAllocatePrcbThreads @ 0x1405B2E80 (KiAllocatePrcbThreads.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B3888 (KiCompleteBootProcessorContextInitialization.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsAssignThreadId @ 0x140463114 (PsAssignThreadId.c)
 *     KiAllocatePrcbThread @ 0x1405B52C0 (KiAllocatePrcbThread.c)
 */

__int64 __fastcall KiAllocateDpcDelegateThread(_QWORD *a1, int a2, int a3, int a4)
{
  int PrcbThread; // eax
  PVOID v6; // rbx
  int v7; // edi
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  PrcbThread = KiAllocatePrcbThread(
                 (int)&Object,
                 (int)KiExecuteDpcDelegate,
                 a3,
                 a4,
                 a2,
                 (PCUNICODE_STRING)KiDpcDelegateThreadName,
                 0);
  v6 = Object;
  v7 = PrcbThread;
  if ( PrcbThread >= 0 )
  {
    v7 = PsAssignThreadId((__int64)Object);
    if ( v7 >= 0 )
    {
      *a1 = v6;
      v6 = 0LL;
    }
  }
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  return (unsigned int)v7;
}
