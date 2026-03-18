/*
 * XREFs of ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180068F50
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180069460 (-Delete@CResource@@IEAAXXZ.c)
 * Callees:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180068960 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::`scalar deleting destructor'(CKeyframeAnimation *this, char a2)
{
  HANDLE ProcessHeap; // rax

  CKeyframeAnimation::~CKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 544LL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
