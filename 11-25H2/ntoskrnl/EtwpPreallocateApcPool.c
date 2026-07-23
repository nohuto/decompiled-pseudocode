/*
 * XREFs of EtwpPreallocateApcPool @ 0x140A39284
 * Callers:
 *     EtwpUpdateContextRegisterTraceEvents @ 0x140799EE8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x140A391F0 (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
      result = ExAllocatePool2(0x48uLL);
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
