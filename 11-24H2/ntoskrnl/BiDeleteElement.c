/*
 * XREFs of BiDeleteElement @ 0x1409A5F20
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075E0CC (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x140762C84 (PopBcdCopyLoaderObjectSettings.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794274 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140815B34 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     PopBcdClearPendingResume @ 0x1409A6B48 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A2898 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140500B20 (_ultow_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140859B3C (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
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
      if ( BiIsLinkedToFirmwareVariable((__int64)a1, (int *)&v9) )
        BiSetFirmwareModifiedFromObject(a1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v6;
  }
  return result;
}
