/*
 * XREFs of PiCMCreateObject @ 0x1406F63C0
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     _PnpCreateObject @ 0x14081B09C (_PnpCreateObject.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 */

__int64 __fastcall PiCMCreateObject(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  int v8; // ebx
  unsigned int Object; // eax
  int v10; // r8d
  int v11; // ecx
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, &v13);
  if ( v8 >= 0 )
  {
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_31:
      v8 = PiCMReturnBasicResultData(Object, (unsigned int)v15, a3, a4, a6);
      goto LABEL_32;
    }
    if ( !(_QWORD)v14 )
      goto LABEL_30;
    if ( DWORD1(v13) )
      goto LABEL_30;
    if ( HIDWORD(v14) )
      goto LABEL_30;
    if ( !a3 )
      goto LABEL_30;
    v10 = 8;
    if ( a4 < 8 )
      goto LABEL_30;
    if ( SDWORD2(v13) > 6 )
    {
      if ( DWORD2(v13) == 65537 )
      {
        v10 = 7;
      }
      else if ( DWORD2(v13) != 65538 )
      {
        switch ( DWORD2(v13) )
        {
          case 0x10003:
            v10 = 9;
            break;
          case 0x10004:
            v10 = 10;
            break;
          case 0x10005:
            v10 = 11;
            break;
          default:
            goto LABEL_30;
        }
      }
      if ( !PiDrvDbCtx )
        goto LABEL_30;
      v11 = v10 - 5;
      if ( (unsigned int)(v10 - 5) < 2 )
        goto LABEL_15;
    }
    else
    {
      if ( DWORD2(v13) == 6 || DWORD2(v13) == 1 )
        goto LABEL_15;
      v11 = DWORD2(v13) - 2;
      if ( DWORD2(v13) == 2 )
      {
        v10 = 2;
      }
      else
      {
        v11 = DWORD2(v13) - 3;
        if ( DWORD2(v13) != 3 )
        {
          if ( (unsigned int)(DWORD2(v13) - 4) <= 1 )
          {
LABEL_15:
            Object = -1073741637;
            goto LABEL_31;
          }
LABEL_30:
          Object = -1073741811;
          goto LABEL_31;
        }
        v10 = 4;
      }
    }
    Object = PnpCreateObject(v11, v14, v10, 0, 0LL);
    goto LABEL_31;
  }
LABEL_32:
  if ( (_QWORD)v14 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v14);
  return (unsigned int)v8;
}
