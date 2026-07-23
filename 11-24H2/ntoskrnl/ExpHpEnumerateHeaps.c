/*
 * XREFs of ExpHpEnumerateHeaps @ 0x140481014
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140480FD0 (ExpHpCompactionRoutine.c)
 *     ExpHeapInitPhase1 @ 0x1406589E0 (ExpHeapInitPhase1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpHpEnumerateHeaps(int a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-38h]

  v8[0] = _mm_load_si128((const __m128i *)&_xmm);
  v1 = 0;
  v2 = *((int *)v8 + 2 * a1);
  v3 = *((int *)v8 + 2 * a1 + 1);
  while ( 1 )
  {
    v4 = v2;
    if ( v1 >= dword_140E6BE10 )
      break;
    while ( v4 <= v3 )
    {
      v5 = *((_QWORD *)&unk_140E6BE40 + 1048 * v1 + v4);
      if ( v5 )
      {
        result = guard_dispatch_icall_no_overrides(v5, 0LL);
        if ( (int)result < 0 )
          return result;
      }
      ++v4;
    }
    ++v1;
  }
  if ( (int)v3 >= 3 )
    LODWORD(v3) = 3;
  while ( v4 <= (int)v3 )
  {
    v7 = qword_140EEEE40[v4];
    if ( v7 )
    {
      result = guard_dispatch_icall_no_overrides(v7, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    ++v4;
  }
  return 0LL;
}
