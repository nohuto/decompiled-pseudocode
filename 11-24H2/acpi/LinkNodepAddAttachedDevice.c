/*
 * XREFs of LinkNodepAddAttachedDevice @ 0x1400A8FE8
 * Callers:
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodepAddAttachedDevice(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r10
  __int64 *i; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  _QWORD *v12; // rdx

  v2 = (__int64 *)(a1 + 72);
  for ( i = *(__int64 **)(a1 + 72); v2 != i; i = (__int64 *)*i )
  {
    v6 = i[6];
    if ( !v6 || v6 != a2[6] )
    {
      v7 = i[2];
      if ( !v7 || v7 != a2[2] )
        continue;
    }
    v8 = a2[6];
    if ( v8 )
      i[6] = v8;
    v9 = a2[2];
    if ( v9 )
      i[2] = v9;
    v10 = *((_DWORD *)a2 + 9);
    if ( v10 )
      *((_DWORD *)i + 9) = v10;
    v11 = *((_DWORD *)a2 + 10);
    if ( v11 )
      *((_DWORD *)i + 10) = v11;
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  v12 = *(_QWORD **)(a1 + 80);
  if ( *v12 != a1 + 72 )
    __fastfail(3u);
  *a2 = a1 + 72;
  a2[1] = v12;
  *v12 = a2;
  *(_QWORD *)(a1 + 80) = a2;
  return 0LL;
}
