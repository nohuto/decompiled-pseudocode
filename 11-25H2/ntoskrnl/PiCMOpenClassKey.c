/*
 * XREFs of PiCMOpenClassKey @ 0x14095CAF8
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmCreateInstallerClass @ 0x140807D74 (_CmCreateInstallerClass.c)
 *     RtlUpcaseUnicodeString @ 0x140827CF0 (RtlUpcaseUnicodeString.c)
 *     _CmOpenCommonClassRegKey @ 0x1408CA33C (_CmOpenCommonClassRegKey.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PiCMCaptureRegistryInputData @ 0x14095BC40 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14095BF24 (PiCMReturnHandleResultData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14095C094 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14095DB7C (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInterfaceClass @ 0x140A715F4 (_CmCreateInterfaceClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(_DWORD *a1, unsigned int a2, _OWORD *a3, unsigned int a4, int a5, _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  const WCHAR *v13; // rsi
  int v14; // edi
  int v15; // edi
  int inited; // ebx
  bool v17; // zf
  ACCESS_MASK v18; // edi
  __int64 v19; // rdx
  bool v20; // sf
  HANDLE v21; // r14
  int InterfaceClass; // eax
  unsigned int v24; // [rsp+28h] [rbp-49h]
  HANDLE v25; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  __int128 v27; // [rsp+60h] [rbp-11h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-1h]
  __int128 v29; // [rsp+80h] [rbp+Fh]

  v6 = Handle;
  Handle = 0LL;
  v25 = 0LL;
  *v6 = 0;
  v27 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = 0LL;
  DestinationString = 0LL;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, (__int64)&v27);
  v13 = SourceString[0];
  v14 = v10;
  if ( v10 < 0 )
    goto LABEL_19;
  if ( DWORD1(v29) || DWORD1(v27) || !a3 || a4 < 0x10 || (v15 = DWORD2(v27), (unsigned int)(DWORD2(v27) - 2) > 1) )
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
                 8 - (unsigned int)(DWORD2(v27) != 3),
                 v12,
                 HIDWORD(SourceString[1]),
                 (__int64)&Handle);
      v20 = inited < 0;
LABEL_13:
      if ( !v20 )
        inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, PreviousMode, &v25);
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
            v20 = inited < 0;
            goto LABEL_13;
          }
          if ( (_DWORD)v29 == 1 )
          {
            if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
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
          if ( (_DWORD)v29 == 1 )
          {
            if ( (unsigned __int8)PiAuDoesClientHaveAccess(2u) )
            {
              InterfaceClass = CmCreateInstallerClass(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 (int)v13,
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
  v24 = a4;
  v21 = v25;
  v14 = PiCMReturnHandleResultData(inited, (__int64)v25, SDWORD2(v29), a3, v24, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v14 < 0 || inited < 0) && v21 )
    ObCloseHandle(v21, PreviousMode);
LABEL_19:
  if ( v13 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)v14;
}
