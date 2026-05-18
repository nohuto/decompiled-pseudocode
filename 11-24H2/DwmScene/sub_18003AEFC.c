/*
 * XREFs of sub_18003AEFC @ 0x18003AEFC
 * Callers:
 *     sub_18003F5AC @ 0x18003F5AC (sub_18003F5AC.c)
 * Callees:
 *     sub_18003AF9C @ 0x18003AF9C (sub_18003AF9C.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18003AEFC(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  __int64 result; // rax
  int v11; // ecx

  sub_18003BE3C(a1);
  v8 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v8; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*i + 56LL))(*i, a3, a2, a4);
  }
  result = *a4;
  v11 = *(_DWORD *)(*a4 + 440);
  if ( (v11 & 0x10000) != 0 && (v11 & 0x20000) != 0 )
    sub_18003AF9C(a1);
  return result;
}
