/*
 * XREFs of BcdSetElementDataWithFlags @ 0x1409BEB2C
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407632B4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x140763790 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x1407639CC (PopBcdSetPendingResume.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794164 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408149C4 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     BcdSetElementData @ 0x1409BFA8C (BcdSetElementData.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A71D1C (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x140A72070 (PopBcdSetupResumeObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A7E48 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140503260 (_ultow_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14085DDCC (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiConvertElementFormatToValueType @ 0x1409BF620 (BiConvertElementFormatToValueType.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BiConvertElementToRegistryData @ 0x1409C00C4 (BiConvertElementToRegistryData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

int __fastcall BcdSetElementDataWithFlags(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // esi
  void *v8; // rdi
  int result; // eax
  int v10; // ebx
  int v11; // eax
  PVOID v12; // r15
  ULONG v13; // eax
  bool v14; // [rsp+30h] [rbp-41h] BYREF
  char IsOfflineHandle; // [rsp+31h] [rbp-40h]
  ULONG v16; // [rsp+34h] [rbp-3Dh]
  void *v17; // [rsp+38h] [rbp-39h] BYREF
  int v18; // [rsp+40h] [rbp-31h] BYREF
  void *v19; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h]
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v18 = a2;
  v16 = 0;
  v6 = a2;
  if ( !a4 && a5 )
    return -1073741811;
  v17 = 0LL;
  v8 = 0LL;
  v14 = 0;
  v19 = 0LL;
  P = 0LL;
  if ( !a5 )
  {
    BiDeleteElement(a1, a2);
    return 0;
  }
  IsOfflineHandle = BiIsOfflineHandle((char)a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    BiLogMessage();
    v10 = BiOpenKey((__int64)a1, L"Elements", 0x2001Du, &v17);
    if ( v10 < 0 )
    {
      BiLogMessage();
    }
    else
    {
      if ( ultow_s(v6, DstBuf, 0x16uLL, 16) )
      {
        v10 = -1073741823;
LABEL_15:
        if ( v17 )
          BiCloseKey(v17);
        if ( v10 >= 0 )
        {
          if ( BiIsLinkedToFirmwareVariable((__int64)a1, &v18) )
            BiSetFirmwareModifiedFromObject(a1);
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
        v11 = BiConvertElementToRegistryData(v6, a4, a5);
        v8 = v19;
        v10 = v11;
        v12 = P;
        if ( v11 < 0
          || (v13 = BiConvertElementFormatToValueType(HIBYTE(v6) & 0xF),
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
