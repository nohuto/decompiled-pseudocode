/*
 * XREFs of ?CheckForVisualTree@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@@Z @ 0x1801D2EC0
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801D2CA0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProjectedShadowCaster::CheckForVisualTree(CProjectedShadowCaster *this, const struct CVisualTree *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( v4[4] >= (unsigned __int64)a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( *((_BYTE *)v3 + 25) || (unsigned __int64)a2 < v3[4] )
    v3 = v2;
  return v3 != v2;
}
