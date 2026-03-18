/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1801E1220
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CThreadLocalObjectCache@V?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@VCDrawListPrimitive4@@@@SAXPEAX@Z @ 0x1801E1254 (-Free@-$CThreadLocalObjectCache@V-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

void *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(a1, 408LL);
    else
      CThreadLocalObjectCache<PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>,CDrawListPrimitive4>::Free(a1);
  }
  return a1;
}
