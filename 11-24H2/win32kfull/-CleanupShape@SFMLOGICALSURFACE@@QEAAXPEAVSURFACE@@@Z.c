/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14002C9B4
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14002C62C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, HSURF *a2)
{
  if ( (*((_DWORD *)this + 61) & 0x20) != 0 )
  {
    if ( a2 )
      GreDereferenceObject(a2[4]);
    *((_DWORD *)this + 61) &= ~0x20u;
  }
}
