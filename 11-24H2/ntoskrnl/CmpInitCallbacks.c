/*
 * XREFs of CmpInitCallbacks @ 0x1407D1EB0
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmInitializeProcessorCallbacks @ 0x1407D194C (CmInitializeProcessorCallbacks.c)
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 */

__int64 CmpInitCallbacks()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  CmpCallBackCount = 0;
  qword_140EF7A08 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  CmpCallbackContextSList = 0LL;
  ExInitializeSystemLookasideList(
    (unsigned int)&CmpCallbackContextLookasideList,
    1,
    48,
    1768115523,
    64,
    (__int64)&ExSystemLookasideListHead);
  result = (unsigned int)KeNumberProcessors_0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      CmInitializeProcessorCallbacks(KiProcessorBlock[v0]);
      result = (unsigned int)KeNumberProcessors_0;
      ++v0;
    }
    while ( v0 < (unsigned int)KeNumberProcessors_0 );
  }
  return result;
}
