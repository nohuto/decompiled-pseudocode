/*
 * XREFs of BiDeleteElement @ 0x140A26F84
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075270C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x1407537F4 (PopBcdCopyLoaderObjectSettings.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140784D94 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14080587C (BiHandleFirmwareDefaultEntry.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     PopBcdClearPendingResume @ 0x140A26F08 (PopBcdClearPendingResume.c)
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
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140A27ED0 (BiIsLinkedToFirmwareVariable.c)
 */

NTSTATUS __fastcall BiDeleteElement(void *a1, unsigned int a2)
{
  char IsOfflineHandle; // r12
  NTSTATUS result; // eax
  int v6; // ebx
  void *v7; // rdi
  void *v8; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-48h] BYREF
  void *v10; // [rsp+30h] [rbp-40h] BYREF
  wchar_t DstBuf[24]; // [rsp+38h] [rbp-38h] BYREF

  v9 = a2;
  IsOfflineHandle = BiIsOfflineHandle((char)a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    BiLogMessage();
    v8 = 0LL;
    v10 = 0LL;
    v6 = BiOpenKey((__int64)a1, L"Elements", 0x20019u, &v8);
    if ( v6 < 0 )
    {
      BiLogMessage();
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v6 = -1073741823;
    }
    else
    {
      if ( (int)BiOpenKey((__int64)v8, DstBuf, 0x10000u, &v10) < 0 )
      {
        BiLogMessage();
        v7 = v10;
        v6 = -1073741275;
      }
      else
      {
        v7 = v10;
        v6 = BiDeleteKey(v10);
        if ( v6 < 0 )
          BiLogMessage();
        else
          v7 = 0LL;
      }
      if ( v7 )
        BiCloseKey(v7);
    }
    if ( v8 )
      BiCloseKey(v8);
    if ( v6 >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v9) )
        BiSetFirmwareModifiedFromObject(a1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v6;
  }
  return result;
}
