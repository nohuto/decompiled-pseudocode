/*
 * XREFs of NvmeControllerStorMQQuiesceCompletionDPCs @ 0x1400F5410
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 */

char __fastcall NvmeControllerStorMQQuiesceCompletionDPCs(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // ebp
  unsigned __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rdi
  signed __int32 v21[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *((unsigned int *)g_CpuInfo + 3);
  LOBYTE(v3) = 0;
  *(_QWORD *)(a1 + 136) |= 0x400000000uLL;
  _InterlockedOr(v21, 0);
  v4 = 0;
  if ( *(_WORD *)(a1 + 26) )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 864) + ((unsigned __int64)v4 << 7);
      if ( (_DWORD)v2 )
      {
        v6 = 0LL;
        v7 = 0LL;
        v8 = v2;
        do
        {
          if ( KeRemoveQueueDpc((PRKDPC)(v7 + *(_QWORD *)(v5 + 64))) )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 72) + v6));
          v7 += 64LL;
          v6 += 4LL;
          --v8;
        }
        while ( v8 );
      }
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 26);
      ++v4;
    }
    while ( v4 < (unsigned int)v3 );
  }
  v9 = *(_QWORD *)(a1 + 856);
  if ( (_DWORD)v2 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = v2;
    do
    {
      LOBYTE(v3) = KeRemoveQueueDpc((PRKDPC)(v11 + *(_QWORD *)(v9 + 64)));
      if ( (_BYTE)v3 )
      {
        v3 = *(_QWORD *)(v9 + 72);
        _InterlockedDecrement((volatile signed __int32 *)(v3 + v10));
      }
      v11 += 64LL;
      v10 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  v13 = 0;
  if ( *(_WORD *)(a1 + 26) )
  {
    do
    {
      v14 = *(_QWORD *)(a1 + 864) + ((unsigned __int64)v13 << 7);
      if ( (_DWORD)v2 )
      {
        v15 = 0LL;
        v16 = v2;
        do
        {
          while ( *(_DWORD *)(*(_QWORD *)(v14 + 72) + v15) )
            StorDelayExecution(0x3E8u);
          v15 += 4LL;
          --v16;
        }
        while ( v16 );
      }
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 26);
      ++v13;
    }
    while ( v13 < (unsigned int)v3 );
  }
  v17 = *(_QWORD *)(a1 + 856);
  if ( (_DWORD)v2 )
  {
    v18 = 0LL;
    v19 = v2;
    do
    {
      while ( 1 )
      {
        LODWORD(v3) = *(_DWORD *)(*(_QWORD *)(v17 + 72) + v18);
        if ( !(_DWORD)v3 )
          break;
        StorDelayExecution(0x3E8u);
      }
      v18 += 4LL;
      --v19;
    }
    while ( v19 );
  }
  _InterlockedOr(v21, 0);
  return v3;
}
