/*
 * XREFs of ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C00BD6CC
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0029440 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0025AE8 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C0029898 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C0029BCC (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0029CDC (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ??$RemoveLastProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C0225238 (--$RemoveLastProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAl.c)
 *     ?RemoveAt@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAXI@Z @ 0x1C0225464 (-RemoveAt@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<bool>(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r14
  unsigned int v7; // esi
  int LocalOffset; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 72;
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 96);
  v7 = *(_DWORD *)(a1 + 80);
  if ( (v5 & 0xE0000000) != 0 )
    return (unsigned int)-1073741684;
  LODWORD(v11) = a2[2];
  HIDWORD(v11) = v5 & 0x1FFFFFFF;
  if ( (int)CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
              a1 + 72,
              &v11) < 0 )
    return (unsigned int)-1073741684;
  if ( (int)CDynamicArray<unsigned char,2003858261>::Grow(v3 + 16, 1u) < 0 )
  {
    CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::RemoveAt(
      v3,
      v7);
    return (unsigned int)-1073741684;
  }
  ++*(_DWORD *)(v3 + 24);
  *(_BYTE *)(v5 + *(_QWORD *)(v3 + 16)) = *a3;
  LocalOffset = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(v3, v7);
  if ( v7 == *a2 && LocalOffset == a2[1] )
  {
    PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus((__int64 *)v3, v7, 1LL);
  }
  else
  {
    v4 = -1073741811;
    PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::RemoveLastProperty<bool>(v3);
  }
  return v4;
}
