/*
 * XREFs of MiInitializePartitionThreads @ 0x1407ED65C
 * Callers:
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInitializePartitionThreads(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+50h] [rbp-9h] BYREF
  __m128i si128; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+68h] [rbp+Fh]
  _QWORD v10[5]; // [rsp+70h] [rbp+17h]

  v7 = 0LL;
  v10[0] = MiZeroPageThread;
  v2 = 0LL;
  v9 = 4;
  v10[1] = MiRebuildLargePagesThread;
  v10[2] = MiPartitionWorkingSetManager;
  v10[3] = MiDereferenceSegmentThread;
  v10[4] = MiMappedPageWriter;
  v3 = *(_QWORD *)(a1 + 184);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *(_QWORD *)(v3 + 128);
  while ( (unsigned int)v2 < 5 )
  {
    result = PsCreateSystemThreadEx(&v7, 0x1FFFFFLL, 0LL, v4, 0LL, v10[v2], a1, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v6 = si128.m128i_u32[v2];
    v2 = (unsigned int)(v2 + 1);
    *(_QWORD *)(a1 + 8 * v6 + 136) = v7;
  }
  return 0LL;
}
