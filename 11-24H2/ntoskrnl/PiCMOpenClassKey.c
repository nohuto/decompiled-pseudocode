/*
 * XREFs of PiCMOpenClassKey @ 0x14094AF58
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmCreateInstallerClass @ 0x1408183B4 (_CmCreateInstallerClass.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 *     PiCMCaptureRegistryInputData @ 0x14094B8B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14094BBB4 (PiCMReturnHandleResultData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14094BD24 (PiCMDuplicateRegistryHandle.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14094C0C4 (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInterfaceClass @ 0x1409C3C28 (_CmCreateInterfaceClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  WCHAR *v13; // rsi
  int v14; // edi
  int v15; // edi
  int inited; // ebx
  bool v17; // zf
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r9
  bool v21; // sf
  HANDLE v22; // r14
  int InterfaceClass; // eax
  unsigned int v25; // [rsp+28h] [rbp-49h]
  HANDLE v26; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  __int128 v28; // [rsp+60h] [rbp-11h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-1h]
  __int128 v30; // [rsp+80h] [rbp+Fh]

  v6 = Handle;
  Handle = 0LL;
  v26 = 0LL;
  *v6 = 0;
  v28 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = 0LL;
  DestinationString = 0LL;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, &v28);
  v13 = (WCHAR *)SourceString[0];
  v14 = v10;
  if ( v10 < 0 )
    goto LABEL_19;
  if ( DWORD1(v30) || DWORD1(v28) || !a3 || a4 < 0x10 || (v15 = DWORD2(v28), (unsigned int)(DWORD2(v28) - 2) > 1) )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !SourceString[0] )
    {
      v18 = HIDWORD(SourceString[1]);
      inited = PnpCtxOpenContextBaseKey(
                 v11,
                 8 - (unsigned int)(DWORD2(v28) != 3),
                 v12,
                 HIDWORD(SourceString[1]),
                 (__int64)&Handle);
      v21 = inited < 0;
LABEL_13:
      if ( !v21 )
      {
        LOBYTE(v20) = PreviousMode;
        inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, v20, &v26);
      }
      goto LABEL_15;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
    if ( inited >= 0 )
    {
      inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( inited >= 0 )
      {
        v17 = v15 == 3;
        v18 = HIDWORD(SourceString[1]);
        if ( v17 )
        {
          inited = CmOpenCommonClassRegKey(
                     *(_QWORD **)&PiPnpRtlCtx,
                     v13,
                     64,
                     0,
                     SHIDWORD(SourceString[1]),
                     0,
                     (__int64)&Handle,
                     0LL);
          if ( inited != -1073741772 )
          {
LABEL_12:
            v21 = inited < 0;
            goto LABEL_13;
          }
          if ( (_DWORD)v30 == 1 )
          {
            if ( PiAuDoesClientHaveAccess(2u) )
            {
              InterfaceClass = CmCreateInterfaceClass(PiPnpRtlCtx, (_DWORD)v13, v18, (unsigned int)&Handle, 0LL, 0);
LABEL_35:
              inited = InterfaceClass;
              goto LABEL_12;
            }
LABEL_33:
            inited = -1073741790;
          }
        }
        else
        {
          inited = CmOpenCommonClassRegKey(
                     *(_QWORD **)&PiPnpRtlCtx,
                     v13,
                     32,
                     0,
                     SHIDWORD(SourceString[1]),
                     0,
                     (__int64)&Handle,
                     0LL);
          if ( inited != -1073741772 )
            goto LABEL_12;
          if ( (_DWORD)v30 == 1 )
          {
            if ( PiAuDoesClientHaveAccess(2u) )
            {
              InterfaceClass = CmCreateInstallerClass(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 (__int64)v13,
                                 v18,
                                 (HANDLE *)&Handle,
                                 0LL,
                                 0);
              goto LABEL_35;
            }
            goto LABEL_33;
          }
        }
      }
    }
  }
LABEL_15:
  v25 = a4;
  v22 = v26;
  v14 = PiCMReturnHandleResultData(inited, (_DWORD)v26, DWORD2(v30), a3, v25, (__int64)v6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v14 < 0 || inited < 0) && v22 )
    ObCloseHandle(v22, PreviousMode);
LABEL_19:
  if ( v13 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)v14;
}
