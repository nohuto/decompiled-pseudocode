/*
 * XREFs of ??_GKModule@@QEAAPEAXI@Z @ 0x1400E3E94
 * Callers:
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x140174030 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 * Callees:
 *     ??1KModule@@QEAA@XZ @ 0x140155920 (--1KModule@@QEAA@XZ.c)
 *     ??3?$KALLOCATOR@$0GCGJEMEO@$00@@SAXPEAX@Z @ 0x14015594C (--3-$KALLOCATOR@$0GCGJEMEO@$00@@SAXPEAX@Z.c)
 */

KModule *__fastcall KModule::`scalar deleting destructor'(KModule *this, char a2)
{
  KModule::~KModule(this);
  if ( (a2 & 1) != 0 )
    KALLOCATOR<1651067982,1>::operator delete(this);
  return this;
}
