/*
 * XREFs of ?FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401CEE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindFirstHWRenderAdapter(struct DXGADAPTER *a1, void *a2)
{
  __int64 v2; // rax

  v2 = **((_QWORD **)a2 + 1);
  if ( (!v2 || (*(_DWORD *)(v2 + 444) & 1) == 0)
    && *((_DWORD *)a1 + 50) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 209))
    && (*((_BYTE *)a1 + 3072) & 1) != 0
    && !*((_BYTE *)a1 + 3017)
    && (*((_DWORD *)a1 + 111) & 0x10) == 0 )
  {
    DXGADAPTER_REFERENCE::Assign(*((DXGADAPTER_REFERENCE **)a2 + 1), a1);
  }
  return 0LL;
}
