/*
 * XREFs of IoWithinStackLimits @ 0x1403FC040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall IoWithinStackLimits(ULONG_PTR RegionStart, SIZE_T RegionSize)
{
  ULONG_PTR v2; // r8
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR StackLimit; // rax
  __m128i *InitialStack; // r9
  char *v7; // rdx
  __m128i v8; // xmm3
  void *StackBase; // [rsp+0h] [rbp-48h]

  v2 = RegionStart + RegionSize;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) == 0 || CurrentThread == KeGetCurrentPrcb()->IdleThread )
  {
    StackBase = CurrentThread->StackBase;
    StackLimit = (ULONG_PTR)CurrentThread->StackLimit;
    InitialStack = (__m128i *)CurrentThread->InitialStack;
    while ( RegionStart < StackLimit || v2 > (unsigned __int64)StackBase )
    {
      if ( !InitialStack[1].m128i_i64[0] )
        return 0;
      v8 = InitialStack[1];
      InitialStack = (__m128i *)InitialStack[2].m128i_i64[1];
      StackBase = (void *)v8.m128i_i64[0];
      StackLimit = _mm_srli_si128(v8, 8).m128i_u64[0];
    }
    return 1;
  }
  else
  {
    v7 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    return v2 <= (unsigned __int64)v7 && RegionStart >= (unsigned __int64)&v7[-(unsigned int)KeKernelStackSize];
  }
}
