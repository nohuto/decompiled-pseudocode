/*
 * XREFs of ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x14023368C
 * Callers:
 *     ??$AddOrUpdateProperty@UPropertySetQuaternionValue@@@CPropertySetMarshaler@DirectComposition@@AEAAJIAEBUPropertySetValue@@IPEBX@Z @ 0x140233190 (--$AddOrUpdateProperty@UPropertySetQuaternionValue@@@CPropertySetMarshaler@DirectComposition@@AE.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector3@@I@Z @ 0x140079F44 (--$GetPropertyValue@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x14007C574 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x14007C6F8 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x14007C8C4 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1402337BC (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(
        __int64 a1,
        unsigned int *a2,
        _OWORD *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 *v8; // rdi
  _OWORD *Property; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v5 = 0;
  v6 = *a2;
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 80)
    && (v8 = (__int64 *)(a1 + 72),
        a2[1] == (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                                 a1 + 72,
                                 v6,
                                 (__int64)a3,
                                 a4))
    && a2[2] == (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                                v8,
                                *a2) )
  {
    Property = (_OWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
                           (__int64)v8,
                           *a2);
    v10 = *a2;
    *Property = *a3;
    if ( (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                         (__int64)v8,
                         v10,
                         v11,
                         v12) != 1 )
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v8, *a2, 2LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
