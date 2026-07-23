/*
 * XREFs of PiCMOpenDeviceInterfaceKey @ 0x14094B1EC
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiCMCaptureRegistryInputData @ 0x14094B8B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14094BBB4 (PiCMReturnHandleResultData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14094BD24 (PiCMDuplicateRegistryHandle.c)
 */

__int64 __fastcall PiCMOpenDeviceInterfaceKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  __int64 v11; // r9
  ACCESS_MASK v12; // edi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r9
  HANDLE v16; // rsi
  __int64 v18; // r9
  unsigned int v19; // [rsp+20h] [rbp-60h]
  HANDLE v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h]
  __int128 v23; // [rsp+68h] [rbp-18h]

  v6 = Handle;
  Handle = 0LL;
  v20 = 0LL;
  *v6 = 0;
  v21 = 0LL;
  v22 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = 0LL;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, &v21);
  if ( v10 < 0 )
    goto LABEL_14;
  if ( (_QWORD)v22 && *(_QWORD *)((char *)&v21 + 4) == 0x400000000LL && !DWORD1(v23) && a3 && a4 >= 0x10 )
  {
    v12 = HIDWORD(v22);
    v14 = CmOpenDeviceInterfaceRegKey(
            *(_QWORD **)&PiPnpRtlCtx,
            (WCHAR *)v22,
            0x32u,
            v11,
            HIDWORD(v22),
            0,
            (HANDLE *)&Handle,
            0LL);
    if ( v14 != -1073741772 )
      goto LABEL_8;
    if ( (_DWORD)v23 == 1 )
    {
      if ( PiAuDoesClientHaveAccess(2u) )
      {
        v14 = CmOpenDeviceInterfaceRegKey(
                *(_QWORD **)&PiPnpRtlCtx,
                (WCHAR *)v22,
                0x32u,
                v18,
                v12,
                1,
                (HANDLE *)&Handle,
                0LL);
LABEL_8:
        if ( v14 >= 0 )
        {
          LOBYTE(v15) = PreviousMode;
          v14 = PiCMDuplicateRegistryHandle(Handle, v13, v12, v15, &v20);
        }
        goto LABEL_10;
      }
      v14 = -1073741790;
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_10:
  v19 = a4;
  v16 = v20;
  v10 = PiCMReturnHandleResultData(v14, (_DWORD)v20, DWORD2(v23), a3, v19, (__int64)v6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v10 < 0 || v14 < 0) && v16 )
    ObCloseHandle(v16, PreviousMode);
LABEL_14:
  if ( (_QWORD)v22 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v22);
  return (unsigned int)v10;
}
