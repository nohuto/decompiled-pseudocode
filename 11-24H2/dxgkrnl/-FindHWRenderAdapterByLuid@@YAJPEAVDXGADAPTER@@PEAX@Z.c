/*
 * XREFs of ?FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401D4240
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindHWRenderAdapterByLuid(struct DXGADAPTER *a1, DXGADAPTER_REFERENCE **a2)
{
  DXGADAPTER_REFERENCE *v3; // rdx

  if ( !*(_QWORD *)a2[1]
    && *((_DWORD *)a1 + 50) == 1
    && !*((_BYTE *)a1 + 3017)
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 209))
    && !*((_BYTE *)a1 + 3017)
    && (*((_BYTE *)a1 + 3072) & 1) != 0
    && (*((_DWORD *)a1 + 111) & 0x10) == 0 )
  {
    v3 = *a2;
    if ( *(_DWORD *)*a2 == *((_DWORD *)a1 + 103) && *((_DWORD *)v3 + 1) == *((_DWORD *)a1 + 104) )
      DXGADAPTER_REFERENCE::Assign(a2[1], a1);
  }
  return 0LL;
}
