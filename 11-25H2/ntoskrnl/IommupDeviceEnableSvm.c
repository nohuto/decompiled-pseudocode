/*
 * XREFs of IommupDeviceEnableSvm @ 0x1406F3754
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406F3604 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     IommupPasidDeviceCreate @ 0x14054BC9C (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14054BDCC (IommupPasidDeviceDelete.c)
 *     HalpIommuFreeDomainId @ 0x14054F918 (HalpIommuFreeDomainId.c)
 *     HalpIommuGetDomainId @ 0x14054FAA4 (HalpIommuGetDomainId.c)
 *     IommuDisableDevicePasid @ 0x140560FB0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140561280 (IommuEnableDevicePasid.c)
 *     IommuGetLeastMaximumSupportedAsidValue @ 0x140561A74 (IommuGetLeastMaximumSupportedAsidValue.c)
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562918 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x140562CAC (IommupHvAttachPasidDevice.c)
 *     IommupHvDetachPasidDevice @ 0x140563310 (IommupHvDetachPasidDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDeviceEnableSvm(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  KSPIN_LOCK **v4; // r15
  char v5; // r13
  int v8; // edi
  int DomainId; // eax
  int v10; // eax
  int v11; // eax
  ULONG v13; // [rsp+78h] [rbp+10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = -1;
  v4 = 0LL;
  v5 = 0;
  v13 = -1;
  v14 = 0LL;
  if ( !HalpHvIommu )
    IommuGetLeastMaximumSupportedAsidValue();
  if ( !a2 )
  {
    if ( *(_QWORD *)(a1 + 312) && *(_QWORD *)(a1 + 320) && *(_QWORD *)(a1 + 328) )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288));
      v8 = -1073741637;
    }
    else
    {
      v8 = -1073741822;
    }
    goto LABEL_20;
  }
  if ( !HalpHvIommu )
  {
    DomainId = HalpIommuGetDomainId(*(_QWORD *)(a1 + 32), &v13);
    v3 = v13;
    v8 = DomainId;
    if ( DomainId < 0 )
      goto LABEL_20;
    if ( v13 - 1 > 0xFFFFFFFD )
    {
      v8 = -1073741670;
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 72) = v13;
    v5 = 1;
  }
  v10 = IommupPasidDeviceCreate(a1, 0, &v14);
  v2 = v14;
  v8 = v10;
  if ( v10 >= 0 )
  {
    if ( HalpHvIommu )
    {
      v11 = IommupHvAttachPasidDevice(a1);
LABEL_19:
      v8 = v11;
      if ( v11 >= 0 )
        return (unsigned int)v8;
      goto LABEL_20;
    }
    v4 = *(KSPIN_LOCK ***)(v14 + 56);
    v8 = IommupMapDeviceInternal(*v4, a1, (_DWORD *)(a1 + 384));
    if ( v8 >= 0 )
    {
      v11 = IommuEnableDevicePasid((__int64)v4, a1);
      goto LABEL_19;
    }
  }
LABEL_20:
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
  return (unsigned int)v8;
}
