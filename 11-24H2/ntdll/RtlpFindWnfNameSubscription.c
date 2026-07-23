/*
 * XREFs of RtlpFindWnfNameSubscription @ 0x18002ED50
 * Callers:
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 * Callees:
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

_QWORD *__fastcall RtlpFindWnfNameSubscription(__int64 a1, const void *a2)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // rcx
  unsigned __int64 v5; // rbx
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned __int64 *)(a1 + 16);
  v5 = *v3;
  if ( (v2 & 1) != 0 )
  {
    if ( !v5 )
      return 0LL;
    v5 ^= (unsigned __int64)v3;
  }
  v6 = v2 & 1;
  while ( v5 )
  {
    v7 = memcmp(a2, (const void *)(v5 - 16), 8uLL);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v8 = *(_QWORD *)(v5 + 8);
      if ( v6 && v8 )
      {
        v5 ^= v8;
        continue;
      }
    }
    else
    {
      v8 = *(_QWORD *)v5;
      if ( v6 && v8 )
      {
        v5 ^= v8;
        continue;
      }
    }
    v5 = v8;
  }
  result = (_QWORD *)(v5 - 32);
  if ( !v5 )
    return 0LL;
  return result;
}
