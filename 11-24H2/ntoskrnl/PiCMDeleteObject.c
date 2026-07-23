/*
 * XREFs of PiCMDeleteObject @ 0x140ABBA14
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     _PnpDeleteObject @ 0x14081B314 (_PnpDeleteObject.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 */

__int64 __fastcall PiCMDeleteObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        PVOID **P)
{
  PVOID **v6; // r15
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v6 = P;
  P = 0LL;
  v16 = 0LL;
  *(_DWORD *)v6 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v14);
  if ( v9 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v10 = -1073741790;
LABEL_32:
      v9 = PiCMReturnBasicResultData(v10, v16, a3, a4, v6);
      goto LABEL_33;
    }
    if ( !(_QWORD)v15 )
      goto LABEL_31;
    if ( DWORD1(v14) )
      goto LABEL_31;
    if ( HIDWORD(v15) )
      goto LABEL_31;
    if ( !a3 )
      goto LABEL_31;
    v11 = 8;
    if ( a4 < 8 )
      goto LABEL_31;
    if ( SDWORD2(v14) > 6 )
    {
      if ( DWORD2(v14) == 65537 )
      {
        v11 = 7;
      }
      else if ( DWORD2(v14) != 65538 )
      {
        switch ( DWORD2(v14) )
        {
          case 0x10003:
            v11 = 9;
            break;
          case 0x10004:
            v11 = 10;
            break;
          case 0x10005:
            v11 = 11;
            break;
          default:
            goto LABEL_31;
        }
      }
      if ( !PiDrvDbCtx )
        goto LABEL_31;
      if ( v11 - 5 < 2 )
        goto LABEL_15;
    }
    else
    {
      switch ( DWORD2(v14) )
      {
        case 6:
        case 1:
          goto LABEL_15;
        case 2:
          v11 = 2;
          break;
        case 3:
          v11 = 4;
          break;
        default:
          if ( (unsigned int)(DWORD2(v14) - 4) <= 1 )
          {
LABEL_15:
            v10 = -1073741637;
            goto LABEL_32;
          }
LABEL_31:
          v10 = -1073741811;
          goto LABEL_32;
      }
    }
    v10 = PiPnpRtlBeginOperation(&P);
    if ( v10 >= 0 )
      v10 = PnpDeleteObject(v12, v15, v11);
    goto LABEL_32;
  }
LABEL_33:
  if ( (_QWORD)v15 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v15);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
