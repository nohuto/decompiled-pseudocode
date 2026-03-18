/*
 * XREFs of NtEnumerateValueKey @ 0x14090C2D0
 * Callers:
 *     RtlInitFunctionalityCache @ 0x14077CF38 (RtlInitFunctionalityCache.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
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
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpQueryKeyValueData @ 0x140875E50 (CmpQueryKeyValueData.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140879368 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14090B974 (CmEnumerateValueFromLayeredKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A66364 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall NtEnumerateValueKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        size_t Size,
        void *a6)
{
  unsigned int v8; // r13d
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
  unsigned int v20; // r13d
  __int64 v21; // rcx
  PVOID v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v24; // eax
  __int64 v25; // r8
  _BYTE *TransientPoolWithQuota; // rax
  void *v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rcx
  ULONG_PTR v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rax
  ULONG_PTR v34; // rdx
  ULONG_PTR v35; // rcx
  __int64 CellFlat; // rax
  __int64 v37; // r15
  unsigned int v38; // ebx
  ULONG_PTR v39; // rcx
  __int64 CellPaged; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _KAPC_STATE *p_ApcState; // rcx
  unsigned int v44; // eax
  __int64 v45; // r15
  PVOID v46; // rcx
  PVOID v48; // rax
  void *v49; // rdi
  unsigned int v51; // edx
  unsigned int v52; // eax
  char v53; // cl
  void (__fastcall *v54)(unsigned __int8, __int64, int, int, __int64, __int64); // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v56; // [rsp+50h] [rbp-298h]
  char v57; // [rsp+51h] [rbp-297h]
  char v58; // [rsp+52h] [rbp-296h]
  char v59; // [rsp+53h] [rbp-295h]
  char v61; // [rsp+58h] [rbp-290h] BYREF
  PVOID v62; // [rsp+60h] [rbp-288h] BYREF
  int v63; // [rsp+68h] [rbp-280h]
  unsigned int v64[3]; // [rsp+6Ch] [rbp-27Ch] BYREF
  __int64 v65; // [rsp+78h] [rbp-270h] BYREF
  PVOID v66; // [rsp+80h] [rbp-268h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-260h]
  __int64 v68; // [rsp+90h] [rbp-258h] BYREF
  PVOID Object; // [rsp+98h] [rbp-250h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-248h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-240h]
  _QWORD v72[2]; // [rsp+B0h] [rbp-238h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-228h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-220h] BYREF
  size_t v75; // [rsp+D0h] [rbp-218h]
  _QWORD *v76; // [rsp+D8h] [rbp-210h] BYREF
  int v77; // [rsp+E0h] [rbp-208h]
  int v78; // [rsp+E4h] [rbp-204h]
  PVOID *v79; // [rsp+E8h] [rbp-200h]
  int v80; // [rsp+F0h] [rbp-1F8h]
  __int128 v81; // [rsp+F4h] [rbp-1F4h]
  __int64 v82; // [rsp+104h] [rbp-1E4h]
  int v83; // [rsp+10Ch] [rbp-1DCh]
  __int128 v84; // [rsp+110h] [rbp-1D8h] BYREF
  __int64 v85; // [rsp+120h] [rbp-1C8h]
  PVOID v86; // [rsp+130h] [rbp-1B8h] BYREF
  unsigned int v87; // [rsp+138h] [rbp-1B0h]
  int v88; // [rsp+13Ch] [rbp-1ACh]
  unsigned __int64 v89; // [rsp+140h] [rbp-1A8h]
  unsigned int v90; // [rsp+148h] [rbp-1A0h]
  PVOID v91; // [rsp+150h] [rbp-198h]
  void *Src[2]; // [rsp+170h] [rbp-178h]
  char v93; // [rsp+180h] [rbp-168h]
  _BYTE v94[79]; // [rsp+181h] [rbp-167h] BYREF
  _OWORD v95[2]; // [rsp+1D0h] [rbp-118h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1F0h] [rbp-F8h] BYREF
  struct _KAPC_STATE v97; // [rsp+220h] [rbp-C8h] BYREF
  _BYTE v98[32]; // [rsp+250h] [rbp-98h] BYREF
  __int64 *v99; // [rsp+270h] [rbp-78h]
  __int64 v100; // [rsp+278h] [rbp-70h]
  char *v101; // [rsp+280h] [rbp-68h]
  __int64 v102; // [rsp+288h] [rbp-60h]
  __int64 *v103; // [rsp+290h] [rbp-58h]
  __int64 v104; // [rsp+298h] [rbp-50h]

  v63 = a3;
  v8 = a2;
  v66 = a6;
  v67 = a2;
  v84 = 0LL;
  v85 = 0LL;
  LODWORD(v65) = 0;
  memset(&v97, 0, sizeof(v97));
  memset_0(v94, 0, 0x47uLL);
  memset(v95, 0, sizeof(v95));
  *(_QWORD *)&v64[1] = 0LL;
  v71 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v95, 0x20000u);
  v58 = 0;
  v59 = 0;
  memset_0(&v86, 0, 0x40uLL);
  v10 = 0LL;
  v62 = 0LL;
  v64[0] = 0;
  *(_OWORD *)Src = 0LL;
  v93 = 0;
  v72[1] = v72;
  v72[0] = v72;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v84);
  Object = 0LL;
  v16 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
  v56 = v16;
  if ( !v16 )
  {
    KeyValueData = -1073741431;
LABEL_89:
    v45 = 0LL;
    goto LABEL_62;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine && Handle )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v66 = 0LL;
      if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v66, 0LL) >= 0 )
      {
        v45 = *((_QWORD *)v66 + 1);
        ObfDereferenceObject(v66);
        v10 = v62;
LABEL_122:
        KeyValueData = -1073741811;
        goto LABEL_62;
      }
      v10 = v62;
    }
    v45 = 0LL;
    goto LABEL_122;
  }
  v17 = KeGetCurrentThread()->PreviousMode;
  v18 = 1;
  KeyValueData = CmObReferenceObjectByHandle((_DWORD)Handle, 1, v15, v17, (__int64)&v62, 0LL);
  if ( KeyValueData < 0 )
  {
    v10 = v62;
    v16 = v56;
    goto LABEL_89;
  }
  if ( CmpTraceRoutine && v62 )
  {
    *(_QWORD *)&v64[1] = *((_QWORD *)v62 + 1);
    v71 = *(_QWORD *)&v64[1];
  }
  if ( v17 == 1 )
  {
    v20 = Size;
    if ( (_DWORD)Size )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = 0x7FFFFFFF0000LL;
    }
    else
    {
      v21 = 0x7FFFFFFF0000LL;
    }
    v22 = v66;
    if ( (unsigned __int64)v66 < 0x7FFFFFFF0000LL )
      v21 = (__int64)v66;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  else
  {
    v20 = Size;
    v22 = v66;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v59 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
LABEL_20:
    KeyValueData = CmKeyBodyRemapToVirtualForEnum(&v62, v17, 1LL, &Object);
    if ( KeyValueData < 0 )
      goto LABEL_107;
    Src[0] = (void *)a4;
    if ( !v20 )
    {
      Src[1] = 0LL;
      goto LABEL_28;
    }
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !v17 && a4 > 0x7FFFFFFEFFFFLL )
    {
      Src[1] = (void *)a4;
      goto LABEL_28;
    }
    if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
    {
      v73 = 1LL;
      v99 = &v73;
      v100 = 8LL;
      v61 = 1;
      v101 = &v61;
      v102 = 1LL;
      v51 = v20;
      if ( ((v20 - 1) & v20) != 0 )
      {
        v52 = v20;
        v53 = -1;
        do
        {
          ++v53;
          v52 >>= 1;
        }
        while ( v52 );
        v51 = 1 << (v53 + 1);
      }
      v74 = v51;
      v103 = &v74;
      v104 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)word_1400547DA, v25, 5u, (__int64)v98);
    }
    if ( v20 > 0x40uLL )
    {
      if ( v20 <= 0x1000uLL )
      {
        v48 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
        v49 = v48;
        if ( v48 )
        {
          memset_0(v48, 0, v20);
          v93 |= 1u;
          Src[1] = v49;
          goto LABEL_28;
        }
      }
      TransientPoolWithQuota = (_BYTE *)CmpAllocateTransientPoolWithQuota();
      if ( !TransientPoolWithQuota )
      {
        KeyValueData = -1073741670;
LABEL_29:
        if ( KeyValueData >= 0 )
        {
          if ( Object )
          {
            CmpAttachToRegistryProcess(&v97);
            v10 = v62;
            KeyValueData = CmEnumerateValueKeyFromMergedView(
                             (int)v62,
                             (int)Object,
                             0,
                             a2,
                             v63,
                             (size_t)Src[1],
                             v20,
                             (__int64)v64,
                             0LL);
            p_ApcState = &v97;
LABEL_55:
            CmpDetachFromRegistryProcess(p_ApcState);
            if ( KeyValueData >= 0 || KeyValueData == -2147483643 || KeyValueData == -1073741789 )
            {
              v44 = v64[0];
              *(_DWORD *)v66 = v64[0];
              if ( KeyValueData != -1073741789 )
              {
                if ( v20 >= v44 )
                  v20 = v44;
                if ( Src[0] != Src[1] )
                  memmove(Src[0], Src[1], v20);
              }
              v16 = v56;
              v8 = a2;
              v45 = *(_QWORD *)&v64[1];
            }
            else
            {
              v16 = v56;
              v8 = a2;
              v45 = *(_QWORD *)&v64[1];
            }
            goto LABEL_62;
          }
          v27 = Src[1];
          v75 = (size_t)Src[1];
          v68 = 0LL;
          memset(&ApcState, 0, sizeof(ApcState));
          v65 = 0LL;
          v70 = 0LL;
          HvpGetCellContextInitialize(&v68);
          v28 = 0LL;
          HvpGetCellContextInitialize(&v65);
          v57 = 0;
          CmpAttachToRegistryProcess(&ApcState);
          CmpLockRegistry(v29);
          v10 = v62;
          v30 = *((_QWORD *)v62 + 1);
          if ( *(_WORD *)(v30 + 66) )
          {
            KeyValueData = CmEnumerateValueFromLayeredKey((__int64)v62, a2, v63, (size_t)v27, v20, (__int64)v64);
            v37 = 0LL;
            goto LABEL_46;
          }
          CmpLockKcbShared(*((_QWORD *)v62 + 1));
          v57 = 1;
          KeyValueData = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
          if ( KeyValueData >= 0 )
          {
            if ( !v10[7] && !v10[8] )
              v18 = 0;
            if ( !v18 )
            {
              v32 = v70;
LABEL_38:
              if ( v32 && v32 == *(_QWORD *)(v30 + 288) )
                v33 = 280LL;
              else
                v33 = 96LL;
              if ( a2 < *(_DWORD *)(v30 + v33) )
              {
                v34 = *(unsigned int *)(v30 + v33 + 4);
                v35 = *(_QWORD *)(v30 + 32);
                if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v35, v34, &v68);
                else
                  CellFlat = HvpGetCellPaged(v35, v34, &v68);
                v37 = CellFlat;
                v38 = *(_DWORD *)(CellFlat + 4LL * a2);
                v39 = *(_QWORD *)(v30 + 32);
                if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v39, v38, &v65);
                else
                  CellPaged = HvpGetCellPaged(v39, *(_DWORD *)(CellFlat + 4LL * a2), &v65);
                v28 = CellPaged;
                KeyValueData = CmpQueryKeyValueData(v30, v38, CellPaged, v63, (_DWORD *)v75, v20, v64);
                goto LABEL_46;
              }
              KeyValueData = -2147483622;
              goto LABEL_101;
            }
            KeyValueData = CmpTransSearchAddTransFromKeyBody(v10, &v70);
            if ( KeyValueData >= 0 )
            {
              v32 = v70;
              KeyValueData = CmpPerformKeyBodyDeletionCheck(v10, v70);
              if ( KeyValueData < 0 )
              {
                v37 = 0LL;
                goto LABEL_46;
              }
              goto LABEL_38;
            }
          }
LABEL_101:
          v37 = 0LL;
LABEL_46:
          if ( v28 )
          {
            v41 = *(_QWORD *)(v30 + 32);
            if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v41, (__int64)&v65);
            else
              HvpReleaseCellPaged(v41, (unsigned int *)&v65);
          }
          if ( v37 )
          {
            v42 = *(_QWORD *)(v30 + 32);
            if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v42, (__int64)&v68);
            else
              HvpReleaseCellPaged(v42, (unsigned int *)&v68);
          }
          if ( v57 )
            CmpUnlockKcb(v30);
          CmpUnlockRegistry(v31);
          p_ApcState = &ApcState;
          goto LABEL_55;
        }
LABEL_107:
        v10 = v62;
        v16 = v56;
        v8 = a2;
        v45 = *(_QWORD *)&v64[1];
        goto LABEL_62;
      }
    }
    else
    {
      memset_0(v94, 0, v20);
      TransientPoolWithQuota = v94;
    }
    Src[1] = TransientPoolWithQuota;
LABEL_28:
    KeyValueData = 0;
    goto LABEL_29;
  }
  v10 = v62;
  v86 = v62;
  v87 = a2;
  v88 = v63;
  v89 = a4;
  v90 = v20;
  v91 = v22;
  v24 = CmpCallCallBacksEx(6u, (__int64)&v86, 0LL, 1, 0x15u, (__int64)v62, (__int64)v72);
  KeyValueData = v24;
  if ( v24 >= 0 )
  {
    v58 = 1;
    goto LABEL_20;
  }
  v16 = v56;
  v8 = a2;
  v45 = *(_QWORD *)&v64[1];
  if ( v24 == -1073740541 )
    KeyValueData = 0;
LABEL_62:
  v46 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v58 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v72[0] != v72 )
  {
    v78 = 0;
    v81 = 0LL;
    v82 = 0LL;
    v83 = 0;
    v76 = v10;
    v77 = KeyValueData;
    v80 = KeyValueData;
    v79 = &v86;
    CmpCallCallBacksEx(0x15u, (__int64)&v76, 0LL, 0, 0x15u, (__int64)v10, (__int64)v72);
    KeyValueData = v80;
  }
  if ( v59 )
  {
    KeLeaveCriticalRegionThread();
    v10 = v62;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v94 )
  {
    if ( (v93 & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, Src[1]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  }
  if ( CmpTraceRoutine )
  {
    v54 = EtwpTraceRegistry;
    LOBYTE(v54) = 18;
    if ( (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry(0x12u, (__int64)v95, KeyValueData, v8, v45, 0LL);
    else
      guard_dispatch_icall_no_overrides(v54, v95, (unsigned int)KeyValueData, v8);
  }
  if ( v16 )
    CmpReleaseShutdownRundown(v46);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v84);
  return (unsigned int)KeyValueData;
}
