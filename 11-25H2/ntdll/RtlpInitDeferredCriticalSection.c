/*
 * XREFs of RtlpInitDeferredCriticalSection @ 0x1800F9BB0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     InterlockedPushListSList @ 0x180167040 (InterlockedPushListSList.c)
 */

__int64 RtlpInitDeferredCriticalSection()
{
  _QWORD *v0; // r8
  _QWORD *v1; // rax

  RtlFailedCriticalDebugAllocations = 0;
  if ( ((unsigned __int8)&RtlCriticalSectionDebugSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v1 = &RtlpStaticDebugInfo;
  RtlCriticalSectionDebugSList = 0LL;
  do
  {
    v0 = v1 + 6;
    *v1 = v1 + 6;
    v1 = v0;
  }
  while ( v0 <= qword_1801D61E0 );
  *v0 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, &RtlpStaticDebugInfo, &unk_1801D6210, 8LL);
  return 0LL;
}
