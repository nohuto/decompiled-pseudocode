/*
 * XREFs of HvpFindFreeBin @ 0x14096951C
 * Callers:
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall HvpFindFreeBin(__int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v4; // rbx
  __int64 **v6; // r10
  __int64 *i; // r8
  unsigned int v8; // edx

  v4 = 632LL * a3;
  v6 = (__int64 **)(v4 + a1 + 888);
  for ( i = *v6; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v6 )
      return 0LL;
    v8 = *((_DWORD *)i + 4);
    if ( v8 >= a2 && v8 + *((_DWORD *)i + 5) <= *(_DWORD *)(v4 + a1 + 280) )
      break;
  }
  *a4 = v8;
  return i;
}
