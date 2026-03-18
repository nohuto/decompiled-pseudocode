/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180096184
 * Callers:
 *     RemoveCountFromEndOfArrayAndFree @ 0x180096800 (RemoveCountFromEndOfArrayAndFree.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180128F8C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x180095690 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

InteractionConfigurationGroup *__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(
        InteractionConfigurationGroup *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  operator delete(this, 0x88uLL);
  return this;
}
