/*
 * XREFs of CmpEnumerateKcbCacheBucket @ 0x1409646F8
 * Callers:
 *     CmpPrepareForSubtreeInvalidation @ 0x1409644C4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140964588 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x140964630 (CmpEnumerateAllOpenSubKeys.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpEnumerateKcbCacheBucket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8

  v4 = *(_QWORD *)(a2 + 16);
  while ( v4 )
  {
    v8 = v4 - 16;
    v9 = *(_DWORD *)(v4 - 16 + 8);
    v4 = *(_QWORD *)(v4 + 8);
    v10 = (v9 >> 21) & 0x3FF;
    v11 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
    if ( v11 < v10 )
    {
      v12 = v8;
      v13 = v10 - v11;
      do
      {
        v12 = *(_QWORD *)(v12 + 72);
        --v13;
      }
      while ( v13 );
      if ( v12 == a1 )
      {
        result = guard_dispatch_icall_no_overrides(v8, a4);
        if ( (_DWORD)result )
          return result;
      }
    }
  }
  return 0LL;
}
