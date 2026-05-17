/*
 * XREFs of RtlStringLengthWorkerW @ 0x1800F9288
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x180133490 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18015E718 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringLengthWorkerW(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
