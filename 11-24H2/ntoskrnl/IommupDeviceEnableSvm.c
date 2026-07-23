/*
 * XREFs of IommupDeviceEnableSvm @ 0x1406FD184
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FD034 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     IommupPasidDeviceCreate @ 0x14054BED8 (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14054C01C (IommupPasidDeviceDelete.c)
 *     HalpIommuFreeDomainId @ 0x14054FB58 (HalpIommuFreeDomainId.c)
 *     HalpIommuGetDomainId @ 0x14054FCE4 (HalpIommuGetDomainId.c)
 *     IommuDisableDevicePasid @ 0x140561480 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140561750 (IommuEnableDevicePasid.c)
 *     IommuGetLeastMaximumSupportedAsidValue @ 0x140561F44 (IommuGetLeastMaximumSupportedAsidValue.c)
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562DD8 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x1405630EC (IommupHvAttachPasidDevice.c)
 *     IommupHvDetachPasidDevice @ 0x1405637D8 (IommupHvDetachPasidDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDeviceEnableSvm(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  KSPIN_LOCK **v4; // r15
  char v5; // r13
  unsigned int LeastMaximumSupportedAsidValue; // edi
  _DWORD *v9; // r14
  int v10; // edi
  int DomainId; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v16; // [rsp+70h] [rbp+8h] BYREF
  ULONG v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = -1;
  v16 = 0;
  v4 = 0LL;
  v5 = 0;
  v17 = -1;
  v18 = 0LL;
  if ( HalpHvIommu )
    LeastMaximumSupportedAsidValue = IommupHvMaximumAsids;
  else
    LeastMaximumSupportedAsidValue = IommuGetLeastMaximumSupportedAsidValue();
  if ( a2 )
  {
    v9 = (_DWORD *)(a1 + 384);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 312) || !*(_QWORD *)(a1 + 320) || !*(_QWORD *)(a1 + 328) )
    {
      v10 = -1073741822;
      goto LABEL_31;
    }
    if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), &v16) < 0
      || (v16 & 4) == 0
      || 1 << ((unsigned __int8)v16 >> 3) < LeastMaximumSupportedAsidValue )
    {
      v10 = -1073741637;
      goto LABEL_31;
    }
    v9 = (_DWORD *)(a1 + 384);
    *(_DWORD *)(a1 + 384) = v16 & 0xF8 | *(_DWORD *)(a1 + 384) & 0xFFFFFF07 | 4;
  }
  if ( !HalpHvIommu )
  {
    DomainId = HalpIommuGetDomainId(*(_QWORD *)(a1 + 32), &v17);
    v3 = v17;
    v10 = DomainId;
    if ( DomainId < 0 )
      goto LABEL_31;
    if ( v17 - 1 > 0xFFFFFFFD )
    {
      v10 = -1073741670;
      goto LABEL_31;
    }
    *(_DWORD *)(a1 + 72) = v17;
    v5 = 1;
  }
  v12 = IommupPasidDeviceCreate(a1, 0, &v18);
  v2 = v18;
  v10 = v12;
  if ( v12 >= 0 )
  {
    if ( HalpHvIommu )
    {
      v13 = IommupHvAttachPasidDevice(a1);
    }
    else
    {
      v4 = *(KSPIN_LOCK ***)(v18 + 56);
      v10 = IommupMapDeviceInternal(*v4, a1, v9);
      if ( v10 < 0 )
        goto LABEL_31;
      v13 = IommuEnableDevicePasid((__int64)v4, a1);
    }
    v10 = v13;
    if ( v13 >= 0 )
    {
      if ( a2 )
        return (unsigned int)v10;
      v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), v9);
      if ( v10 >= 0 )
        return (unsigned int)v10;
      if ( HalpHvIommu )
        IommupHvDetachPasidDevice(a1, v14);
      else
        IommuDisableDevicePasid((__int64)v4, a1);
    }
  }
LABEL_31:
  if ( *(_QWORD *)(a1 + 96) )
    IommupUnmapDeviceInternal((__int64)*v4, a1);
  if ( v2 )
    IommupPasidDeviceDelete(v2);
  if ( v5 )
  {
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v3);
    *(_DWORD *)(a1 + 72) = -1;
  }
  *(_DWORD *)(a1 + 384) &= 0xFFFFFF03;
  return (unsigned int)v10;
}
