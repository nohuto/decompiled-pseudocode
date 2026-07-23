/*
 * XREFs of CmpPrepareForSubtreeInvalidation @ 0x1409644C4
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x1407E19B0 (CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpEnumerateKcbCacheBucket @ 0x1409646F8 (CmpEnumerateKcbCacheBucket.c)
 *     CmpCleanUpKCBCacheTable @ 0x14096478C (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidation(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 i; // rbx
  int v6; // eax
  int v7; // ecx
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+24h] [rbp-24h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]

  v3 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0;
  v14 = 0;
  v9 = 0;
  v12 = a3;
  v13 = a2;
  CmpCleanUpKCBCacheTable(v3);
  if ( *(_QWORD *)a1 != 1LL && ((*(_DWORD *)(a1 + 184) & 0x40000) == 0 || *(_QWORD *)a1 != 2LL) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 1656); i = (unsigned int)(v7 + 1) )
    {
      v6 = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v3 + 1648) + 24 * i, CmpPrepareForSubtreeInvalidationWorker, &v9);
      if ( v6 == 1 )
        break;
      v7 = i - 1;
      if ( v6 != 2 )
        v7 = i;
    }
  }
  result = (unsigned int)v9;
  if ( v9 >= 0 )
  {
    if ( (_DWORD)v10 )
      return 3221225761LL;
    else
      return HIDWORD(v10) != 0 ? 0xC000022D : 0;
  }
  return result;
}
