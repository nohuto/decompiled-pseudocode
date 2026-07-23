/*
 * XREFs of PiCMCreateDevice @ 0x140AB39A4
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140724058 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     _CmIsRootDevice @ 0x140928D54 (_CmIsRootDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     PpDeviceRegistration @ 0x1409BAF3C (PpDeviceRegistration.c)
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A56300 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x140A99BB8 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB4128 (PiCMCaptureCreateDeviceInputData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCreateDevice(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  void *v7; // r12
  wchar_t *v8; // rdi
  char v9; // r13
  int v10; // r14d
  _WORD *v11; // r15
  int DeviceInputData; // esi
  int inited; // ebx
  wchar_t *v14; // rsi
  char v15; // r13
  int v16; // r15d
  wchar_t *Pool2; // rax
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rax
  __int64 v27; // rdx
  int DeviceInstanceCsConfigFlags; // eax
  char v29; // dl
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // r8d
  int v34; // eax
  struct _KTHREAD *v35; // rax
  char PreviousMode; // bl
  __int64 v38; // rdx
  _BYTE v39[3]; // [rsp+59h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-85h] BYREF
  _WORD *v41; // [rsp+60h] [rbp-81h]
  _DWORD v42[4]; // [rsp+68h] [rbp-79h] BYREF
  HANDLE v43; // [rsp+78h] [rbp-69h] BYREF
  int v44; // [rsp+80h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-59h] BYREF
  size_t pcchLength; // [rsp+90h] [rbp-51h] BYREF
  int v47; // [rsp+98h] [rbp-49h] BYREF
  int v48; // [rsp+9Ch] [rbp-45h] BYREF
  int v49; // [rsp+A0h] [rbp-41h] BYREF
  PVOID P; // [rsp+A8h] [rbp-39h] BYREF
  UNICODE_STRING v51; // [rsp+B0h] [rbp-31h] BYREF
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+C0h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+D0h] [rbp-11h]
  __int64 v54; // [rsp+E0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+7h] BYREF

  v54 = 0LL;
  v40 = 0;
  v42[0] = 0;
  Handle = 0LL;
  v7 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v49 = 0;
  v9 = 0;
  v47 = 0;
  v10 = 0;
  v44 = 0;
  v11 = 0LL;
  v48 = 0;
  v43 = 0LL;
  P = 0LL;
  pcchLength = 0LL;
  v41 = 0LL;
  v51 = 0LL;
  *(_OWORD *)pszSrc = 0LL;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, pszSrc);
  if ( DeviceInputData < 0 )
    goto LABEL_84;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
LABEL_72:
    v33 = a4;
    goto LABEL_73;
  }
  v14 = (wchar_t *)pszSrc[1];
  if ( !pszSrc[1] || LODWORD(SourceString[0]) < 2 || !SourceString[1] || (unsigned int)v54 < 2 || !a3 || a4 < 0x14 )
  {
    inited = -1073741811;
    goto LABEL_72;
  }
  v15 = BYTE4(pszSrc[0]);
  if ( (HIDWORD(pszSrc[0]) & 0xFFFFFFF0) != 0 )
  {
    inited = -1073741811;
LABEL_12:
    v9 = 0;
    goto LABEL_72;
  }
  v16 = BYTE4(pszSrc[0]) & 2;
  if ( !CmIsRootDevice(SourceString[1]) )
  {
    inited = -1073741811;
LABEL_15:
    v11 = 0LL;
    goto LABEL_12;
  }
  inited = PiPnpRtlBeginOperation(&P);
  if ( inited < 0 )
    goto LABEL_15;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x34706E50u);
  v8 = Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    v11 = 0LL;
    v9 = 0;
    goto LABEL_72;
  }
  if ( (v15 & 4) == 0 )
  {
    inited = CmValidateDeviceName(v18, v14);
LABEL_24:
    if ( inited < 0 )
      goto LABEL_32;
    if ( (v15 & 4) == 0 )
    {
      inited = RtlStringCchCopyExW(v8, 0xC8uLL, v14, 0LL, 0LL, 0x800u);
      if ( inited < 0 )
      {
        v11 = 0LL;
        v7 = 0LL;
        v9 = 0;
        goto LABEL_72;
      }
    }
    inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v8, 16, 0, 131103, 0, (__int64)&v43, 0LL);
    if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
      goto LABEL_32;
    if ( v16 )
    {
      v11 = 0LL;
      if ( v43 )
      {
        inited = -1073741771;
LABEL_32:
        v7 = 0LL;
LABEL_33:
        v11 = 0LL;
        v9 = 0;
        goto LABEL_72;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v39[0] = 0;
      v9 = 1;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)v8, 131078, &Handle, v39, 0);
      if ( inited >= 0 )
      {
        if ( !v39[0] )
        {
          inited = -1073741771;
          ZwClose(Handle);
LABEL_37:
          v10 = pcchLength;
          v7 = v11;
          goto LABEL_72;
        }
        v47 = 1;
        inited = PnpCtxRegSetValue(v22, Handle, (__int64)L"Phantom", 4LL, (__int64)&v47, 4u);
        ZwClose(Handle);
        if ( inited >= 0 )
        {
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          v9 = 0;
          v7 = 0LL;
          v11 = 0LL;
          goto LABEL_98;
        }
      }
LABEL_105:
      v11 = v41;
      goto LABEL_37;
    }
    v11 = 0LL;
    if ( v43 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, v8) < 0 )
      {
        v7 = 0LL;
      }
      else
      {
        PpDevNodeLockTree(0);
        v23 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
        v7 = v23;
        if ( v23 )
          v24 = *(_QWORD *)(v23[39] + 40LL);
        else
          v24 = 0LL;
        PpDevNodeUnlockTree(0);
        if ( v24 )
        {
          if ( IopIsRootEnumeratedDeviceObjectActive((__int64)v7) )
          {
            inited = -1073741771;
            goto LABEL_33;
          }
        }
        else
        {
          PiPnpRtlEnsureObjectCached(v25, (__int64)v8);
        }
      }
    }
    else
    {
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v39[0] = 0;
      v9 = 1;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)v8, 131103, &v43, v39, 0);
      if ( inited < 0 )
        goto LABEL_105;
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v9 = 0;
      v10 = pcchLength;
      v7 = 0LL;
      if ( !v39[0] )
      {
        inited = -1073741771;
        goto LABEL_72;
      }
      v15 = BYTE4(pszSrc[0]);
    }
    inited = RtlInitUnicodeStringEx(&v51, v8);
    if ( inited >= 0 )
    {
      v40 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v8,
                  (__int64)v43,
                  0xBu,
                  (__int64)v42,
                  (__int64)&v44,
                  (__int64)&v40,
                  0) < 0 )
        v44 = 0;
      DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v51.Length, v27, &v48);
      v29 = v48;
      if ( DeviceInstanceCsConfigFlags < 0 )
        v29 = 0;
      if ( (v44 & 0x12) != 0 || (v29 & 2) != 0 )
      {
        inited = -1073741808;
        goto LABEL_71;
      }
      inited = PiInitializeDevice(&v51);
      if ( inited >= 0 )
      {
        v40 = 4;
        if ( (int)PnpCtxRegQueryValue(v30, v43, L"Phantom", v42, &v49, &v40) < 0 || v42[0] != 4 || (v32 = v49, v40 != 4) )
          v32 = 0;
        if ( v32 )
          PnpCtxRegDeleteValue(v31, v43, L"Phantom");
        if ( (v15 & 8) != 0 )
        {
          v40 = 512;
          v11 = (_WORD *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x34706E50u);
          if ( !v11 )
          {
            inited = -1073741670;
            goto LABEL_71;
          }
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v8,
                      (__int64)v43,
                      5u,
                      (__int64)v42,
                      (__int64)v11,
                      (__int64)&v40,
                      0) >= 0
            && v42[0] == 1
            && v40 <= 0x200 )
          {
            if ( *v11 )
            {
              inited = RtlInitUnicodeStringEx(&v51, v8);
              if ( inited < 0 )
                goto LABEL_71;
              LOBYTE(v38) = 1;
              inited = PpDeviceRegistration((__int64)&v51, v38, 0LL, 0);
              if ( inited < 0 )
                goto LABEL_71;
            }
          }
        }
        v9 = 0;
        goto LABEL_98;
      }
    }
LABEL_71:
    v9 = 0;
    goto LABEL_72;
  }
  v20 = PiCMGenerateDeviceInstance(v14, v16 != 0, Pool2, v19);
  inited = v20;
  if ( !v16 )
    goto LABEL_24;
  v7 = 0LL;
  v9 = 0;
  v11 = 0LL;
  if ( v20 < 0 )
    goto LABEL_72;
LABEL_98:
  inited = RtlStringCchLengthW(v8, 0xC8uLL, &pcchLength);
  if ( inited < 0 )
  {
    v10 = 0;
    goto LABEL_72;
  }
  v33 = a4;
  v10 = pcchLength + 1;
  if ( (unsigned __int64)a4 - 20 < 2 * (pcchLength + 1) )
    inited = -1073741789;
  if ( inited >= 0 )
  {
    v34 = PiCMReturnBufferResultData(inited, 2 * v10, 0, v8, 2 * v10, SHIDWORD(v54), a3, a4, a6);
    goto LABEL_74;
  }
LABEL_73:
  v34 = PiCMReturnBufferResultData(inited, 2 * v10, 0, 0LL, 0, SHIDWORD(v54), a3, v33, a6);
LABEL_74:
  DeviceInputData = v34;
  if ( v43 )
    ZwClose(v43);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x34706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x34706E50u);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v9 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
LABEL_84:
  v35 = KeGetCurrentThread();
  PreviousMode = v35->PreviousMode;
  if ( pszSrc[1] )
    PiControlFreeUserModeCallersBuffer(v35->PreviousMode, (void *)pszSrc[1]);
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString[1]);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)DeviceInputData;
}
