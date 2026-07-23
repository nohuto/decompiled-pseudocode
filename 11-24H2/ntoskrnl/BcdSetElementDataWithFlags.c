/*
 * XREFs of BcdSetElementDataWithFlags @ 0x1409A517C
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x140762C84 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140763390 (PopBcdSetPendingResume.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794274 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140815104 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BcdSetElementData @ 0x1409A60DC (BcdSetElementData.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x140A6B450 (PopBcdSetupResumeObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A2898 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140500B20 (_ultow_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiCreateKey @ 0x1408598CC (BiCreateKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140859B3C (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiConvertElementFormatToValueType @ 0x1409A5C70 (BiConvertElementFormatToValueType.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 *     BiConvertElementToRegistryData @ 0x1409A6714 (BiConvertElementToRegistryData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  NTSTATUS v10; // ebx
  int v11; // eax
  PVOID v12; // r15
  ULONG v13; // eax
  bool v14; // [rsp+30h] [rbp-41h] BYREF
  char IsOfflineHandle; // [rsp+31h] [rbp-40h]
  ULONG v16; // [rsp+34h] [rbp-3Dh]
  void *v17; // [rsp+38h] [rbp-39h] BYREF
  ULONG v18; // [rsp+40h] [rbp-31h] BYREF
  void *v19; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h]
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v18 = BcdElement;
  v16 = 0;
  if ( !Buffer && BufferSize )
    return -1073741811;
  v17 = 0LL;
  v8 = 0LL;
  v14 = 0;
  v19 = 0LL;
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
    BiLogMessage();
    v10 = BiOpenKey((__int64)BcdObjectHandle, L"Elements", 0x2001Du, &v17);
    if ( v10 < 0 )
    {
      BiLogMessage();
    }
    else
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v10 = -1073741823;
LABEL_15:
        if ( v17 )
          BiCloseKey(v17);
        if ( v10 >= 0 )
        {
          if ( BiIsLinkedToFirmwareVariable((__int64)BcdObjectHandle, (int *)&v18) )
            BiSetFirmwareModifiedFromObject(BcdObjectHandle);
        }
        BiReleaseBcdSyncMutant(IsOfflineHandle);
        return v10;
      }
      v10 = BiCreateKey((__int64)v17, DstBuf, 0x10002u, 1u, &v19, &v14);
      if ( v10 < 0 )
      {
        BiLogMessage();
        v8 = v19;
      }
      else
      {
        v11 = BiConvertElementToRegistryData(BcdElement, Buffer, BufferSize);
        v8 = v19;
        v10 = v11;
        v12 = P;
        if ( v11 < 0
          || (v13 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF),
              v10 = BiSetRegistryValue((__int64)v8, L"Element", 0LL, v13, v12, v16),
              v10 < 0) )
        {
          BiLogMessage();
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0x4B444342u);
        if ( v10 >= 0 )
          goto LABEL_13;
      }
    }
    if ( v14 )
    {
      BiDeleteKey(v8);
      v8 = 0LL;
    }
LABEL_13:
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_15;
  }
  return result;
}
