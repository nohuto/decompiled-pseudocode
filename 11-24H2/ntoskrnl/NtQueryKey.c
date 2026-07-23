/*
 * XREFs of NtQueryKey @ 0x140845A20
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B7800 (ExpWatchLicenseInfoWork.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8DA98 (PiDevCfgConfigureDeviceLocation.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocateFromLookasideListEx @ 0x1403C9D30 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
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
  int Key; // ebx
  _QWORD *v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v21; // r14
  int v22; // eax
  PVOID v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  char *TransientPoolWithQuota; // rax
  unsigned int v28; // eax
  PVOID v29; // rax
  __int64 (__fastcall *v30)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rcx
  unsigned int v32; // edx
  char v33; // cl
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v35; // rcx
  int v36; // [rsp+40h] [rbp-228h]
  unsigned __int8 v37; // [rsp+44h] [rbp-224h]
  char v38; // [rsp+45h] [rbp-223h]
  char v39; // [rsp+46h] [rbp-222h]
  char v40; // [rsp+47h] [rbp-221h] BYREF
  char v41; // [rsp+48h] [rbp-220h]
  KEY_INFORMATION_CLASS v42; // [rsp+50h] [rbp-218h]
  PVOID v43; // [rsp+58h] [rbp-210h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-208h] BYREF
  PVOID Object; // [rsp+68h] [rbp-200h] BYREF
  PVOID v46; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v47; // [rsp+78h] [rbp-1F0h]
  PVOID v48; // [rsp+80h] [rbp-1E8h] BYREF
  _QWORD v49[2]; // [rsp+88h] [rbp-1E0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-1D0h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-1C0h] BYREF
  PVOID v53; // [rsp+B0h] [rbp-1B8h] BYREF
  int v54; // [rsp+B8h] [rbp-1B0h]
  int v55; // [rsp+BCh] [rbp-1ACh]
  __int128 *v56; // [rsp+C0h] [rbp-1A8h]
  int v57; // [rsp+C8h] [rbp-1A0h]
  __int128 v58; // [rsp+CCh] [rbp-19Ch]
  __int64 v59; // [rsp+DCh] [rbp-18Ch]
  int v60; // [rsp+E4h] [rbp-184h]
  __int128 v61; // [rsp+F0h] [rbp-178h] BYREF
  __int128 v62; // [rsp+100h] [rbp-168h]
  __int128 v63; // [rsp+110h] [rbp-158h]
  __int128 v64; // [rsp+120h] [rbp-148h]
  _KAFFINITY_EX v65; // [rsp+130h] [rbp-138h] BYREF

  v5 = Length;
  v43 = ResultLength;
  v42 = KeyInformationClass;
  memset(&v65, 0, 24);
  HandleInformation = 0LL;
  LODWORD(Object) = 0;
  v44 = 0;
  memset((char *)&v65.StaticBitmap[5] + 1, 0, 71);
  memset(&v65.StaticBitmap[15], 0, 32);
  v47 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v65.StaticBitmap[15], 0x20000u);
  v38 = 0;
  v39 = 0;
  v46 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  memset(&v65.StaticBitmap[3], 0, 17);
  v49[1] = v49;
  v49[0] = v49;
  CmpInitializeThreadInfo(&v65);
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
  Object = 0LL;
  Key = ObReferenceObjectByHandle(
          KeyHandle,
          ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0,
          (POBJECT_TYPE)CmKeyObjectType,
          v13,
          &Object,
          &HandleInformation);
  v19 = Object;
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
    *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v19[1] + 96LL);
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
    v21 = (unsigned __int16 *)Object;
    *(_QWORD *)&v61 = Object;
    DWORD2(v61) = KeyInformationClass;
    *(_QWORD *)&v62 = KeyInformation;
    DWORD2(v62) = v5;
    *(_QWORD *)&v63 = v43;
    v22 = CmpCallCallBacksEx(7u, (__int64)&v61, 0LL, 1, 0x16u, (__int64)Object, (__int64)v49);
    Key = v22;
    v36 = v22;
    if ( v22 >= 0 )
    {
      v38 = 1;
      goto LABEL_29;
    }
    if ( v22 != -1073740541 )
      goto LABEL_35;
LABEL_33:
    Key = 0;
LABEL_34:
    v36 = Key;
    goto LABEL_35;
  }
  v21 = (unsigned __int16 *)Object;
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
    *(_DWORD *)KeyInformation = v21[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&v46, v37, ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0, &v48);
  v36 = Key;
  if ( Key >= 0 )
  {
    v65.StaticBitmap[3] = (unsigned __int64)KeyInformation;
    if ( !(_DWORD)v5 )
    {
      v65.StaticBitmap[4] = 0LL;
      goto LABEL_64;
    }
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !v37 && (unsigned __int64)KeyInformation > 0x7FFFFFFEFFFFLL )
      goto LABEL_77;
    if ( (unsigned int)dword_140E09F58 > 5 && (qword_140E09F68 & 4) != 0 && (qword_140E09F70 & 4) == qword_140E09F70 )
    {
      v51 = 1LL;
      v65.StaticBitmap[23] = (unsigned __int64)&v51;
      v65.StaticBitmap[24] = 8LL;
      v40 = 2;
      v65.StaticBitmap[25] = (unsigned __int64)&v40;
      v65.StaticBitmap[26] = 1LL;
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
      v65.StaticBitmap[27] = (unsigned __int64)&v52;
      v65.StaticBitmap[28] = 8LL;
      tlgWriteAgg(
        (__int64)&dword_140E09F58,
        (unsigned __int8 *)&dword_1400552D4,
        v26,
        5u,
        (__int64)&v65.StaticBitmap[19]);
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
          LOBYTE(v65.StaticBitmap[5]) |= 1u;
LABEL_77:
          v65.StaticBitmap[4] = (unsigned __int64)KeyInformation;
          goto LABEL_64;
        }
      }
      TransientPoolWithQuota = (char *)CmpAllocateTransientPoolWithQuota(v25, v5, 0x42424D43u);
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
              if ( v65.StaticBitmap[3] != v65.StaticBitmap[4] )
                memmove((void *)v65.StaticBitmap[3], (const void *)v65.StaticBitmap[4], (unsigned int)v5);
            }
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      memset_0((char *)&v65.StaticBitmap[5] + 1, 0, v5);
      TransientPoolWithQuota = (char *)&v65.StaticBitmap[5] + 1;
    }
    v65.StaticBitmap[4] = (unsigned __int64)TransientPoolWithQuota;
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
      v55 = 0;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0;
      v53 = v46;
      v54 = Key;
      v57 = Key;
      v56 = &v61;
      CmpCallCallBacksEx(0x16u, (__int64)&v53, 0LL, 0, 0x16u, (__int64)v46, (__int64)v49);
      Key = v57;
    }
    v36 = Key;
  }
  if ( v39 )
  {
    KeLeaveCriticalRegionThread();
    Key = v36;
  }
  v23 = v46;
  if ( v46 )
    ObfDereferenceObject(v46);
  if ( v65.StaticBitmap[4]
    && v65.StaticBitmap[4] != v65.StaticBitmap[3]
    && (_KAFFINITY_EX *)v65.StaticBitmap[4] != (_KAFFINITY_EX *)((char *)&v65.StaticBitmap[5] + 1) )
  {
    if ( (v65.StaticBitmap[5] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v65.StaticBitmap[4]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v65.StaticBitmap[4]);
  }
  if ( CmpTraceRoutine )
  {
    v30 = EtwpTraceRegistry;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
    {
      LOBYTE(v30) = 13;
      EtwpTraceRegistry((_DWORD)v30, (unsigned int)&v65.StaticBitmap[15], Key, KeyInformationClass, v47, 0LL);
    }
    else
    {
      v35 = v47;
      LOBYTE(v35) = 13;
      guard_dispatch_icall_no_overrides(v35, &v65.StaticBitmap[15]);
    }
  }
  if ( v41 )
    CmpReleaseShutdownRundown(v23);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v65);
  return Key;
}
