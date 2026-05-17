/*
 * XREFs of RtlContractHashTable @ 0x1800E6190
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x1800E64F0 (RtlpGetChainHead.c)
 */

char __fastcall RtlContractHashTable(__int64 a1)
{
  int v1; // edx
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *ChainHead; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *j; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rdi

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 128 || *(_DWORD *)(a1 + 28) )
    return 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    v5 = v4 - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) >>= 1;
    v5 = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 12) = v5;
  RtlpGetChainHead(a1, (unsigned int)(v1 - 1));
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, *(unsigned int *)(a1 + 12));
  --*(_DWORD *)(a1 + 8);
  if ( (_QWORD *)*v6 != v6 && (_QWORD *)*ChainHead != ChainHead )
    --*(_DWORD *)(a1 + 24);
  for ( i = ChainHead; ; *i = v9 )
  {
    v9 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v9[1] != v6 )
      goto LABEL_17;
    v13 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_17;
    *v6 = v13;
    *(_QWORD *)(v13 + 8) = v6;
    for ( j = (_QWORD *)*i; j != ChainHead; j = (_QWORD *)*j )
    {
      if ( j[2] >= v9[2] )
        break;
      i = j;
    }
    v15 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
LABEL_17:
      __fastfail(3u);
    *v9 = v15;
    v9[1] = i;
    v15[1] = v9;
  }
  v10 = *(_DWORD *)(a1 + 8) + 128;
  _BitScanReverse(&v11, v10);
  v12 = v11 - 7;
  if ( 1 << v11 == v10 )
  {
    v16 = *(_QWORD **)(a1 + 32);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16[v12]);
    v16[v12] = 0LL;
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v16;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v16);
    }
  }
  return 1;
}
