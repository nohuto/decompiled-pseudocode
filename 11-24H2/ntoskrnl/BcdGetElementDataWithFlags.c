/*
 * XREFs of BcdGetElementDataWithFlags @ 0x1409A4E5C
 * Callers:
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140500B20 (_ultow_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiGetObjectIdentifier @ 0x1409A5118 (BiGetObjectIdentifier.c)
 *     BiConvertElementFormatToValueType @ 0x1409A5C70 (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x1409A5CA8 (BiConvertRegistryDataToElement.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdGetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        PULONG BufferSize)
{
  char v6; // r12
  void *v7; // rsi
  wchar_t *v8; // r14
  NTSTATUS v9; // ebx
  unsigned int v10; // eax
  int RegistryValue; // eax
  PVOID v12; // r12
  NTSTATUS v14; // r8d
  char IsOfflineHandle; // [rsp+40h] [rbp-81h]
  size_t Size; // [rsp+48h] [rbp-79h] BYREF
  void *v18; // [rsp+50h] [rbp-71h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-69h]
  void *v20; // [rsp+60h] [rbp-61h] BYREF
  PVOID P; // [rsp+68h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-51h] BYREF
  __int64 v23; // [rsp+80h] [rbp-41h]
  GUID *v24; // [rsp+88h] [rbp-39h]
  GUID Guid; // [rsp+90h] [rbp-31h] BYREF
  wchar_t DstBuf[24]; // [rsp+A0h] [rbp-21h] BYREF

  v24 = (GUID *)Buffer;
  v23 = (__int64)BufferSize;
  LODWORD(Size) = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( !BufferSize || !Buffer && *BufferSize )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  v6 = IsOfflineHandle;
  if ( BiAcquireBcdSyncMutant(IsOfflineHandle) < 0 )
  {
    BiLogMessage();
    return v14;
  }
  else
  {
    v18 = 0LL;
    v20 = 0LL;
    v7 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( (int)BiGetObjectIdentifier(BcdObjectHandle, &Guid) >= 0 )
      RtlStringFromGUIDEx(&Guid, &DestinationString, 1u);
    v8 = DestinationString.Buffer;
    v9 = BiOpenKey((__int64)BcdObjectHandle, L"Elements", 0x20019u, &v18);
    if ( v9 < 0 )
    {
      BiLogMessage();
    }
    else if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
    {
      v9 = -1073741823;
    }
    else if ( (int)BiOpenKey((__int64)v18, DstBuf, 0x20019u, &v20) < 0 )
    {
      BiLogMessage();
      v7 = v20;
      v9 = -1073741275;
    }
    else
    {
      v10 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
      v7 = v20;
      v19 = v10;
      RegistryValue = BiGetRegistryValue((__int64)v20, L"Element", 0LL, v10, &P, &Size);
      v12 = P;
      v9 = RegistryValue;
      if ( RegistryValue < 0 )
        BiLogMessage();
      else
        v9 = BiConvertRegistryDataToElement(BcdObjectHandle, (PCWSTR)P, (unsigned int)Size, 0, v24, v23);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x4B444342u);
      v6 = IsOfflineHandle;
    }
    if ( v8 )
      ExFreePool(v8);
    if ( v7 )
      BiCloseKey(v7);
    if ( v18 )
      BiCloseKey(v18);
    BiReleaseBcdSyncMutant(v6);
    return v9;
  }
}
