/*
 * XREFs of ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x180278520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18027816C (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

DataProviderRegistrarConnection *__fastcall DataProviderRegistrarConnection::`vector deleting destructor'(
        DataProviderRegistrarConnection *this,
        char a2)
{
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)this = &DataProviderRegistrarConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DataProviderRegistrarConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
