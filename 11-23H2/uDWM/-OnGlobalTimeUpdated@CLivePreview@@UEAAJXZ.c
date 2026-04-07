/*
 * XREFs of ?OnGlobalTimeUpdated@CLivePreview@@UEAAJXZ @ 0x1800C6C50
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CLivePreview::OnGlobalTimeUpdated(CLivePreview *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x2000) == 0 )
  {
    *((_DWORD *)this + 22) = v1 | 0x2000;
    CVisual::PropagateDirtyChildren(this);
  }
  return 0LL;
}
