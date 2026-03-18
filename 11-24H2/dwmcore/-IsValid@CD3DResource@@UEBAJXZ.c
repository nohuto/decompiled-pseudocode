/*
 * XREFs of ?IsValid@CD3DResource@@UEBAJXZ @ 0x1801CACD0
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1801CAA00 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CAB1C (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DResource::IsValid(CD3DResource *this)
{
  return *((_BYTE *)this + 118) == 0 ? 0x8898008D : 0;
}
