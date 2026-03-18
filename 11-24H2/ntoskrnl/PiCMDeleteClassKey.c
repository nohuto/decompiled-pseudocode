/*
 * XREFs of PiCMDeleteClassKey @ 0x140AC0780
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     _CmDeleteInstallerClass @ 0x140818A18 (_CmDeleteInstallerClass.c)
 *     _CmDeleteInterfaceClass @ 0x140818DC0 (_CmDeleteInterfaceClass.c)
 *     PiAuDoesClientHaveAccess @ 0x1408BC6A8 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1408BEB90 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BF0D4 (PiCMReturnBasicResultData.c)
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 */

__int64 __fastcall PiCMDeleteClassKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        PVOID **P)
{
  PVOID **v6; // r15
  int v9; // edi
  int v10; // eax
  int v11; // edi
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v6 = P;
  P = 0LL;
  v15 = 0LL;
  *(_DWORD *)v6 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v13);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v14
        && !HIDWORD(v14)
        && a3
        && a4 >= 8
        && (v11 = DWORD2(v13), (unsigned int)(DWORD2(v13) - 2) <= 1)
        && (unsigned int)(DWORD1(v13) - 1) <= 1 )
      {
        v10 = PiPnpRtlBeginOperation(&P);
        if ( v10 >= 0 )
        {
          if ( v11 == 3 )
            v10 = CmDeleteInterfaceClass(*(__int64 *)&PiPnpRtlCtx, v14, 0);
          else
            v10 = CmDeleteInstallerClass(*(__int64 *)&PiPnpRtlCtx, v14, 0);
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(v10, v15, a3, a4, v6);
  }
  if ( (_QWORD)v14 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v14);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
