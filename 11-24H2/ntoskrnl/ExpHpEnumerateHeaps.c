/*
 * XREFs of ExpHpEnumerateHeaps @ 0x140485A24
 * Callers:
 *     ExpHpCompactionRoutine @ 0x1404859E0 (ExpHpCompactionRoutine.c)
 *     ExpHeapInitPhase1 @ 0x14065A310 (ExpHeapInitPhase1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpHpEnumerateHeaps(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  _OWORD v11[3]; // [rsp+20h] [rbp-38h]

  v11[0] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = 0;
  v5 = *((int *)v11 + 2 * a1);
  v6 = *((int *)v11 + 2 * a1 + 1);
  while ( 1 )
  {
    v7 = v5;
    if ( v4 >= dword_140E6BC10 )
      break;
    while ( v7 <= v6 )
    {
      v8 = *((_QWORD *)&unk_140E6BC40 + 1048 * v4 + v7);
      if ( v8 )
      {
        result = guard_dispatch_icall_no_overrides(v8, 0LL, a3, a4);
        if ( (int)result < 0 )
          return result;
      }
      ++v7;
    }
    ++v4;
  }
  if ( (int)v6 >= 3 )
    LODWORD(v6) = 3;
  while ( v7 <= (int)v6 )
  {
    v10 = qword_140EEEC40[v7];
    if ( v10 )
    {
      result = guard_dispatch_icall_no_overrides(v10, 0LL, a3, a4);
      if ( (int)result < 0 )
        return result;
    }
    ++v7;
  }
  return 0LL;
}
