/*
 * XREFs of BcdSetElementDataWithFlags @ 0x14096B5A4
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407537F4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x140753CD0 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140753F0C (PopBcdSetPendingResume.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140784D94 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140804E4C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A24DD4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x140A25128 (PopBcdSetupResumeObject.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BcdSetElementData @ 0x140A94754 (BcdSetElementData.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A74B8 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140500AE0 (_ultow_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140A27ED0 (BiIsLinkedToFirmwareVariable.c)
 *     BiConvertElementToRegistryData @ 0x140A5C7D8 (BiConvertElementToRegistryData.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
 *     BiConvertElementFormatToValueType @ 0x140A85AAC (BiConvertElementFormatToValueType.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdSetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        ULONG BufferSize)
{
  void *v8; // rdi
  NTSTATUS result; // eax
  int v10; // eax
  NTSTATUS v11; // ebx
  int v12; // eax
  int v13; // eax
  PVOID v14; // r15
  int v15; // eax
  int *v16; // [rsp+28h] [rbp-49h]
  char v17; // [rsp+30h] [rbp-41h] BYREF
  char IsOfflineHandle; // [rsp+31h] [rbp-40h]
  int v19; // [rsp+34h] [rbp-3Dh] BYREF
  void *v20; // [rsp+38h] [rbp-39h] BYREF
  ULONG v21; // [rsp+40h] [rbp-31h] BYREF
  void *v22; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v21 = BcdElement;
  v19 = 0;
  if ( !Buffer && BufferSize )
    return -1073741811;
  v20 = 0LL;
  v8 = 0LL;
  v17 = 0;
  v22 = 0LL;
  P = 0LL;
  if ( !BufferSize )
  {
    BiDeleteElement(BcdObjectHandle, BcdElement);
    return 0;
  }
  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", BcdElement);
    v10 = BiOpenKey((__int64)BcdObjectHandle, L"Elements", 0x2001Du, &v20);
    v11 = v10;
    if ( v10 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v10);
    }
    else
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v11 = -1073741823;
LABEL_16:
        if ( v20 )
          BiCloseKey(v20);
        if ( v11 >= 0 )
        {
          if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(BcdObjectHandle, &v21) )
            BiSetFirmwareModifiedFromObject(BcdObjectHandle);
        }
        BiReleaseBcdSyncMutant(IsOfflineHandle);
        return v11;
      }
      v12 = BiCreateKey(v20, DstBuf, 65538LL, 1LL, &v22, &v17);
      v11 = v12;
      if ( v12 < 0 )
      {
        BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v12);
        v8 = v22;
      }
      else
      {
        v16 = &v19;
        v13 = BiConvertElementToRegistryData(BcdElement, Buffer, BufferSize);
        v8 = v22;
        v11 = v13;
        v14 = P;
        if ( v13 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v13, &P, &v19);
        }
        else
        {
          BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
          LODWORD(v16) = v19;
          v15 = BiSetRegistryValue(v8, L"Element", 0LL);
          v11 = v15;
          if ( v15 < 0 )
            BiLogMessage(
              4LL,
              L"Failed to set registry data for element %s. Status: %x",
              DstBuf,
              (unsigned int)v15,
              v14,
              v16);
        }
        if ( v14 )
          ExFreePoolWithTag(v14, 0x4B444342u);
        if ( v11 >= 0 )
          goto LABEL_14;
      }
    }
    if ( v17 )
    {
      BiDeleteKey(v8);
      v8 = 0LL;
    }
LABEL_14:
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_16;
  }
  return result;
}
