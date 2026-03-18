/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x18013B194
 * Callers:
 *     RemoveCountFromEndOfArrayAndFree @ 0x18013C3E0 (RemoveCountFromEndOfArrayAndFree.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017C86C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x18013A614 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

InteractionConfigurationGroup *__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(
        InteractionConfigurationGroup *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  operator delete(this, 0x88uLL);
  return this;
}
