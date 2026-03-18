/*
 * XREFs of ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180214FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CMeshGeometry2D::GetVertexCount(CMeshGeometry2D *this)
{
  unsigned __int64 result; // rax

  result = (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 2) < result )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 2);
  return result;
}
