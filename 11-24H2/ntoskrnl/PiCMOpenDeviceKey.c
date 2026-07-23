/*
 * XREFs of PiCMOpenDeviceKey @ 0x14094B3B0
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PiCMCaptureRegistryInputData @ 0x14094B8B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14094BBB4 (PiCMReturnHandleResultData.c)
 *     PiCMConvertDeviceKeyType @ 0x14094BC80 (PiCMConvertDeviceKeyType.c)
 *     PiCMDuplicateRegistryHandle @ 0x14094BD24 (PiCMDuplicateRegistryHandle.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r9
  HANDLE v15; // rsi
  unsigned int v17; // [rsp+20h] [rbp-60h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]

  Handle = 0LL;
  v6 = a6;
  v19 = 0LL;
  LODWORD(a6) = 0;
  *v6 = 0;
  v20 = 0LL;
  *(_OWORD *)P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = 0LL;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, &v20);
  if ( v10 < 0 )
    goto LABEL_15;
  if ( P[0] && DWORD2(v20) == 1 && a3 && a4 >= 0x10 )
  {
    v11 = PiCMConvertDeviceKeyType(DWORD1(v20), &a6);
    if ( v11 >= 0 )
    {
      v12 = HIDWORD(P[1]);
      v11 = CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)P[0],
              (int)a6,
              SDWORD1(v22),
              SHIDWORD(P[1]),
              0,
              (__int64)&Handle,
              0LL);
      if ( v11 != -1073741772 )
        goto LABEL_8;
      if ( (_DWORD)v22 == 1 )
      {
        if ( PiAuDoesClientHaveAccess(2u) )
        {
          v11 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)P[0],
                  (int)a6,
                  SDWORD1(v22),
                  v12,
                  1,
                  (__int64)&Handle,
                  0LL);
LABEL_8:
          if ( v11 >= 0 )
          {
            LOBYTE(v14) = PreviousMode;
            v11 = PiCMDuplicateRegistryHandle(Handle, v13, v12, v14, &v19);
          }
          goto LABEL_11;
        }
        v11 = -1073741790;
      }
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_11:
  v17 = a4;
  v15 = v19;
  v10 = PiCMReturnHandleResultData(v11, (_DWORD)v19, DWORD2(v22), a3, v17, (__int64)v6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v10 < 0 || v11 < 0) && v15 )
    ObCloseHandle(v15, PreviousMode);
LABEL_15:
  if ( P[0] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v10;
}
