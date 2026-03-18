/*
 * XREFs of CmpEnumerateKcbCacheBucket @ 0x1408655E0
 * Callers:
 *     CmpPrepareForSubtreeInvalidation @ 0x1408653AC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140865470 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x140865518 (CmpEnumerateAllOpenSubKeys.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpEnumerateKcbCacheBucket(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8

  v2 = *(_QWORD *)(a2 + 16);
  while ( v2 )
  {
    v5 = v2 - 16;
    v6 = *(_DWORD *)(v2 - 16 + 8);
    v2 = *(_QWORD *)(v2 + 8);
    v7 = (v6 >> 21) & 0x3FF;
    v8 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
    if ( v8 < v7 )
    {
      v9 = v5;
      v10 = v7 - v8;
      do
      {
        v9 = *(_QWORD *)(v9 + 72);
        --v10;
      }
      while ( v10 );
      if ( v9 == a1 )
      {
        result = guard_dispatch_icall_no_overrides(v5);
        if ( (_DWORD)result )
          return result;
      }
    }
  }
  return 0LL;
}
