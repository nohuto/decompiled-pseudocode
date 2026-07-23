/*
 * XREFs of PiCMGetDeviceDepth @ 0x140A7A54C
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     PiGetDeviceDepth @ 0x1408B9C2C (PiGetDeviceDepth.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnDepthResultData @ 0x140A7A660 (PiCMReturnDepthResultData.c)
 */

__int64 __fastcall PiCMGetDeviceDepth(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // edi
  int inited; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  PCWSTR SourceString[2]; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h]

  v6 = a6;
  v17 = 0LL;
  *a6 = 0;
  v9 = 0;
  DestinationString = 0LL;
  LODWORD(a6) = 0;
  v15 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v15);
  if ( v11 >= 0 )
  {
    if ( SourceString[0]
      && *(_QWORD *)((char *)&v15 + 4) == 0x100000000LL
      && !HIDWORD(SourceString[1])
      && a3
      && a4 >= 0xC )
    {
      inited = CmValidateDeviceName(v10, SourceString[0]);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
        if ( inited >= 0 )
        {
          inited = PiGetDeviceDepth((__int64)&DestinationString, &a6);
          v9 = (unsigned int)a6;
        }
      }
    }
    else
    {
      inited = -1073741811;
    }
    v11 = PiCMReturnDepthResultData(
            (unsigned int)inited,
            v9,
            (unsigned int)v17,
            a3,
            a4,
            v6,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer);
  }
  if ( SourceString[0] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)v11;
}
