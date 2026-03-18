/*
 * XREFs of IommupDeviceEnableSvm @ 0x1406FF544
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FF3F4 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     IommupPasidDeviceCreate @ 0x14054E5AC (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14054E6DC (IommupPasidDeviceDelete.c)
 *     HalpIommuFreeDomainId @ 0x140552218 (HalpIommuFreeDomainId.c)
 *     HalpIommuGetDomainId @ 0x1405523A4 (HalpIommuGetDomainId.c)
 *     IommuDisableDevicePasid @ 0x140563850 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140563B20 (IommuEnableDevicePasid.c)
 *     IommuGetLeastMaximumSupportedAsidValue @ 0x140564314 (IommuGetLeastMaximumSupportedAsidValue.c)
 *     IommupMapDeviceInternal @ 0x140564E48 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x1405651A8 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x1405654BC (IommupHvAttachPasidDevice.c)
 *     IommupHvDetachPasidDevice @ 0x140565B20 (IommupHvDetachPasidDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDeviceEnableSvm(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebp
  KSPIN_LOCK **v6; // r15
  char v7; // r13
  unsigned int LeastMaximumSupportedAsidValue; // edi
  _DWORD *v11; // r14
  int v12; // edi
  int DomainId; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+70h] [rbp+8h] BYREF
  ULONG v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = -1;
  v20 = 0;
  v6 = 0LL;
  v7 = 0;
  v21 = -1;
  v22 = 0LL;
  if ( HalpHvIommu )
    LeastMaximumSupportedAsidValue = IommupHvMaximumAsids;
  else
    LeastMaximumSupportedAsidValue = IommuGetLeastMaximumSupportedAsidValue();
  if ( a2 )
  {
    v11 = (_DWORD *)(a1 + 384);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 312) || !*(_QWORD *)(a1 + 320) || !*(_QWORD *)(a1 + 328) )
    {
      v12 = -1073741822;
      goto LABEL_31;
    }
    if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), &v20, a3, a4) < 0
      || (v20 & 4) == 0
      || 1 << ((unsigned __int8)v20 >> 3) < LeastMaximumSupportedAsidValue )
    {
      v12 = -1073741637;
      goto LABEL_31;
    }
    v11 = (_DWORD *)(a1 + 384);
    *(_DWORD *)(a1 + 384) = v20 & 0xF8 | *(_DWORD *)(a1 + 384) & 0xFFFFFF07 | 4;
  }
  if ( !HalpHvIommu )
  {
    DomainId = HalpIommuGetDomainId(*(_QWORD *)(a1 + 32), &v21);
    v5 = v21;
    v12 = DomainId;
    if ( DomainId < 0 )
      goto LABEL_31;
    if ( v21 - 1 > 0xFFFFFFFD )
    {
      v12 = -1073741670;
      goto LABEL_31;
    }
    *(_DWORD *)(a1 + 72) = v21;
    v7 = 1;
  }
  v14 = IommupPasidDeviceCreate(a1, 0, &v22);
  v4 = v22;
  v12 = v14;
  if ( v14 >= 0 )
  {
    if ( HalpHvIommu )
    {
      v15 = IommupHvAttachPasidDevice(a1);
    }
    else
    {
      v6 = *(KSPIN_LOCK ***)(v22 + 56);
      v12 = IommupMapDeviceInternal(*v6, a1, v11);
      if ( v12 < 0 )
        goto LABEL_31;
      v15 = IommuEnableDevicePasid((__int64 *)v6, a1);
    }
    v12 = v15;
    if ( v15 >= 0 )
    {
      if ( a2 )
        return (unsigned int)v12;
      v12 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), v11, xHalGetInterruptTranslator, a1);
      if ( v12 >= 0 )
        return (unsigned int)v12;
      if ( HalpHvIommu )
        IommupHvDetachPasidDevice(a1, v16, v17, v18);
      else
        IommuDisableDevicePasid((__int64)v6, a1);
    }
  }
LABEL_31:
  if ( *(_QWORD *)(a1 + 96) )
    IommupUnmapDeviceInternal((__int64)*v6, a1);
  if ( v4 )
    IommupPasidDeviceDelete(v4);
  if ( v7 )
  {
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v5);
    *(_DWORD *)(a1 + 72) = -1;
  }
  *(_DWORD *)(a1 + 384) &= 0xFFFFFF03;
  return (unsigned int)v12;
}
