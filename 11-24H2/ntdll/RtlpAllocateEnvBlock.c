/*
 * XREFs of RtlpAllocateEnvBlock @ 0x180083998
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180082D50 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180083050 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180112E80 (RtlSetEnvironmentStrings.c)
 *     RtlpInitEnvironmentBlock @ 0x18011AFD4 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvBlock(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
