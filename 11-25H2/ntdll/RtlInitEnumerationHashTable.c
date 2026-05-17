/*
 * XREFs of RtlInitEnumerationHashTable @ 0x1800DDF10
 * Callers:
 *     RtlInitWeakEnumerationHashTable @ 0x180145020 (RtlInitWeakEnumerationHashTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x1800DDF90 (RtlpPopulateContext.c)
 */

char __fastcall RtlInitEnumerationHashTable(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 *v5; // rax
  __int64 *v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  RtlpPopulateContext(a1, &v8);
  v5 = (__int64 *)v8;
  ++*(_DWORD *)(a1 + 28);
  if ( (__int64 *)*v5 == v5 )
    ++*(_DWORD *)(a1 + 24);
  v6 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v5;
  *(_QWORD *)a2 = v6;
  v6[1] = a2;
  *v5 = a2;
  *(_DWORD *)(a2 + 32) &= v4;
  *(_QWORD *)(a2 + 16) &= v4;
  *(_QWORD *)(a2 + 24) = v5;
  return 1;
}
