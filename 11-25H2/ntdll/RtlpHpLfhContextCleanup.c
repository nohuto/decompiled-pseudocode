/*
 * XREFs of RtlpHpLfhContextCleanup @ 0x1800B8168
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlTlsFree @ 0x1800B8370 (RtlTlsFree.c)
 *     RtlpFlsFree @ 0x1800B84E4 (RtlpFlsFree.c)
 *     RtlpHpLfhBucketCleanup @ 0x1800B86FC (RtlpHpLfhBucketCleanup.c)
 */

__int64 __fastcall RtlpHpLfhContextCleanup(__int64 a1)
{
  int v1; // ebx
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdx

  v1 = *(_DWORD *)(a1 + 76);
  if ( v1 )
  {
    if ( (int)RtlpFlsFree(&RtlpHpEnvFlsContext) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    if ( (int)RtlTlsFree((unsigned __int16)v1) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  }
  RtlpHpLfhContextSlotStandbyProcess(a1, 1LL);
  v3 = (__int64 *)(a1 + 448);
  v4 = 128LL;
  do
  {
    result = *v3;
    v6 = 0LL;
    if ( (*v3 & 1) == 0 )
      v6 = *v3;
    if ( v6 )
      result = RtlpHpLfhBucketCleanup(a1);
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
