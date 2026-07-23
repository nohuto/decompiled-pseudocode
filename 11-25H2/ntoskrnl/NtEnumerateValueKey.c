/*
 * XREFs of NtEnumerateValueKey @ 0x140840320
 * Callers:
 *     RtlInitFunctionalityCache @ 0x14076DC08 (RtlInitFunctionalityCache.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
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
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpQueryKeyValueData @ 0x140879AE0 (CmpQueryKeyValueData.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A639DC (CmEnumerateValueKeyFromMergedView.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
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
  char v16; // r15
  unsigned __int8 v17; // r14
  int v18; // r15d
  NTSTATUS KeyValueData; // ebx
  ULONG v20; // r13d
  __int64 v21; // rcx
  PVOID v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v24; // r9d
  int v25; // eax
  __int64 v26; // r8
  char *TransientPoolWithQuota; // rax
  size_t v28; // rbx
  __int64 v29; // r12
  ULONG_PTR v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rax
  ULONG_PTR v34; // rcx
  __int64 CellFlat; // rax
  __int64 v36; // r15
  unsigned int v37; // ebx
  ULONG_PTR v38; // rcx
  __int64 CellPaged; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct _KAPC_STATE *p_ApcState; // rcx
  ULONG v43; // eax
  __int64 v44; // r14
  PVOID v45; // rcx
  PVOID v47; // rax
  unsigned __int64 v48; // rdi
  unsigned int v50; // edx
  ULONG v51; // eax
  char v52; // cl
  __int64 (__fastcall *v53)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v55; // [rsp+50h] [rbp-288h]
  char v56; // [rsp+51h] [rbp-287h]
  char v57; // [rsp+52h] [rbp-286h]
  char v58; // [rsp+53h] [rbp-285h]
  char v60; // [rsp+58h] [rbp-280h] BYREF
  PVOID v61; // [rsp+60h] [rbp-278h] BYREF
  int v62; // [rsp+68h] [rbp-270h]
  _DWORD v63[3]; // [rsp+6Ch] [rbp-26Ch] BYREF
  __int64 v64; // [rsp+78h] [rbp-260h] BYREF
  PVOID v65; // [rsp+80h] [rbp-258h] BYREF
  ULONG v66; // [rsp+88h] [rbp-250h]
  __int64 v67; // [rsp+90h] [rbp-248h] BYREF
  PVOID Object; // [rsp+98h] [rbp-240h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-238h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-230h]
  _QWORD v71[2]; // [rsp+B0h] [rbp-228h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-218h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-210h] BYREF
  size_t Size; // [rsp+D0h] [rbp-208h]
  _KAFFINITY_EX v75; // [rsp+D8h] [rbp-200h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1E0h] [rbp-F8h] BYREF
  struct _KAPC_STATE v77; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE v78[32]; // [rsp+240h] [rbp-98h] BYREF
  __int64 *v79; // [rsp+260h] [rbp-78h]
  __int64 v80; // [rsp+268h] [rbp-70h]
  char *v81; // [rsp+270h] [rbp-68h]
  __int64 v82; // [rsp+278h] [rbp-60h]
  __int64 *v83; // [rsp+280h] [rbp-58h]
  __int64 v84; // [rsp+288h] [rbp-50h]

  v62 = KeyValueInformationClass;
  v8 = Index;
  v65 = ResultLength;
  v66 = Index;
  *(_OWORD *)&v75.Count = 0LL;
  LODWORD(v64) = 0;
  memset(&v77, 0, sizeof(v77));
  memset_0((char *)&v75.StaticBitmap[18] + 1, 0, 0x47uLL);
  memset(&v75.StaticBitmap[28], 0, 32);
  *(_QWORD *)&v63[1] = 0LL;
  v70 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v75.StaticBitmap[28], 0x20000u);
  v57 = 0;
  v58 = 0;
  memset_0(&v75.StaticBitmap[8], 0, 0x40uLL);
  v10 = 0LL;
  v61 = 0LL;
  v63[0] = 0;
  memset(&v75.StaticBitmap[16], 0, 17);
  v71[1] = v71;
  v71[0] = v71;
  CmpInitializeThreadInfo(&v75);
  Object = 0LL;
  v16 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
  v55 = v16;
  if ( !v16 )
  {
    KeyValueData = -1073741431;
LABEL_89:
    v44 = 0LL;
    goto LABEL_62;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( CmpTraceRoutine && KeyHandle )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v65 = 0LL;
      if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v65, 0LL) >= 0 )
      {
        v44 = *((_QWORD *)v65 + 1);
        ObfDereferenceObject(v65);
        v10 = v61;
LABEL_122:
        KeyValueData = -1073741811;
        goto LABEL_62;
      }
      v10 = v61;
    }
    v44 = 0LL;
    goto LABEL_122;
  }
  v17 = KeGetCurrentThread()->PreviousMode;
  v18 = 1;
  KeyValueData = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v15, v17, (__int64)&v61, 0LL);
  if ( KeyValueData < 0 )
  {
    v10 = v61;
    v16 = v55;
    goto LABEL_89;
  }
  if ( CmpTraceRoutine && v61 )
  {
    *(_QWORD *)&v63[1] = *((_QWORD *)v61 + 1);
    v70 = *(_QWORD *)&v63[1];
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
    v22 = v65;
    if ( (unsigned __int64)v65 < 0x7FFFFFFF0000LL )
      v21 = (__int64)v65;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  else
  {
    v20 = Length;
    v22 = v65;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v58 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
LABEL_20:
    KeyValueData = CmKeyBodyRemapToVirtualForEnum(&v61, v17, 1LL, &Object);
    if ( KeyValueData < 0 )
      goto LABEL_107;
    v75.StaticBitmap[16] = (unsigned __int64)KeyValueInformation;
    if ( !v20 )
    {
      v75.StaticBitmap[17] = 0LL;
      goto LABEL_28;
    }
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !v17 && (unsigned __int64)KeyValueInformation > 0x7FFFFFFEFFFFLL )
    {
      v75.StaticBitmap[17] = (unsigned __int64)KeyValueInformation;
      goto LABEL_28;
    }
    if ( (unsigned int)dword_140E09E08 > 5 && (qword_140E09E18 & 4) != 0 && (qword_140E09E20 & 4) == qword_140E09E20 )
    {
      v72 = 1LL;
      v79 = &v72;
      v80 = 8LL;
      v60 = 1;
      v81 = &v60;
      v82 = 1LL;
      v50 = v20;
      if ( ((v20 - 1) & v20) != 0 )
      {
        v51 = v20;
        v52 = -1;
        do
        {
          ++v52;
          v51 >>= 1;
        }
        while ( v51 );
        v50 = 1 << (v52 + 1);
      }
      v73 = v50;
      v83 = &v73;
      v84 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09E08, (unsigned __int8 *)&unk_1400533B0, v26, 5u, (__int64)v78);
    }
    if ( v20 > 0x40uLL )
    {
      if ( v20 <= 0x1000uLL )
      {
        v47 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
        v48 = (unsigned __int64)v47;
        if ( v47 )
        {
          memset_0(v47, 0, v20);
          LOBYTE(v75.StaticBitmap[18]) |= 1u;
          v75.StaticBitmap[17] = v48;
          goto LABEL_28;
        }
      }
      TransientPoolWithQuota = (char *)CmpAllocateTransientPoolWithQuota();
      if ( !TransientPoolWithQuota )
      {
        KeyValueData = -1073741670;
LABEL_29:
        if ( KeyValueData >= 0 )
        {
          if ( Object )
          {
            CmpAttachToRegistryProcess(&v77);
            v10 = v61;
            KeyValueData = CmEnumerateValueKeyFromMergedView(
                             (int)v61,
                             (int)Object,
                             0,
                             Index,
                             v62,
                             v75.StaticBitmap[17],
                             v20,
                             (__int64)v63,
                             0LL);
            p_ApcState = &v77;
LABEL_55:
            CmpDetachFromRegistryProcess(p_ApcState);
            if ( KeyValueData >= 0 || KeyValueData == -2147483643 || KeyValueData == -1073741789 )
            {
              v43 = v63[0];
              *(_DWORD *)v65 = v63[0];
              if ( KeyValueData != -1073741789 )
              {
                if ( v20 >= v43 )
                  v20 = v43;
                if ( v75.StaticBitmap[16] != v75.StaticBitmap[17] )
                  memmove((void *)v75.StaticBitmap[16], (const void *)v75.StaticBitmap[17], v20);
              }
              v16 = v55;
              v8 = Index;
              v44 = *(_QWORD *)&v63[1];
            }
            else
            {
              v16 = v55;
              v8 = Index;
              v44 = *(_QWORD *)&v63[1];
            }
            goto LABEL_62;
          }
          v28 = v75.StaticBitmap[17];
          Size = v75.StaticBitmap[17];
          v67 = 0LL;
          memset(&ApcState, 0, sizeof(ApcState));
          v64 = 0LL;
          v69 = 0LL;
          HvpGetCellContextInitialize(&v67);
          v29 = 0LL;
          HvpGetCellContextInitialize(&v64);
          v56 = 0;
          CmpAttachToRegistryProcess(&ApcState);
          CmpLockRegistry();
          v10 = v61;
          v30 = *((_QWORD *)v61 + 1);
          if ( *(_WORD *)(v30 + 66) )
          {
            KeyValueData = CmEnumerateValueFromLayeredKey((__int64)v61, Index, v62, v28, v20, (__int64)v63);
            v36 = 0LL;
            goto LABEL_46;
          }
          CmpLockKcbShared(*((_QWORD *)v61 + 1));
          v56 = 1;
          KeyValueData = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
          if ( KeyValueData >= 0 )
          {
            if ( !v10[7] && !v10[8] )
              v18 = 0;
            if ( !v18 )
            {
              v32 = v69;
LABEL_38:
              if ( v32 && v32 == *(_QWORD *)(v30 + 288) )
                v33 = 280LL;
              else
                v33 = 96LL;
              if ( Index < *(_DWORD *)(v30 + v33) )
              {
                v34 = *(_QWORD *)(v30 + 32);
                if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v34, *(unsigned int *)(v30 + v33 + 4));
                else
                  CellFlat = HvpGetCellPaged(v34);
                v36 = CellFlat;
                v37 = *(_DWORD *)(CellFlat + 4LL * Index);
                v38 = *(_QWORD *)(v30 + 32);
                if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v38, v37);
                else
                  CellPaged = HvpGetCellPaged(v38);
                v29 = CellPaged;
                KeyValueData = CmpQueryKeyValueData(v30, v37, CellPaged, v62, Size, v20, (__int64)v63);
                goto LABEL_46;
              }
              KeyValueData = -2147483622;
              goto LABEL_101;
            }
            KeyValueData = CmpTransSearchAddTransFromKeyBody(v10, &v69);
            if ( KeyValueData >= 0 )
            {
              v32 = v69;
              KeyValueData = CmpPerformKeyBodyDeletionCheck(v10, v69);
              if ( KeyValueData < 0 )
              {
                v36 = 0LL;
                goto LABEL_46;
              }
              goto LABEL_38;
            }
          }
LABEL_101:
          v36 = 0LL;
LABEL_46:
          if ( v29 )
          {
            v40 = *(_QWORD *)(v30 + 32);
            if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v40, &v64);
            else
              HvpReleaseCellPaged(v40, &v64);
          }
          if ( v36 )
          {
            v41 = *(_QWORD *)(v30 + 32);
            if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v41, &v67);
            else
              HvpReleaseCellPaged(v41, &v67);
          }
          if ( v56 )
            CmpUnlockKcb(v30);
          CmpUnlockRegistry(v31);
          p_ApcState = &ApcState;
          goto LABEL_55;
        }
LABEL_107:
        v10 = v61;
        v16 = v55;
        v8 = Index;
        v44 = *(_QWORD *)&v63[1];
        goto LABEL_62;
      }
    }
    else
    {
      memset_0((char *)&v75.StaticBitmap[18] + 1, 0, v20);
      TransientPoolWithQuota = (char *)&v75.StaticBitmap[18] + 1;
    }
    v75.StaticBitmap[17] = (unsigned __int64)TransientPoolWithQuota;
LABEL_28:
    KeyValueData = 0;
    goto LABEL_29;
  }
  v10 = v61;
  v75.StaticBitmap[8] = (unsigned __int64)v61;
  v75.StaticBitmap[9] = __PAIR64__(v62, Index);
  v75.StaticBitmap[10] = (unsigned __int64)KeyValueInformation;
  LODWORD(v75.StaticBitmap[11]) = v20;
  v75.StaticBitmap[12] = (unsigned __int64)v22;
  LOBYTE(v24) = 1;
  v25 = CmpCallCallBacksEx(6, (unsigned int)&v75.StaticBitmap[8], 0, v24, 21, (__int64)v61, (__int64)v71);
  KeyValueData = v25;
  if ( v25 >= 0 )
  {
    v57 = 1;
    goto LABEL_20;
  }
  v16 = v55;
  v8 = Index;
  v44 = *(_QWORD *)&v63[1];
  if ( v25 == -1073740541 )
    KeyValueData = 0;
LABEL_62:
  v45 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v57 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v71[0] != v71 )
  {
    memset((char *)&v75.StaticBitmap[4] + 4, 0, 28);
    v75.StaticBitmap[1] = (unsigned __int64)v10;
    v75.StaticBitmap[2] = (unsigned int)KeyValueData;
    LODWORD(v75.StaticBitmap[4]) = KeyValueData;
    v75.StaticBitmap[3] = (unsigned __int64)&v75.StaticBitmap[8];
    CmpCallCallBacksEx(21, (unsigned int)&v75.StaticBitmap[1], 0, 0, 21, (__int64)v10, (__int64)v71);
    KeyValueData = v75.StaticBitmap[4];
  }
  if ( v58 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = v61;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v75.StaticBitmap[17]
    && v75.StaticBitmap[17] != v75.StaticBitmap[16]
    && (_KAFFINITY_EX *)v75.StaticBitmap[17] != (_KAFFINITY_EX *)((char *)&v75.StaticBitmap[18] + 1) )
  {
    if ( (v75.StaticBitmap[18] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v75.StaticBitmap[17]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v75.StaticBitmap[17]);
  }
  if ( CmpTraceRoutine )
  {
    v53 = EtwpTraceRegistry;
    LOBYTE(v53) = 18;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry((_DWORD)v53, (unsigned int)&v75.StaticBitmap[28], KeyValueData, v8, v44, 0LL);
    else
      guard_dispatch_icall_no_overrides(v53);
  }
  if ( v16 )
    CmpReleaseShutdownRundown(v45);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v75);
  return KeyValueData;
}
