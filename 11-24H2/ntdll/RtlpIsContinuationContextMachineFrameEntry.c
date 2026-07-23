/*
 * XREFs of RtlpIsContinuationContextMachineFrameEntry @ 0x1800E9F20
 * Callers:
 *     RtlpUnwindPrologue @ 0x180044040 (RtlpUnwindPrologue.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsContinuationContextMachineFrameEntry(void (__fastcall __noreturn *a1)())
{
  __int64 v1; // rdx
  char v2; // r8

  v1 = 0LL;
  v2 = 1;
  while ( (unsigned int)v1 < 2 )
  {
    if ( a1 == RtlpContinuationContextMachineFrameEntries[v1] )
      return v2;
    v1 = (unsigned int)(v1 + 1);
  }
  return 0;
}
