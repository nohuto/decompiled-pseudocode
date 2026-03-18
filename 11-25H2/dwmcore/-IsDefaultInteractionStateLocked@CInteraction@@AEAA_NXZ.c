/*
 * XREFs of ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x18013A64C
 * Callers:
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1800F9974 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x18013A3D8 (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteraction::IsDefaultInteractionStateLocked(CInteraction *this)
{
  CInteraction **v1; // rdx
  int i; // eax

  v1 = (CInteraction **)CInteraction::s_DefaultStateLockedInteractions;
  for ( i = 0; i < dword_180406960; ++i )
  {
    if ( *v1 == this )
      return i != -1;
    ++v1;
  }
  i = -1;
  return i != -1;
}
