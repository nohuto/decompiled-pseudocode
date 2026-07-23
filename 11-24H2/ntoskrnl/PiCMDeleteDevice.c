/*
 * XREFs of PiCMDeleteDevice @ 0x1406F6578
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     PiCMDeleteDeviceWorker @ 0x14072F100 (PiCMDeleteDeviceWorker.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 */

__int64 __fastcall PiCMDeleteDevice(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  int v8; // edi
  unsigned int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  PCWSTR SourceString[2]; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v11 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v13 = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, &v11);
  if ( v8 >= 0 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
    {
      if ( SourceString[0]
        && *(_QWORD *)((char *)&v11 + 4) == 0x100000000LL
        && !HIDWORD(SourceString[1])
        && a3
        && a4 >= 8 )
      {
        v9 = PiCMDeleteDeviceWorker(SourceString[0]);
      }
      else
      {
        v9 = -1073741811;
      }
    }
    else
    {
      v9 = -1073741790;
    }
    v8 = PiCMReturnBasicResultData(v9, (unsigned int)v13, a3, a4, a6);
  }
  if ( SourceString[0] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)v8;
}
