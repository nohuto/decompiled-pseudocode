/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x180095690
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18009561C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180096184 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(InteractionConfigurationGroup *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 8);
}
