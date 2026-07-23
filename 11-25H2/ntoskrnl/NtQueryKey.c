/*
 * XREFs of NtQueryKey @ 0x14084D9C0
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14071F1D8 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8C1F4 (PiDevCfgConfigureDeviceLocation.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     ExAllocateFromLookasideListEx @ 0x1403DCD60 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  size_t v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  KPROCESSOR_MODE v13; // cl
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  BOOL v18; // r13d
  NTSTATUS Key; // ebx
  _QWORD *v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v22; // r14
  int v23; // eax
  PVOID v24; // rcx
  __int64 v26; // r8
  _BYTE *TransientPoolWithQuota; // rax
  unsigned int v28; // eax
  PVOID v29; // rax
  __int64 (__fastcall *v30)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rcx
  unsigned int v32; // edx
  char v33; // cl
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v35; // rcx
  int v36; // [rsp+40h] [rbp-218h]
  char v37; // [rsp+44h] [rbp-214h]
  char v38; // [rsp+45h] [rbp-213h]
  char v39; // [rsp+46h] [rbp-212h]
  char v40; // [rsp+47h] [rbp-211h] BYREF
  char v41; // [rsp+48h] [rbp-210h]
  KEY_INFORMATION_CLASS v42; // [rsp+50h] [rbp-208h]
  PVOID v43; // [rsp+58h] [rbp-200h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1F0h] BYREF
  PVOID v46; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v47; // [rsp+78h] [rbp-1E0h]
  PVOID v48; // [rsp+80h] [rbp-1D8h] BYREF
  _QWORD v49[2]; // [rsp+88h] [rbp-1D0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-1B0h] BYREF
  _BYTE v53[272]; // [rsp+B0h] [rbp-1A8h] BYREF
  _BYTE v54[32]; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 *v55; // [rsp+1E0h] [rbp-78h]
  __int64 v56; // [rsp+1E8h] [rbp-70h]
  char *v57; // [rsp+1F0h] [rbp-68h]
  __int64 v58; // [rsp+1F8h] [rbp-60h]
  __int64 *v59; // [rsp+200h] [rbp-58h]
  __int64 v60; // [rsp+208h] [rbp-50h]

  v5 = Length;
  v43 = ResultLength;
  v42 = KeyInformationClass;
  *(_OWORD *)v53 = 0LL;
  HandleInformation = 0LL;
  LODWORD(Object) = 0;
  v44 = 0;
  memset(&v53[161], 0, 71);
  memset(&v53[240], 0, 32);
  v47 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v53[240], 0x20000u);
  v38 = 0;
  v39 = 0;
  v46 = 0LL;
  memset(&v53[80], 0, 81);
  v49[1] = v49;
  v49[0] = v49;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v53);
  v48 = 0LL;
  v41 = CmpAcquireShutdownRundown(v10, v9, v11, v12);
  if ( !v41 )
  {
    Key = -1073741431;
    goto LABEL_34;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v43 = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v43, 0LL) >= 0 )
        {
          v47 = *((_QWORD *)v43 + 1);
          ObfDereferenceObject(v43);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_34;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  v37 = v13;
  if ( v13 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v14 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (unsigned __int64)KeyInformation + v5 - 1;
      if ( (unsigned __int64)KeyInformation > v15 || (v16 = 0x7FFFFFFF0000LL, v15 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v17 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v14 = *(_BYTE *)v14;
        v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v14 != v17 );
    }
    else
    {
      v16 = 0x7FFFFFFF0000LL;
    }
    if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
      v16 = (__int64)ResultLength;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v13 = 1;
  }
  v18 = ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0;
  Object = 0LL;
  Key = ObReferenceObjectByHandle(KeyHandle, v18, (POBJECT_TYPE)CmKeyObjectType, v13, &Object, &HandleInformation);
  v20 = Object;
  v46 = Object;
  v36 = Key;
  if ( Key < 0 )
    goto LABEL_35;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( KeyInformationClass != KeyCachedInformation )
    {
      Key = -1073741816;
      goto LABEL_34;
    }
    *ResultLength = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v36 = -1073741789;
      goto LABEL_35;
    }
    *(_OWORD *)KeyInformation = 0LL;
    *((_OWORD *)KeyInformation + 1) = 0LL;
    *((_QWORD *)KeyInformation + 4) = 0LL;
    *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v20[1] + 96LL);
    goto LABEL_33;
  }
  if ( CmpTraceRoutine )
    v47 = *((_QWORD *)Object + 1);
  if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_34;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v39 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v22 = (unsigned __int16 *)Object;
    *(_QWORD *)&v53[80] = Object;
    *(_DWORD *)&v53[88] = KeyInformationClass;
    *(_QWORD *)&v53[96] = KeyInformation;
    *(_DWORD *)&v53[104] = v5;
    *(_QWORD *)&v53[112] = v43;
    v23 = CmpCallCallBacksEx(7u, (__int64)&v53[80], 0LL, 1, 0x16u, (__int64)Object, (__int64)v49);
    Key = v23;
    v36 = v23;
    if ( v23 >= 0 )
    {
      v38 = 1;
      goto LABEL_29;
    }
    if ( v23 != -1073740541 )
      goto LABEL_35;
LABEL_33:
    Key = 0;
LABEL_34:
    v36 = Key;
    goto LABEL_35;
  }
  v22 = (unsigned __int16 *)Object;
LABEL_29:
  if ( KeyInformationClass == KeyHandleTagsInformation )
  {
    *(_DWORD *)v43 = 4;
    if ( (unsigned int)v5 < 4 )
    {
      Key = -1073741789;
      v36 = -1073741789;
      goto LABEL_35;
    }
    *(_DWORD *)KeyInformation = v22[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&v46, v37, v18, &v48);
  v36 = Key;
  if ( Key >= 0 )
  {
    *(_QWORD *)&v53[144] = KeyInformation;
    if ( !(_DWORD)v5 )
    {
      *(_QWORD *)&v53[152] = 0LL;
      goto LABEL_64;
    }
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !v37 && (unsigned __int64)KeyInformation > 0x7FFFFFFEFFFFLL )
      goto LABEL_77;
    if ( (unsigned int)dword_140E09E08 > 5 && (qword_140E09E18 & 4) != 0 && (qword_140E09E20 & 4) == qword_140E09E20 )
    {
      v51 = 1LL;
      v55 = &v51;
      v56 = 8LL;
      v40 = 2;
      v57 = &v40;
      v58 = 1LL;
      v32 = v5;
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v33 = -1;
        do
        {
          ++v33;
          v32 >>= 1;
        }
        while ( v32 );
        v32 = 1 << (v33 + 1);
      }
      v52 = v32;
      v59 = &v52;
      v60 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09E08, (unsigned __int8 *)&unk_1400533B0, v26, 5u, (__int64)v54);
    }
    if ( v5 > 0x40 )
    {
      if ( v5 <= 0x1000 )
      {
        v29 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
        KeyInformation = v29;
        if ( v29 )
        {
          memset_0(v29, 0, v5);
          v53[160] |= 1u;
LABEL_77:
          *(_QWORD *)&v53[152] = KeyInformation;
          goto LABEL_64;
        }
      }
      TransientPoolWithQuota = (_BYTE *)CmpAllocateTransientPoolWithQuota();
      if ( !TransientPoolWithQuota )
      {
        Key = -1073741670;
LABEL_65:
        v36 = Key;
        if ( Key >= 0 )
        {
          Key = CmQueryKey((_DWORD)v46, (_DWORD)v48, v5, (__int64)&v44);
          v36 = Key;
          if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
          {
            v28 = v44;
            *(_DWORD *)v43 = v44;
            if ( Key != -1073741789 )
            {
              if ( (unsigned int)v5 >= v28 )
                LODWORD(v5) = v28;
              if ( *(_QWORD *)&v53[144] != *(_QWORD *)&v53[152] )
                memmove(*(void **)&v53[144], *(const void **)&v53[152], (unsigned int)v5);
            }
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      memset_0(&v53[161], 0, v5);
      TransientPoolWithQuota = &v53[161];
    }
    *(_QWORD *)&v53[152] = TransientPoolWithQuota;
LABEL_64:
    Key = 0;
    goto LABEL_65;
  }
LABEL_35:
  if ( v48 )
    ObfDereferenceObject(v48);
  if ( v38 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v49[0] != v49 )
    {
      *(_DWORD *)&v53[28] = 0;
      memset(&v53[44], 0, 28);
      *(_QWORD *)&v53[16] = v46;
      *(_DWORD *)&v53[24] = Key;
      *(_DWORD *)&v53[40] = Key;
      *(_QWORD *)&v53[32] = &v53[80];
      CmpCallCallBacksEx(0x16u, (__int64)&v53[16], 0LL, 0, 0x16u, (__int64)v46, (__int64)v49);
      Key = *(_DWORD *)&v53[40];
    }
    v36 = Key;
  }
  if ( v39 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Key = v36;
  }
  v24 = v46;
  if ( v46 )
    ObfDereferenceObject(v46);
  if ( *(_QWORD *)&v53[152] && *(_QWORD *)&v53[152] != *(_QWORD *)&v53[144] && *(_BYTE **)&v53[152] != &v53[161] )
  {
    if ( (v53[160] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, *(PVOID *)&v53[152]);
    else
      CmSiFreeMemory(*(PPRIVILEGE_SET *)&v53[152]);
  }
  if ( CmpTraceRoutine )
  {
    v30 = EtwpTraceRegistry;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
    {
      LOBYTE(v30) = 13;
      EtwpTraceRegistry((_DWORD)v30, (unsigned int)&v53[240], Key, KeyInformationClass, v47, 0LL);
    }
    else
    {
      v35 = v47;
      LOBYTE(v35) = 13;
      guard_dispatch_icall_no_overrides(v35);
    }
  }
  if ( v41 )
    CmpReleaseShutdownRundown(v24);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v53);
  return Key;
}
