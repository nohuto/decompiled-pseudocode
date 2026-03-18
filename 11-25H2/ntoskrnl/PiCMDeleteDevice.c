/*
 * XREFs of PiCMDeleteDevice @ 0x140AC08A4
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiCMCaptureObjectInputData @ 0x140934730 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x140934C74 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x140A13980 (PiCMReleaseObjectInputData.c)
 */

__int64 __fastcall PiCMDeleteDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  PCWSTR SourceString[2]; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v11 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v13 = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v11);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
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
    v8 = PiCMReturnBasicResultData(v9, v13, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)&v11);
  return (unsigned int)v8;
}
