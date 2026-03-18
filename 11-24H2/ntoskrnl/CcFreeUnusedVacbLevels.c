/*
 * XREFs of CcFreeUnusedVacbLevels @ 0x1402D672C
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402D5FE0 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     CcAllocateVacbLevels @ 0x1404764C0 (CcAllocateVacbLevels.c)
 *     CcReferenceFileOffset @ 0x1404CFBE0 (CcReferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcFreeUnusedVacbLevels(__int64 a1)
{
  _QWORD *v2; // rdx
  void *v3; // rdx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    if ( v2[1] != a1 || (v4 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(v4 + 8) = a1;
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v2);
    --*(_DWORD *)(a1 + 24);
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
