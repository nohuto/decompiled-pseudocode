/*
 * XREFs of MiConvertStandbyToProto @ 0x140224810
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 * Callees:
 *     MiReleaseArbitraryPage @ 0x140210A60 (MiReleaseArbitraryPage.c)
 *     MiMapArbitraryPage @ 0x14022492C (MiMapArbitraryPage.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiDecrementCombinedPteEx @ 0x140224E9C (MiDecrementCombinedPteEx.c)
 *     MiCreateCombineAnchor @ 0x14023AD70 (MiCreateCombineAnchor.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 */

__int64 __fastcall MiConvertStandbyToProto(__int64 *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rbp
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = a1[14];
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 35);
  v7 = *((_DWORD *)a1 + 38);
  a1[10] = 48 * a1[18] - 0x220000000000LL;
  a1[11] = (((unsigned __int64)a1[12] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiMapArbitraryPage(v5, (int)a1 + 16, v6, v7, 1) )
  {
    v8 = MiCreateCombineAnchor(a1, a2, &v15);
    v12 = v8;
    if ( v8 )
    {
      if ( v8 == -1073741302 )
      {
        v13 = v15;
        v12 = MiCombineWithStandbyExisting(a1, a2, v15);
        if ( v12 < 0 )
          MiDecrementCombinedPteEx(v3, v13 + 32, 0LL);
      }
    }
    else
    {
      v12 = MiCombineInitialInstance(a1, a2, 0LL);
    }
    MiReleaseArbitraryPage((__int64)(a1 + 2), v9, v10, v11);
  }
  else
  {
    return (unsigned int)-1073741800;
  }
  return (unsigned int)v12;
}
