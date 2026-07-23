/*
 * XREFs of EtwpPreallocateApcPool @ 0x1409CF784
 * Callers:
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1407A93F8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409CF6F0 (EtwpInitializeClassicStackTracing.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall EtwpPreallocateApcPool(__int64 a1)
{
  unsigned __int64 result; // rax
  _SLIST_ENTRY *v3; // rdi

  result = *(unsigned int *)(a1 + 164);
  if ( (int)result < *(_DWORD *)(a1 + 168) )
  {
    while ( 1 )
    {
      result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
      if ( (unsigned int)result > *(_DWORD *)(a1 + 168) )
        break;
      result = ExAllocatePool2(0x48uLL, 0xA0uLL, 0x41777445u);
      v3 = (_SLIST_ENTRY *)result;
      if ( !result )
        break;
      *(_QWORD *)(result + 128) = a1;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), (PSLIST_ENTRY)(result + 96));
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 32), v3 + 7);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 164));
  }
  return result;
}
