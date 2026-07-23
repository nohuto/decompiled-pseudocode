/*
 * XREFs of SeAccessCheckFromStateEx @ 0x1403B6860
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 */

__int64 __fastcall SeAccessCheckFromStateEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // [rsp+60h] [rbp-28h] BYREF
  __int64 v6; // [rsp+68h] [rbp-20h]
  __int64 v7; // [rsp+70h] [rbp-18h]
  __int64 v8; // [rsp+78h] [rbp-10h]

  v7 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v8 = 0LL;
  if ( a3 )
  {
    v3 = *(_DWORD *)(a3 + 196);
    v5 = a3;
    LODWORD(v6) = v3;
  }
  return SeAccessCheckWithHint(a1, 0LL, &v5);
}
