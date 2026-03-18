/*
 * XREFs of CmpInvalidateSubtree @ 0x1407CB81C
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407D1950 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x140865518 (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpInvalidateSubtree(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int *a5)
{
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v9 = 0;
  v8 = a3;
  v6 = a2;
  LOBYTE(a2) = a3 & 1;
  v10 = a4;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), int *))CmpEnumerateAllOpenSubKeys)(
             a1,
             a2,
             CmpInvalidateSubtreeWorker,
             &v6);
  if ( a5 )
  {
    result = v7;
    *a5 = v7;
  }
  return result;
}
