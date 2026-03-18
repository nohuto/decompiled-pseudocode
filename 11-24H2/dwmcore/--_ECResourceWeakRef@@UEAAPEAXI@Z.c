/*
 * XREFs of ??_ECResourceWeakRef@@UEAAPEAXI@Z @ 0x1801E24C0
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800799C0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18007CFE0 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18018C0B8 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CResourceWeakRef *__fastcall CResourceWeakRef::`vector deleting destructor'(CResourceWeakRef *this, char a2)
{
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
