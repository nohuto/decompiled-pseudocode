/*
 * XREFs of RtlpIsNoShadowStackUnwindMachineFrameEntry @ 0x140471F28
 * Callers:
 *     RtlpUnwindPrologue @ 0x140235620 (RtlpUnwindPrologue.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsNoShadowStackUnwindMachineFrameEntry(
        __int64 (__fastcall *a1)(int, int, int, int, int, int, int, __int64))
{
  __int64 v1; // rdx
  char v2; // r8

  v1 = 0LL;
  v2 = 1;
  while ( (unsigned int)v1 < 3 )
  {
    if ( a1 == *(&RtlpNoShadowStackUnwindMachineFrameEntries + v1) )
      return v2;
    v1 = (unsigned int)(v1 + 1);
  }
  return 0;
}
