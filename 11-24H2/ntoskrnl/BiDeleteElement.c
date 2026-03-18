/*
 * XREFs of BiDeleteElement @ 0x1409BF8D0
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075F12C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x1407632B4 (PopBcdCopyLoaderObjectSettings.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794164 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408153F4 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     PopBcdClearPendingResume @ 0x1409C04F8 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A7E48 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140503260 (_ultow_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14085DDCC (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 */

int __fastcall BiDeleteElement(void *a1, unsigned int a2)
{
  char IsOfflineHandle; // r12
  int result; // eax
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
