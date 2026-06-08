/*
 * XREFs of sub_140007730 @ 0x140007730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140007730(_QWORD *a1, _QWORD *a2, char a3, char a4)
{
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a4 || a3 )
  {
    v5 = *a2 & a1[23];
    result = ((__int64 (__fastcall *)(_QWORD, __int64))qword_140019558)(*(unsigned int *)(*a1 + 72LL), v5);
    a1[22] = v5;
  }
  return result;
}
