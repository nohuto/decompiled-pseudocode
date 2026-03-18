/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x180126E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CThreadLocalObjectCache@V?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@VCDrawListPrimitive8@@@@SAXPEAX@Z @ 0x180126E44 (-Free@-$CThreadLocalObjectCache@V-$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

__int64 __fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(a1, 744LL);
    else
      CThreadLocalObjectCache<PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>,CDrawListPrimitive8>::Free();
  }
  return a1;
}
