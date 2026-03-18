/*
 * XREFs of MiConvertStandbyToProto @ 0x140313ACC
 * Callers:
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 * Callees:
 *     MiReleaseArbitraryPage @ 0x14020BF38 (MiReleaseArbitraryPage.c)
 *     MiDecrementCombinedPteEx @ 0x1402F9014 (MiDecrementCombinedPteEx.c)
 *     MiCreateCombineAnchor @ 0x1402F97FC (MiCreateCombineAnchor.c)
 *     MiMapArbitraryPage @ 0x140313BE8 (MiMapArbitraryPage.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 */

__int64 __fastcall MiConvertStandbyToProto(__int64 a1, __int64 a2)
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
  v3 = *(_QWORD *)(a1 + 112);
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 140);
  v7 = *(_DWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 80) = 48LL * *(_QWORD *)(a1 + 144) - 0x220000000000LL;
  *(_QWORD *)(a1 + 88) = ((*(_QWORD *)(a1 + 96) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiMapArbitraryPage(v5, (int)a1 + 16, v6, v7, 1) )
  {
    v8 = MiCreateCombineAnchor((__int64 *)a1, a2, &v15);
    v12 = v8;
    if ( v8 )
    {
      if ( v8 == -1073741302 )
      {
        v13 = v15;
        v12 = MiCombineWithStandbyExisting(a1, a2, v15);
        if ( v12 < 0 )
          MiDecrementCombinedPteEx(v3, v13 + 32, 0);
      }
    }
    else
    {
      v12 = MiCombineInitialInstance(a1, a2, 0LL);
    }
    MiReleaseArbitraryPage(a1 + 16, v9, v10, v11);
  }
  else
  {
    return (unsigned int)-1073741800;
  }
  return (unsigned int)v12;
}
