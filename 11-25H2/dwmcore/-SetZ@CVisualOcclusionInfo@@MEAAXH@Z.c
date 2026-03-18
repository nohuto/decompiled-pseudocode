/*
 * XREFs of ?SetZ@CVisualOcclusionInfo@@MEAAXH@Z @ 0x1801D10A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualOcclusionInfo::SetZ(CVisualOcclusionInfo *this, int a2)
{
  *((_DWORD *)this + 10) = a2;
}
