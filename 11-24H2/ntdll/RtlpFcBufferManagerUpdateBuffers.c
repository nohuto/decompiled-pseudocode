/*
 * XREFs of RtlpFcBufferManagerUpdateBuffers @ 0x1800D1BCC
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     RtlUpdateSwapReference @ 0x1800D1CB4 (RtlUpdateSwapReference.c)
 */

void *__fastcall RtlpFcBufferManagerUpdateBuffers(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rsi
  char *v10; // rax
  char *v11; // rcx

  v4 = *a1 & 1LL;
  v5 = (unsigned int)v4;
  v7 = 4LL;
  v8 = ((_BYTE)v4 - 1) & 1;
  v9 = 12 * v4;
  v10 = (char *)&a1[12 * v4 + 3] - a3;
  v11 = (char *)&a1[12 * v8 + 3] - a3;
  do
  {
    if ( *(_QWORD *)a3 )
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)a3;
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)(a3 + 16);
      *(_OWORD *)a3 = *(_OWORD *)&v10[a3];
      *(_QWORD *)(a3 + 16) = *(_QWORD *)&v10[a3 + 16];
    }
    else
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)&v10[a3];
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)&v10[a3 + 16];
    }
    a3 += 24LL;
    --v7;
  }
  while ( v7 );
  a1[v8 + 27] = a2;
  RtlUpdateSwapReference(a1, (unsigned int)v8, a3);
  a1[v5 + 27] = 0LL;
  return memset_thunk_772440563353939046(&a1[v9 + 3], 0, 0x60uLL);
}
