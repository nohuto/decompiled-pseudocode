/*
 * XREFs of KiConfigureNodeSchedulingInformation @ 0x1405B3CEC
 * Callers:
 *     KiConfigureAllSchedulingInformation @ 0x140C29E84 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405B32DC (KiAssignCooperativeIdleSearchContexts.c)
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B35D0 (KiAssignSubNodeSharedReadyQueues.c)
 */

__int64 __fastcall KiConfigureNodeSchedulingInformation(__int64 a1)
{
  int v1; // r14d
  unsigned __int64 v2; // r9
  char v3; // bp
  __int64 v4; // rsi
  __int64 i; // rdi
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 j; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 k; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 136);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = HalpInterruptHyperThreading;
  v4 = 0LL;
  for ( i = 4LL * *(unsigned __int16 *)(a1 + 136); v2; v2 &= ~v9 )
  {
    _BitScanForward64((unsigned __int64 *)&v7, v2);
    v8 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)((v1 << 6) + v7))];
    if ( v3 )
    {
      v9 = *(_QWORD *)(v8 + 36448);
      if ( v9 != *(_QWORD *)(v8 + 200) )
      {
        *(_BYTE *)(a1 + 184) |= 1u;
        v10 = KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(v8 + 192) + 138LL)];
        *(_BYTE *)(v10 + 10) |= 8u;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 128) & *(_QWORD *)(v8 + 8LL * *(unsigned __int8 *)(v8 + 208) + 35864);
    }
    v4 |= 1LL << v7;
  }
  v11 = *(_QWORD *)(a1 + 128);
  for ( j = 0LL;
        v11;
        v11 &= ~*(_QWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)((v1 << 6) + v13))]
                          + 36464) )
  {
    _BitScanForward64(&v13, v11);
    j |= 1LL << v13;
  }
  KiAssignSubNodeSharedReadyQueues(a1);
  v14 = *(_QWORD *)(a1 + 128);
  for ( k = 0LL; v14; v14 &= ~v17 & ~(1LL << v16) )
  {
    _BitScanForward64(&v16, v14);
    v17 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)((v1 << 6) + v16))] + 36416);
    k |= v17;
  }
  KiAssignCooperativeIdleSearchContexts(a1);
  *(_QWORD *)(a1 + 160) = v4;
  *(_QWORD *)(a1 + 168) = j;
  *(_QWORD *)(a1 + 152) = k;
  qword_140FC8870[i] |= v4;
  result = KeNodeBlock[*(unsigned __int16 *)(a1 + 138)];
  if ( (*(_BYTE *)(result + 10) & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 128);
    *(_QWORD *)((char *)&unk_140FC8878 + i * 8) |= result;
  }
  return result;
}
