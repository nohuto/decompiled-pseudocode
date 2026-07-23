/*
 * XREFs of SepGetTokenSessionMapEntry @ 0x14047A074
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x140795018 (SepIsParentOfChildAppContainer.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140A42978 (SepSetTokenLowboxNumber.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, __int64 *a3)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  __int64 v8; // rcx
  __int64 Pool2; // rax
  __int64 v11; // rdx
  __int64 v12; // r8

  *a3 = 0LL;
  v4 = (__int64 **)g_SessionLowboxMap;
  if ( g_SessionLowboxMap )
  {
LABEL_2:
    for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == a1 )
      {
        v8 = (__int64)(i + 3);
LABEL_6:
        *a3 = v8;
        return 0LL;
      }
    }
    if ( !a2 )
      return 3221226021LL;
    Pool2 = ExAllocatePool2(0x100uLL, 0x40uLL, 0x734C6553u);
    if ( Pool2 )
    {
      v11 = g_SessionLowboxMap;
      v8 = Pool2 + 24;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_BYTE *)(Pool2 + 56) = 0;
      *(_DWORD *)(Pool2 + 16) = a1;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *(_QWORD *)Pool2 = v12;
      *(_QWORD *)(Pool2 + 8) = v11;
      *(_QWORD *)(v12 + 8) = Pool2;
      *(_QWORD *)v11 = Pool2;
      goto LABEL_6;
    }
    return 3221225626LL;
  }
  if ( !a2 )
    return 3221226021LL;
  v4 = (__int64 **)ExAllocatePool2(0x100uLL, 0x10uLL, 0x734C6553u);
  g_SessionLowboxMap = (__int64)v4;
  if ( v4 )
  {
    v4[1] = (__int64 *)v4;
    *v4 = (__int64 *)v4;
    goto LABEL_2;
  }
  return 3221225626LL;
}
