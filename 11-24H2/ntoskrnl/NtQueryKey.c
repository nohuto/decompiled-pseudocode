/*
 * XREFs of NtQueryKey @ 0x140849760
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072B158 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A912F4 (PiDevCfgConfigureDeviceLocation.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExFreeToLookasideListEx @ 0x1402CD350 (ExFreeToLookasideListEx.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E16C0 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     EtwpTraceRegistry @ 0x140870F40 (EtwpTraceRegistry.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtQueryKey(HANDLE Handle, unsigned int a2, unsigned __int64 a3, unsigned int a4, _DWORD *a5)
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
  NTSTATUS Key; // ebx
  _QWORD *v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v21; // r14
  int v22; // eax
  PVOID v23; // rcx
  __int64 v25; // r8
  char *TransientPoolWithQuota; // rax
  unsigned int v27; // eax
  PVOID v28; // rax
  __int64 (__fastcall *v29)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rcx
  unsigned int v31; // edx
  char v32; // cl
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v34; // rcx
  int v35; // [rsp+40h] [rbp-228h]
  unsigned __int8 v36; // [rsp+44h] [rbp-224h]
  char v37; // [rsp+45h] [rbp-223h]
  char v38; // [rsp+46h] [rbp-222h]
  char v39; // [rsp+47h] [rbp-221h] BYREF
  char v40; // [rsp+48h] [rbp-220h]
  unsigned int v41; // [rsp+50h] [rbp-218h]
  PVOID v42; // [rsp+58h] [rbp-210h] BYREF
  unsigned int v43; // [rsp+60h] [rbp-208h] BYREF
  PVOID Object; // [rsp+68h] [rbp-200h] BYREF
  PVOID v45; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-1F0h]
  PVOID v47; // [rsp+80h] [rbp-1E8h] BYREF
  _QWORD v48[2]; // [rsp+88h] [rbp-1E0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-1D0h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-1C0h] BYREF
  PVOID v52; // [rsp+B0h] [rbp-1B8h] BYREF
  NTSTATUS v53; // [rsp+B8h] [rbp-1B0h]
  int v54; // [rsp+BCh] [rbp-1ACh]
  __int128 *v55; // [rsp+C0h] [rbp-1A8h]
  NTSTATUS v56; // [rsp+C8h] [rbp-1A0h]
  __int128 v57; // [rsp+CCh] [rbp-19Ch]
  __int64 v58; // [rsp+DCh] [rbp-18Ch]
  int v59; // [rsp+E4h] [rbp-184h]
  __int128 v60; // [rsp+F0h] [rbp-178h] BYREF
  __int128 v61; // [rsp+100h] [rbp-168h]
  __int128 v62; // [rsp+110h] [rbp-158h]
  __int128 v63; // [rsp+120h] [rbp-148h]
  _KAFFINITY_EX v64; // [rsp+130h] [rbp-138h] BYREF

  v5 = a4;
  v42 = a5;
  v41 = a2;
  memset(&v64, 0, 24);
  HandleInformation = 0LL;
  LODWORD(Object) = 0;
  v43 = 0;
  memset((char *)&v64.StaticBitmap[5] + 1, 0, 71);
  memset(&v64.StaticBitmap[15], 0, 32);
  v46 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v64.StaticBitmap[15], 0x20000u);
  v37 = 0;
  v38 = 0;
  v45 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  memset(&v64.StaticBitmap[3], 0, 17);
  v48[1] = v48;
  v48[0] = v48;
  CmpInitializeThreadInfo(&v64);
  v47 = 0LL;
  v40 = CmpAcquireShutdownRundown(v10, v9, v11, v12);
  if ( !v40 )
  {
    Key = -1073741431;
    goto LABEL_34;
  }
  if ( a2 > 8 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Handle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v42 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v42, 0LL) >= 0 )
        {
          v46 = *((_QWORD *)v42 + 1);
          ObfDereferenceObject(v42);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_34;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  v36 = v13;
  if ( v13 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v14 = a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v5 + a3 - 1;
      if ( a3 > v15 || (v16 = 0x7FFFFFFF0000LL, v15 >= 0x7FFFFFFF0000LL) )
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
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v16 = (__int64)a5;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v13 = 1;
  }
  Object = 0LL;
  Key = ObReferenceObjectByHandle(
          Handle,
          ((a2 - 3) & 0xFFFFFFFB) != 0,
          (POBJECT_TYPE)CmKeyObjectType,
          v13,
          &Object,
          &HandleInformation);
  v19 = Object;
  v45 = Object;
  v35 = Key;
  if ( Key < 0 )
    goto LABEL_35;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( a2 != 4 )
    {
      Key = -1073741816;
      goto LABEL_34;
    }
    *a5 = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v35 = -1073741789;
      goto LABEL_35;
    }
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(v19[1] + 96LL);
    goto LABEL_33;
  }
  if ( CmpTraceRoutine )
    v46 = *((_QWORD *)Object + 1);
  if ( ((a2 - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_34;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v38 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v21 = (unsigned __int16 *)Object;
    *(_QWORD *)&v60 = Object;
    DWORD2(v60) = a2;
    *(_QWORD *)&v61 = a3;
    DWORD2(v61) = v5;
    *(_QWORD *)&v62 = v42;
    v22 = CmpCallCallBacksEx(7u, (__int64)&v60, 0LL, 1, 0x16u, (__int64)Object, (__int64)v48);
    Key = v22;
    v35 = v22;
    if ( v22 >= 0 )
    {
      v37 = 1;
      goto LABEL_29;
    }
    if ( v22 != -1073740541 )
      goto LABEL_35;
LABEL_33:
    Key = 0;
LABEL_34:
    v35 = Key;
    goto LABEL_35;
  }
  v21 = (unsigned __int16 *)Object;
LABEL_29:
  if ( a2 == 7 )
  {
    *(_DWORD *)v42 = 4;
    if ( (unsigned int)v5 < 4 )
    {
      Key = -1073741789;
      v35 = -1073741789;
      goto LABEL_35;
    }
    *(_DWORD *)a3 = v21[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&v45, v36, ((a2 - 3) & 0xFFFFFFFB) != 0, &v47);
  v35 = Key;
  if ( Key >= 0 )
  {
    v64.StaticBitmap[3] = a3;
    if ( !(_DWORD)v5 )
    {
      v64.StaticBitmap[4] = 0LL;
      goto LABEL_64;
    }
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !v36 && a3 > 0x7FFFFFFEFFFFLL )
      goto LABEL_77;
    if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
    {
      v50 = 1LL;
      v64.StaticBitmap[23] = (unsigned __int64)&v50;
      v64.StaticBitmap[24] = 8LL;
      v39 = 2;
      v64.StaticBitmap[25] = (unsigned __int64)&v39;
      v64.StaticBitmap[26] = 1LL;
      v31 = v5;
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v32 = -1;
        do
        {
          ++v32;
          v31 >>= 1;
        }
        while ( v31 );
        v31 = 1 << (v32 + 1);
      }
      v51 = v31;
      v64.StaticBitmap[27] = (unsigned __int64)&v51;
      v64.StaticBitmap[28] = 8LL;
      tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)word_1400547DA, v25, 5u, (__int64)&v64.StaticBitmap[19]);
    }
    if ( v5 > 0x40 )
    {
      if ( v5 <= 0x1000 )
      {
        v28 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
        a3 = (unsigned __int64)v28;
        if ( v28 )
        {
          memset_0(v28, 0, v5);
          LOBYTE(v64.StaticBitmap[5]) |= 1u;
LABEL_77:
          v64.StaticBitmap[4] = a3;
          goto LABEL_64;
        }
      }
      TransientPoolWithQuota = (char *)CmpAllocateTransientPoolWithQuota();
      if ( !TransientPoolWithQuota )
      {
        Key = -1073741670;
LABEL_65:
        v35 = Key;
        if ( Key >= 0 )
        {
          Key = CmQueryKey((_DWORD)v45, (_DWORD)v47, v5, (__int64)&v43);
          v35 = Key;
          if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
          {
            v27 = v43;
            *(_DWORD *)v42 = v43;
            if ( Key != -1073741789 )
            {
              if ( (unsigned int)v5 >= v27 )
                LODWORD(v5) = v27;
              if ( v64.StaticBitmap[3] != v64.StaticBitmap[4] )
                memmove((void *)v64.StaticBitmap[3], (const void *)v64.StaticBitmap[4], (unsigned int)v5);
            }
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      memset_0((char *)&v64.StaticBitmap[5] + 1, 0, v5);
      TransientPoolWithQuota = (char *)&v64.StaticBitmap[5] + 1;
    }
    v64.StaticBitmap[4] = (unsigned __int64)TransientPoolWithQuota;
LABEL_64:
    Key = 0;
    goto LABEL_65;
  }
LABEL_35:
  if ( v47 )
    ObfDereferenceObject(v47);
  if ( v37 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v48[0] != v48 )
    {
      v54 = 0;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0;
      v52 = v45;
      v53 = Key;
      v56 = Key;
      v55 = &v60;
      CmpCallCallBacksEx(0x16u, (__int64)&v52, 0LL, 0, 0x16u, (__int64)v45, (__int64)v48);
      Key = v56;
    }
    v35 = Key;
  }
  if ( v38 )
  {
    KeLeaveCriticalRegionThread();
    Key = v35;
  }
  v23 = v45;
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( v64.StaticBitmap[4]
    && v64.StaticBitmap[4] != v64.StaticBitmap[3]
    && (_KAFFINITY_EX *)v64.StaticBitmap[4] != (_KAFFINITY_EX *)((char *)&v64.StaticBitmap[5] + 1) )
  {
    if ( (v64.StaticBitmap[5] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v64.StaticBitmap[4]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v64.StaticBitmap[4]);
  }
  if ( CmpTraceRoutine )
  {
    v29 = EtwpTraceRegistry;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
    {
      LOBYTE(v29) = 13;
      EtwpTraceRegistry((_DWORD)v29, (unsigned int)&v64.StaticBitmap[15], Key, a2, v46, 0LL);
    }
    else
    {
      v34 = v46;
      LOBYTE(v34) = 13;
      guard_dispatch_icall_no_overrides(v34, &v64.StaticBitmap[15], (unsigned int)Key, a2);
    }
  }
  if ( v40 )
    CmpReleaseShutdownRundown(v23);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v64);
  return (unsigned int)Key;
}
