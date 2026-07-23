/*
 * XREFs of RtlpAllocateEnvBlock @ 0x180005818
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180004BD0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180004ED0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x18010E140 (RtlSetEnvironmentStrings.c)
 *     RtlpInitEnvironmentBlock @ 0x180119204 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvBlock(SIZE_T a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
