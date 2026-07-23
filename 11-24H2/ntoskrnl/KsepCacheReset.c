/*
 * XREFs of KsepCacheReset @ 0x14073E58C
 * Callers:
 *     KseResetDeviceCache @ 0x140942DEC (KseResetDeviceCache.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall KsepCacheReset(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *result; // rax
  unsigned int i; // ecx
  __int64 v8; // rax

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  while ( v4 != v2 )
  {
    v5 = v4 - 3;
    v4 = (_QWORD *)*v4;
    result = (_QWORD *)guard_dispatch_icall_no_overrides(v5, a2);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 12); *result = result )
  {
    v8 = i++;
    result = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v8);
    result[1] = result;
  }
  v2[1] = v2;
  *v2 = v2;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
