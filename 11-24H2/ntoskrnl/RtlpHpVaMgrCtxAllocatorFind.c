/*
 * XREFs of RtlpHpVaMgrCtxAllocatorFind @ 0x1404F68D8
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x140459658 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140602F30 (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorCompare @ 0x140602EDC (RtlpHpVaMgrCtxAllocatorCompare.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorFind(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r11
  __int64 v6; // r10
  unsigned int v8; // esi
  __int64 v10; // rax

  v4 = *(unsigned int *)(a1 + 2156);
  v5 = a1 + 2160;
  v6 = 0LL;
  v8 = 0;
  while ( v8 < (unsigned int)v4 )
  {
    if ( *(_QWORD *)(v5 + 24) )
    {
      ++v8;
      if ( (unsigned int)RtlpHpVaMgrCtxAllocatorCompare(v5) )
        return v5;
    }
    else
    {
      v10 = v5;
      if ( v6 )
        v10 = v6;
      v6 = v10;
    }
    v5 += 48LL;
  }
  if ( !v6 && (unsigned int)v4 < 0xFF )
    v6 = a1 + 48 * (v4 + 45);
  if ( a4 )
    *a4 = v6;
  return 0LL;
}
