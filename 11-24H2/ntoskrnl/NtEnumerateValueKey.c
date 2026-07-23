/*
 * XREFs of NtEnumerateValueKey @ 0x1408E39F0
 * Callers:
 *     RtlInitFunctionalityCache @ 0x14077CE68 (RtlInitFunctionalityCache.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
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
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpQueryKeyValueData @ 0x14087A180 (CmpQueryKeyValueData.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408E3094 (CmEnumerateValueFromLayeredKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

NTSTATUS __cdecl NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // r13d
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r8d
  char v16; // r14
  unsigned __int8 v17; // r14
  int v18; // r15d
  int KeyValueData; // ebx
  ULONG v20; // r13d
  __int64 v21; // rcx
  PVOID v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  _BYTE *TransientPoolWithQuota; // rax
  void *v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rcx
  ULONG_PTR v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // rax
  ULONG_PTR v35; // rdx
  ULONG_PTR v36; // rcx
  __int64 CellFlat; // rax
  __int64 v38; // r15
  unsigned int v39; // ebx
  ULONG_PTR v40; // rcx
  __int64 CellPaged; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct _KAPC_STATE *p_ApcState; // rcx
  unsigned int v45; // eax
  __int64 v46; // r15
  PVOID v47; // rcx
  PVOID v49; // rax
  void *v50; // rdi
  unsigned int v52; // edx
  ULONG v53; // eax
  char v54; // cl
  void (__fastcall *v55)(unsigned __int8, __int64, int, int, __int64, __int64); // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v57; // [rsp+50h] [rbp-298h]
  char v58; // [rsp+51h] [rbp-297h]
  char v59; // [rsp+52h] [rbp-296h]
  char v60; // [rsp+53h] [rbp-295h]
  char v62; // [rsp+58h] [rbp-290h] BYREF
  PVOID v63; // [rsp+60h] [rbp-288h] BYREF
  int v64; // [rsp+68h] [rbp-280h]
  unsigned int v65[3]; // [rsp+6Ch] [rbp-27Ch] BYREF
  __int64 v66; // [rsp+78h] [rbp-270h] BYREF
  PVOID v67; // [rsp+80h] [rbp-268h] BYREF
  ULONG v68; // [rsp+88h] [rbp-260h]
  __int64 v69; // [rsp+90h] [rbp-258h] BYREF
  PVOID Object; // [rsp+98h] [rbp-250h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-248h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-240h]
  _QWORD v73[2]; // [rsp+B0h] [rbp-238h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-228h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-220h] BYREF
  size_t Size; // [rsp+D0h] [rbp-218h]
  _QWORD *v77; // [rsp+D8h] [rbp-210h] BYREF
  int v78; // [rsp+E0h] [rbp-208h]
  int v79; // [rsp+E4h] [rbp-204h]
  PVOID *v80; // [rsp+E8h] [rbp-200h]
  int v81; // [rsp+F0h] [rbp-1F8h]
  __int128 v82; // [rsp+F4h] [rbp-1F4h]
  __int64 v83; // [rsp+104h] [rbp-1E4h]
  int v84; // [rsp+10Ch] [rbp-1DCh]
  __int128 v85; // [rsp+110h] [rbp-1D8h] BYREF
  __int64 v86; // [rsp+120h] [rbp-1C8h]
  PVOID v87; // [rsp+130h] [rbp-1B8h] BYREF
  ULONG v88; // [rsp+138h] [rbp-1B0h]
  int v89; // [rsp+13Ch] [rbp-1ACh]
  PVOID v90; // [rsp+140h] [rbp-1A8h]
  ULONG v91; // [rsp+148h] [rbp-1A0h]
  PVOID v92; // [rsp+150h] [rbp-198h]
  void *Src[2]; // [rsp+170h] [rbp-178h]
  char v94; // [rsp+180h] [rbp-168h]
  _BYTE v95[79]; // [rsp+181h] [rbp-167h] BYREF
  _OWORD v96[2]; // [rsp+1D0h] [rbp-118h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1F0h] [rbp-F8h] BYREF
  struct _KAPC_STATE v98; // [rsp+220h] [rbp-C8h] BYREF
  _BYTE v99[32]; // [rsp+250h] [rbp-98h] BYREF
  __int64 *v100; // [rsp+270h] [rbp-78h]
  __int64 v101; // [rsp+278h] [rbp-70h]
  char *v102; // [rsp+280h] [rbp-68h]
  __int64 v103; // [rsp+288h] [rbp-60h]
  __int64 *v104; // [rsp+290h] [rbp-58h]
  __int64 v105; // [rsp+298h] [rbp-50h]

  v64 = KeyValueInformationClass;
  v8 = Index;
  v67 = ResultLength;
  v68 = Index;
  v85 = 0LL;
  v86 = 0LL;
  LODWORD(v66) = 0;
  memset(&v98, 0, sizeof(v98));
  memset_0(v95, 0, 0x47uLL);
  memset(v96, 0, sizeof(v96));
  *(_QWORD *)&v65[1] = 0LL;
  v72 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v96, 0x20000u);
  v59 = 0;
  v60 = 0;
  memset_0(&v87, 0, 0x40uLL);
  v10 = 0LL;
  v63 = 0LL;
  v65[0] = 0;
  *(_OWORD *)Src = 0LL;
  v94 = 0;
  v73[1] = v73;
  v73[0] = v73;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v85);
  Object = 0LL;
  v16 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
  v57 = v16;
  if ( !v16 )
  {
    KeyValueData = -1073741431;
LABEL_89:
    v46 = 0LL;
    goto LABEL_62;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( CmpTraceRoutine && KeyHandle )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v67 = 0LL;
      if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v67, 0LL) >= 0 )
      {
        v46 = *((_QWORD *)v67 + 1);
        ObfDereferenceObject(v67);
        v10 = v63;
LABEL_122:
        KeyValueData = -1073741811;
        goto LABEL_62;
      }
      v10 = v63;
    }
    v46 = 0LL;
    goto LABEL_122;
  }
  v17 = KeGetCurrentThread()->PreviousMode;
  v18 = 1;
  KeyValueData = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v15, v17, (__int64)&v63, 0LL);
  if ( KeyValueData < 0 )
  {
    v10 = v63;
    v16 = v57;
    goto LABEL_89;
  }
  if ( CmpTraceRoutine && v63 )
  {
    *(_QWORD *)&v65[1] = *((_QWORD *)v63 + 1);
    v72 = *(_QWORD *)&v65[1];
  }
  if ( v17 == 1 )
  {
    v20 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = 0x7FFFFFFF0000LL;
    }
    else
    {
      v21 = 0x7FFFFFFF0000LL;
    }
    v22 = v67;
    if ( (unsigned __int64)v67 < 0x7FFFFFFF0000LL )
      v21 = (__int64)v67;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  else
  {
    v20 = Length;
    v22 = v67;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v60 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
LABEL_20:
    KeyValueData = CmKeyBodyRemapToVirtualForEnum(&v63, v17, 1LL, &Object);
    if ( KeyValueData < 0 )
      goto LABEL_107;
    Src[0] = KeyValueInformation;
    if ( !v20 )
    {
      Src[1] = 0LL;
      goto LABEL_28;
    }
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !v17 && (unsigned __int64)KeyValueInformation > 0x7FFFFFFEFFFFLL )
    {
      Src[1] = KeyValueInformation;
      goto LABEL_28;
    }
    if ( (unsigned int)dword_140E09F58 > 5 && (qword_140E09F68 & 4) != 0 && (qword_140E09F70 & 4) == qword_140E09F70 )
    {
      v74 = 1LL;
      v100 = &v74;
      v101 = 8LL;
      v62 = 1;
      v102 = &v62;
      v103 = 1LL;
      v52 = v20;
      if ( ((v20 - 1) & v20) != 0 )
      {
        v53 = v20;
        v54 = -1;
        do
        {
          ++v54;
          v53 >>= 1;
        }
        while ( v53 );
        v52 = 1 << (v54 + 1);
      }
      v75 = v52;
      v104 = &v75;
      v105 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)&dword_1400552D4, v26, 5u, (__int64)v99);
    }
    if ( v20 > 0x40uLL )
    {
      if ( v20 <= 0x1000uLL )
      {
        v49 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
        v50 = v49;
        if ( v49 )
        {
          memset_0(v49, 0, v20);
          v94 |= 1u;
          Src[1] = v50;
          goto LABEL_28;
        }
      }
      TransientPoolWithQuota = (_BYTE *)CmpAllocateTransientPoolWithQuota(v25, v20, 0x42424D43u);
      if ( !TransientPoolWithQuota )
      {
        KeyValueData = -1073741670;
LABEL_29:
        if ( KeyValueData >= 0 )
        {
          if ( Object )
          {
            CmpAttachToRegistryProcess(&v98);
            v10 = v63;
            KeyValueData = CmEnumerateValueKeyFromMergedView(
                             (int)v63,
                             (int)Object,
                             0,
                             Index,
                             v64,
                             (size_t)Src[1],
                             v20,
                             (__int64)v65,
                             0LL);
            p_ApcState = &v98;
LABEL_55:
            CmpDetachFromRegistryProcess(p_ApcState);
            if ( KeyValueData >= 0 || KeyValueData == -2147483643 || KeyValueData == -1073741789 )
            {
              v45 = v65[0];
              *(_DWORD *)v67 = v65[0];
              if ( KeyValueData != -1073741789 )
              {
                if ( v20 >= v45 )
                  v20 = v45;
                if ( Src[0] != Src[1] )
                  memmove(Src[0], Src[1], v20);
              }
              v16 = v57;
              v8 = Index;
              v46 = *(_QWORD *)&v65[1];
            }
            else
            {
              v16 = v57;
              v8 = Index;
              v46 = *(_QWORD *)&v65[1];
            }
            goto LABEL_62;
          }
          v28 = Src[1];
          Size = (size_t)Src[1];
          v69 = 0LL;
          memset(&ApcState, 0, sizeof(ApcState));
          v66 = 0LL;
          v71 = 0LL;
          HvpGetCellContextInitialize(&v69);
          v29 = 0LL;
          HvpGetCellContextInitialize(&v66);
          v58 = 0;
          CmpAttachToRegistryProcess(&ApcState);
          CmpLockRegistry(v30);
          v10 = v63;
          v31 = *((_QWORD *)v63 + 1);
          if ( *(_WORD *)(v31 + 66) )
          {
            KeyValueData = CmEnumerateValueFromLayeredKey((__int64)v63, Index, v64, (size_t)v28, v20, (__int64)v65);
            v38 = 0LL;
            goto LABEL_46;
          }
          CmpLockKcbShared(*((_QWORD *)v63 + 1));
          v58 = 1;
          KeyValueData = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
          if ( KeyValueData >= 0 )
          {
            if ( !v10[7] && !v10[8] )
              v18 = 0;
            if ( !v18 )
            {
              v33 = v71;
LABEL_38:
              if ( v33 && v33 == *(_QWORD *)(v31 + 288) )
                v34 = 280LL;
              else
                v34 = 96LL;
              if ( Index < *(_DWORD *)(v31 + v34) )
              {
                v35 = *(unsigned int *)(v31 + v34 + 4);
                v36 = *(_QWORD *)(v31 + 32);
                if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v36, v35, &v69);
                else
                  CellFlat = HvpGetCellPaged(v36, v35, &v69);
                v38 = CellFlat;
                v39 = *(_DWORD *)(CellFlat + 4LL * Index);
                v40 = *(_QWORD *)(v31 + 32);
                if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v40, v39, &v66);
                else
                  CellPaged = HvpGetCellPaged(v40, *(_DWORD *)(CellFlat + 4LL * Index), &v66);
                v29 = CellPaged;
                KeyValueData = CmpQueryKeyValueData(v31, v39, CellPaged, v64, (_DWORD *)Size, v20, v65);
                goto LABEL_46;
              }
              KeyValueData = -2147483622;
              goto LABEL_101;
            }
            KeyValueData = CmpTransSearchAddTransFromKeyBody(v10, &v71);
            if ( KeyValueData >= 0 )
            {
              v33 = v71;
              KeyValueData = CmpPerformKeyBodyDeletionCheck(v10, v71);
              if ( KeyValueData < 0 )
              {
                v38 = 0LL;
                goto LABEL_46;
              }
              goto LABEL_38;
            }
          }
LABEL_101:
          v38 = 0LL;
LABEL_46:
          if ( v29 )
          {
            v42 = *(_QWORD *)(v31 + 32);
            if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v42, (__int64)&v66);
            else
              HvpReleaseCellPaged(v42, (unsigned int *)&v66);
          }
          if ( v38 )
          {
            v43 = *(_QWORD *)(v31 + 32);
            if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v43, (__int64)&v69);
            else
              HvpReleaseCellPaged(v43, (unsigned int *)&v69);
          }
          if ( v58 )
            CmpUnlockKcb(v31);
          CmpUnlockRegistry(v32);
          p_ApcState = &ApcState;
          goto LABEL_55;
        }
LABEL_107:
        v10 = v63;
        v16 = v57;
        v8 = Index;
        v46 = *(_QWORD *)&v65[1];
        goto LABEL_62;
      }
    }
    else
    {
      memset_0(v95, 0, v20);
      TransientPoolWithQuota = v95;
    }
    Src[1] = TransientPoolWithQuota;
LABEL_28:
    KeyValueData = 0;
    goto LABEL_29;
  }
  v10 = v63;
  v87 = v63;
  v88 = Index;
  v89 = v64;
  v90 = KeyValueInformation;
  v91 = v20;
  v92 = v22;
  v24 = CmpCallCallBacksEx(6u, (__int64)&v87, 0LL, 1, 0x15u, (__int64)v63, (__int64)v73);
  KeyValueData = v24;
  if ( v24 >= 0 )
  {
    v59 = 1;
    goto LABEL_20;
  }
  v16 = v57;
  v8 = Index;
  v46 = *(_QWORD *)&v65[1];
  if ( v24 == -1073740541 )
    KeyValueData = 0;
LABEL_62:
  v47 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v59 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v73[0] != v73 )
  {
    v79 = 0;
    v82 = 0LL;
    v83 = 0LL;
    v84 = 0;
    v77 = v10;
    v78 = KeyValueData;
    v81 = KeyValueData;
    v80 = &v87;
    CmpCallCallBacksEx(0x15u, (__int64)&v77, 0LL, 0, 0x15u, (__int64)v10, (__int64)v73);
    KeyValueData = v81;
  }
  if ( v60 )
  {
    KeLeaveCriticalRegionThread();
    v10 = v63;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v95 )
  {
    if ( (v94 & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, Src[1]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  }
  if ( CmpTraceRoutine )
  {
    v55 = EtwpTraceRegistry;
    LOBYTE(v55) = 18;
    if ( (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry(0x12u, (__int64)v96, KeyValueData, v8, v46, 0LL);
    else
      guard_dispatch_icall_no_overrides(v55, v96);
  }
  if ( v16 )
    CmpReleaseShutdownRundown(v47);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v85);
  return KeyValueData;
}
