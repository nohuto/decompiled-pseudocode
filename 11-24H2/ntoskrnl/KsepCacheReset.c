/*
 * XREFs of KsepCacheReset @ 0x14074065C
 * Callers:
 *     KseResetDeviceCache @ 0x14095B32C (KseResetDeviceCache.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall KsepCacheReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *result; // rax
  unsigned int i; // ecx
  __int64 v10; // rax

  v4 = (_QWORD *)(a1 + 32);
  v6 = *(_QWORD **)(a1 + 32);
  while ( v6 != v4 )
  {
    v7 = v6 - 3;
    v6 = (_QWORD *)*v6;
    result = (_QWORD *)guard_dispatch_icall_no_overrides(v7, a2, a3, a4);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 12); *result = result )
  {
    v10 = i++;
    result = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v10);
    result[1] = result;
  }
  v4[1] = v4;
  *v4 = v4;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
