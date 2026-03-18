/*
 * XREFs of ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800956C8
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x180095454 (--1CInteraction@@MEAA@XZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180096880 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteraction::IsDefaultInteractionStateLocked(CInteraction *this)
{
  CInteraction **v1; // rdx
  int i; // eax

  v1 = (CInteraction **)CInteraction::s_DefaultStateLockedInteractions;
  for ( i = 0; i < dword_1803FA900; ++i )
  {
    if ( *v1 == this )
      return i != -1;
    ++v1;
  }
  i = -1;
  return i != -1;
}
