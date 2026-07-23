/*
 * XREFs of ViDeadlockRemoveResource @ 0x140B9BDFC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140612598 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockAddResource @ 0x140B9A880 (ViDeadlockAddResource.c)
 *     ViDeadlockEmptyDatabase @ 0x140B9B23C (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x140B8518C (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x140B9BBC4 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveNode @ 0x140B9BCC8 (ViDeadlockRemoveNode.c)
 */

__int64 __fastcall ViDeadlockRemoveResource(int *a1, int a2, int **a3)
{
  int v6; // ebp
  __int64 *v7; // rax
  int *v8; // rsi
  int *v9; // rbx
  _QWORD *v10; // r9
  __int64 v11; // rdx
  int **v12; // rcx
  unsigned __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rcx

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    v6 = 1;
  }
  else
  {
    v6 = a2;
    if ( !a2 )
    {
      v7 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( v7 )
      {
        ViDeadlockPreprocessOptions(
          byte_140E0EA84,
          "Deleted lock 0x%p is still owned by the thread 0x%p.",
          4107LL,
          *((_QWORD *)a1 + 1),
          *v7,
          (__int64)a1);
        VfReportIssueWithOptions(
          0xC4u,
          0x100BuLL,
          *((_QWORD *)a1 + 1),
          **((_QWORD **)a1 + 2),
          (ULONG_PTR)a1,
          byte_140E0EA84);
        v6 = a2;
      }
    }
  }
  v8 = (int *)*((_QWORD *)a1 + 3);
  while ( v8 != a1 + 6 )
  {
    v9 = v8 - 10;
    v8 = *(int **)v8;
    ViDeadlockRemoveNode(v9, v6);
    *(_QWORD *)v9 = *a3;
    *a3 = v9;
  }
  v10 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 3);
  v11 = *((_QWORD *)a1 + 5);
  if ( *(int **)(v11 + 8) != a1 + 10 || (v12 = (int **)*((_QWORD *)a1 + 6), *v12 != a1 + 10) )
    __fastfail(3u);
  *v12 = (int *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  v13 = *((_QWORD *)a1 + 1) >> 12;
  result = 1023 * (v13 / 0x3FF);
  v13 %= 0x3FFuLL;
  v15 = 2 * (v13 + 2);
  if ( *(_QWORD *)(16 * v13 + v10[2]) != 16 * v13 + v10[2] )
    return VfUtilAddressRangeRemove(&v10[v15], *((_QWORD *)a1 + 1), (unsigned int)ViDeadlockResourceTypeSizeInfo[*a1]);
  v10[v15] = 0LL;
  v10[v15 + 1] = 0LL;
  return result;
}
