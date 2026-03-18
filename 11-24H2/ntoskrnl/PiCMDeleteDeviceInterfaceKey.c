/*
 * XREFs of PiCMDeleteDeviceInterfaceKey @ 0x1406F82B8
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x1408183C4 (_CmDeleteDeviceInterfaceRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x1408BC6A8 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1408BEB90 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BF0D4 (PiCMReturnBasicResultData.c)
 */

__int64 __fastcall PiCMDeleteDeviceInterfaceKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v8; // edi
  int v9; // r9d
  unsigned int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, &v12);
  if ( v8 >= 0 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v13 && *(_QWORD *)((char *)&v12 + 4) == 0x400000000LL && !HIDWORD(v13) && a3 && a4 >= 8 )
        v10 = CmDeleteDeviceInterfaceRegKey(PiPnpRtlCtx, v13, 50, v9, 1);
      else
        v10 = -1073741811;
    }
    else
    {
      v10 = -1073741790;
    }
    v8 = PiCMReturnBasicResultData(v10, (unsigned int)v14, a3, a4, a6);
  }
  if ( (_QWORD)v13 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v13);
  return (unsigned int)v8;
}
