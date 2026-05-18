/*
 * XREFs of sub_18000FC98 @ 0x18000FC98
 * Callers:
 *     sub_18000D8D4 @ 0x18000D8D4 (sub_18000D8D4.c)
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 * Callees:
 *     sub_18000DCD0 @ 0x18000DCD0 (sub_18000DCD0.c)
 */

_QWORD *__fastcall sub_18000FC98(HANDLE *a1, _QWORD *a2)
{
  HANDLE v2; // rbx
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v4 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
  {
    v2 = 0LL;
  }
  else if ( (v4 & 0xFFFFFF7F) != 0 )
  {
    sub_18000DCD0(retaddr, v5, v6, v7);
  }
  *a2 = v2;
  return a2;
}
