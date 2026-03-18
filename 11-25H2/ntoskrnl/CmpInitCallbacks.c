/*
 * XREFs of CmpInitCallbacks @ 0x1407C2288
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmInitializeProcessorCallbacks @ 0x1407C1D3C (CmInitializeProcessorCallbacks.c)
 *     ExInitializeSystemLookasideList @ 0x140B5F310 (ExInitializeSystemLookasideList.c)
 */

__int64 CmpInitCallbacks()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  CmpCallBackCount = 0;
  qword_140EF73F8 = (__int64)&CallbackListHead;
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
