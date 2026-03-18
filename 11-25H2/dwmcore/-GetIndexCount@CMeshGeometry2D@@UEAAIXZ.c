/*
 * XREFs of ?GetIndexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1802286B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2D::GetIndexCount(CMeshGeometry2D *this)
{
  return (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 2;
}
