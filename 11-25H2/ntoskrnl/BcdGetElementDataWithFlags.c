/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14096B820
 * Callers:
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140500AE0 (_ultow_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiGetObjectIdentifier @ 0x14096BADC (BiGetObjectIdentifier.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiConvertRegistryDataToElement @ 0x140A5F768 (BiConvertRegistryDataToElement.c)
 *     BiConvertElementFormatToValueType @ 0x140A85AAC (BiConvertElementFormatToValueType.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdGetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        PULONG BufferSize)
{
  char v6; // r12
  NTSTATUS v7; // eax
  void *v8; // rsi
  wchar_t *v9; // rdi
  NTSTATUS v10; // eax
  wchar_t *v11; // r14
  int v12; // eax
  NTSTATUS v13; // ebx
  int v14; // eax
  unsigned int v15; // eax
  int RegistryValue; // eax
  PVOID v17; // r12
  NTSTATUS v19; // r8d
  __int64 v20; // rcx
  int v21[2]; // [rsp+20h] [rbp-A1h]
  char IsOfflineHandle; // [rsp+40h] [rbp-81h]
  size_t Size; // [rsp+48h] [rbp-79h] BYREF
  void *v25; // [rsp+50h] [rbp-71h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-69h]
  void *v27; // [rsp+60h] [rbp-61h] BYREF
  PVOID P; // [rsp+68h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-51h] BYREF
  __int64 v30; // [rsp+80h] [rbp-41h]
  GUID *v31; // [rsp+88h] [rbp-39h]
  GUID Guid; // [rsp+90h] [rbp-31h] BYREF
  wchar_t DstBuf[24]; // [rsp+A0h] [rbp-21h] BYREF

  v31 = (GUID *)Buffer;
  v30 = (__int64)BufferSize;
  LODWORD(Size) = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( !BufferSize || !Buffer && *BufferSize )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  v6 = IsOfflineHandle;
  v7 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v7 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v7);
    return v19;
  }
  else
  {
    v25 = 0LL;
    v27 = 0LL;
    v8 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v9 = L"N/A";
    if ( (int)BiGetObjectIdentifier(BcdObjectHandle, &Guid) < 0 )
    {
      v11 = DestinationString.Buffer;
    }
    else
    {
      v10 = RtlStringFromGUIDEx(&Guid, &DestinationString, 1u);
      v11 = DestinationString.Buffer;
      if ( v10 >= 0 )
        v9 = DestinationString.Buffer;
    }
    v12 = BiOpenKey((__int64)BcdObjectHandle, L"Elements", 0x20019u, &v25);
    v13 = v12;
    if ( v12 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        v9,
        (unsigned int)v12);
    }
    else if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
    {
      v13 = -1073741823;
    }
    else
    {
      v14 = BiOpenKey((__int64)v25, DstBuf, 0x20019u, &v27);
      if ( v14 < 0 )
      {
        v20 = 2LL;
        if ( v14 != -1073741772 )
          v20 = 4LL;
        BiLogMessage(
          v20,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          v9,
          DstBuf,
          v14);
        v8 = v27;
        v13 = -1073741275;
      }
      else
      {
        v15 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
        v8 = v27;
        v26 = v15;
        RegistryValue = BiGetRegistryValue((__int64)v27, L"Element", 0LL, v15, &P, &Size);
        v17 = P;
        v13 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          v21[0] = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            v9,
            v26,
            *(_QWORD *)v21);
        }
        else
        {
          v13 = BiConvertRegistryDataToElement(BcdObjectHandle, (PCWSTR)P, (unsigned int)Size, 0, v31, v30);
        }
        if ( v17 )
          ExFreePoolWithTag(v17, 0x4B444342u);
        v6 = IsOfflineHandle;
      }
    }
    if ( v11 )
      ExFreePool(v11);
    if ( v8 )
      BiCloseKey(v8);
    if ( v25 )
      BiCloseKey(v25);
    BiReleaseBcdSyncMutant(v6);
    return v13;
  }
}
