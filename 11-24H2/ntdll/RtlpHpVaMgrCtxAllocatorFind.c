/*
 * XREFs of RtlpHpVaMgrCtxAllocatorFind @ 0x18009BA54
 * Callers:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18009B8F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorFind(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // edi
  __int64 v7; // rax

  v4 = 0LL;
  v5 = a1 + 2160;
  v6 = 0;
  while ( v6 < *(_DWORD *)(a1 + 2156) )
  {
    if ( *(_QWORD *)(v5 + 24) )
    {
      ++v6;
      if ( ((*(unsigned __int8 *)(v5 + 46) >> 1) & 7) == *(_DWORD *)(a2 + 4)
        && *(unsigned __int8 *)(v5 + 45) == *(_DWORD *)(a2 + 8)
        && *(_QWORD *)(v5 + 32) == *(_QWORD *)(a2 + 16)
        && (!a3 || *(unsigned __int16 *)(v5 + 40) == a3)
        && ((*(_BYTE *)(a2 + 12) ^ (*(_BYTE *)(v5 + 46) >> 4)) & 1) == 0 )
      {
        return v5;
      }
    }
    else if ( !v4 )
    {
      v4 = v5;
    }
    v5 += 48LL;
  }
  if ( !v4 )
  {
    v7 = *(unsigned int *)(a1 + 2156);
    if ( (unsigned int)v7 < 0xFF )
      v4 = a1 + 48 * (v7 + 45);
  }
  if ( a4 )
    *a4 = v4;
  return 0LL;
}
