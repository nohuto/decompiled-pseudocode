/*
 * XREFs of ??$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140108C84
 * Callers:
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14007C74C (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector3@@I@Z @ 0x140079F44 (--$GetPropertyValue@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x14007C574 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x14007C6F8 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x14007C8C4 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1402337BC (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector4Value,D2DVector4>(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int a3)
{
  struct DirectComposition::CBatch *v3; // rbx
  char v7; // si
  struct DirectComposition::CBatch *BatchFragment; // rcx
  char *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v7 = 1;
  if ( (unsigned __int64)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL)) >= 0x2C )
    goto LABEL_5;
  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                    *((DirectComposition::CApplicationChannel **)v3 + 1),
                    *((_DWORD *)v3 + 4),
                    *((_BYTE *)v3 + 32) & 1,
                    1,
                    0);
  if ( BatchFragment )
  {
    *(_BYTE *)(*((_QWORD *)v3 + 17) + 64LL) = 0;
    *(_QWORD *)v3 = BatchFragment;
    *a2 = BatchFragment;
LABEL_5:
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v15);
    v10 = (char *)v15;
    *(_DWORD *)v15 = 44;
    *(_OWORD *)(v10 + 4) = 0LL;
    *(_QWORD *)(v10 + 20) = 0LL;
    *((_DWORD *)v10 + 1) = 309;
    *((_DWORD *)v10 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v10 + 3) = a3;
    *((_DWORD *)v10 + 4) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                             a1 + 72,
                             a3,
                             v11,
                             v12);
    *((_DWORD *)v10 + 5) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                             a1 + 72,
                             a3);
    v10[24] = (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                              a1 + 72,
                              a3,
                              v13,
                              v14) == 1;
    *(_OWORD *)(v10 + 28) = *(_OWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
                                         a1 + 72,
                                         a3);
    PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(
      (__int64 *)(a1 + 72),
      a3,
      0LL);
    return v7;
  }
  return 0;
}
