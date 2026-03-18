/*
 * XREFs of ??_GKeyframeValue@@EEAAPEAXI@Z @ 0x1801E73D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

KeyframeValue *__fastcall KeyframeValue::`scalar deleting destructor'(KeyframeValue *this, char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &KeyframeValue::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 104LL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
