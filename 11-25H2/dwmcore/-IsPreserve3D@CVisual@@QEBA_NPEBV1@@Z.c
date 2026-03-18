/*
 * XREFs of ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x1800B7470
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsPreserve3D(CVisual *this, const struct CVisual *a2)
{
  bool result; // al
  __int64 v3; // rax

  result = 1;
  if ( !a2 || *((_DWORD *)a2 + 28) != 1 )
  {
    if ( *((_DWORD *)this + 28) != 1 )
      return 0;
    v3 = *((_QWORD *)this + 10);
    if ( (v3 & 2) != 0 )
      v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v3) = v3 & 1;
    if ( !(_DWORD)v3 )
      return 0;
  }
  return result;
}
