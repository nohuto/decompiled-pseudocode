/*
 * XREFs of ExStartRecordingIRTimerExpiries @ 0x1407BB768
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExpGetIRTimerDesc @ 0x1404D2B60 (ExpGetIRTimerDesc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void ExStartRecordingIRTimerExpiries()
{
  unsigned int v0; // edx
  wchar_t **IRTimerDesc; // rax
  int v2; // edx
  int v3; // r8d
  int v4; // r8d
  __int64 Pool2; // rax
  void *v6; // rcx

  v0 = 0;
  do
  {
    IRTimerDesc = ExpGetIRTimerDesc(v0);
    v0 = v2 + 1;
    v4 = *((unsigned __int8 *)IRTimerDesc + 16) + v3;
  }
  while ( v0 < 0x14 );
  Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(4 * v4), 0x69547845u);
  if ( Pool2 )
  {
    v6 = (void *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, Pool2);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x69547845u);
  }
}
