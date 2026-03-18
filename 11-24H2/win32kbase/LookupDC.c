/*
 * XREFs of LookupDC @ 0x1400EF840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall LookupDC(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 *i; // rbx
  int v7; // eax

  v2 = 0LL;
  for ( i = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 24LL);
        i != (__int64 *)(*(_QWORD *)(W32GetUserSessionState(v5) + 57008) + 24LL);
        i = (__int64 *)*i )
  {
    v7 = *((_DWORD *)i + 12);
    if ( (v7 & 0x400800) == 0 && i[2] == a1 && (v7 & 0x1000) != 0 && (!a2 || !i[9]) )
      return i;
  }
  return (__int64 *)v2;
}
