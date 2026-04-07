/*
 * XREFs of ?CreateDoubleResourceProxy@CCompositor@@QEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x18009B380
 * Callers:
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180083C98 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateDoubleResourceProxy(__int64 this, CResourceProxy **a2)
{
  return CCompositor::CreateProxy<CDoubleResourceProxy>(this, a2);
}
