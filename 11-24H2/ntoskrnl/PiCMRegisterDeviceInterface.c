/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x140A79094
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140A79294 (PiCMCaptureRegisterInterfaceInputData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v8; // ebx
  _WORD *v9; // rdi
  int v10; // esi
  __int64 v11; // rcx
  int v12; // r10d
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r11
  int v17; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  __int64 v21; // rbx
  _WORD *v22; // [rsp+50h] [rbp-39h] BYREF
  __int128 v23; // [rsp+58h] [rbp-31h] BYREF
  __int128 v24; // [rsp+68h] [rbp-21h]
  __int128 v25; // [rsp+78h] [rbp-11h]
  __int64 v26; // [rsp+88h] [rbp-1h]

  v22 = 0LL;
  *a6 = 0;
  v23 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v24 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  v10 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, &v23);
  if ( v10 < 0 )
    goto LABEL_18;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v12 = -1073741790;
LABEL_4:
    v13 = 0;
    goto LABEL_5;
  }
  if ( !*((_QWORD *)&v24 + 1)
    || DWORD1(v23)
    || (v15 = *((_QWORD *)&v25 + 1)) != 0 && (unsigned int)v26 < 2
    || !a3
    || a4 < 0x14
    || a4 - 20 < 2 )
  {
    v12 = -1073741811;
    goto LABEL_4;
  }
  v12 = CmValidateDeviceName(v11, *((_WORD **)&v24 + 1));
  if ( v12 >= 0 )
  {
    v17 = IopRegisterDeviceInterface(v16, (__int64)&v23 + 8, v15, 1, (PVOID *)&v22, 0LL);
    v9 = v22;
    v12 = v17;
    if ( v17 >= 0 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v22[v21] );
      v8 = v21 + 1;
      if ( 2 * (unsigned __int64)v8 > a4 - 20 )
      {
        v12 = -1073741789;
        v13 = 2 * v8;
        goto LABEL_5;
      }
    }
  }
  v13 = 2 * v8;
  if ( v12 < 0 )
  {
LABEL_5:
    v14 = PiCMReturnBufferResultData(v12, v13, 0, 0LL, 0, SHIDWORD(v26), a3, a4, a6);
    goto LABEL_16;
  }
  v14 = PiCMReturnBufferResultData(v12, v13, 0, v9, v13, SHIDWORD(v26), a3, a4, a6);
LABEL_16:
  v10 = v14;
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( *((_QWORD *)&v24 + 1) )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, *((void **)&v24 + 1));
  if ( *((_QWORD *)&v25 + 1) )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)&v25 + 1));
  return (unsigned int)v10;
}
