/*
 * XREFs of MmQueryVirtualMemory @ 0x14096EC30
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     PfpVirtualQuery @ 0x1408F79F8 (PfpVirtualQuery.c)
 *     NtQueryVirtualMemory @ 0x14096EBF0 (NtQueryVirtualMemory.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiGetWorkingSetInfo @ 0x14025E748 (MiGetWorkingSetInfo.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MiGetAweVadPartition @ 0x1402661D4 (MiGetAweVadPartition.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030CBA0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiReturnLockedVadOrNextVa @ 0x140345020 (MiReturnLockedVadOrNextVa.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiGetVadPageSize @ 0x14041B130 (MiGetVadPageSize.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     MiIsSoftwareEnclave @ 0x140446C58 (MiIsSoftwareEnclave.c)
 *     MiQueryAddressSpan @ 0x14044AF24 (MiQueryAddressSpan.c)
 *     MiQueryImageExtensionInformation @ 0x140470764 (MiQueryImageExtensionInformation.c)
 *     MiSetBasicInfoPartitionId @ 0x140478D58 (MiSetBasicInfoPartitionId.c)
 *     VslQueryVirtualMemory @ 0x1404AC438 (VslQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14096FD94 (MiIsUserQueryVmCallerTrusted.c)
 *     MmQueryBadAddresses @ 0x14096FEB8 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiGetAweVadPageSize @ 0x14097085C (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v9; // rdi
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // r13
  char PreviousMode; // cl
  int v14; // ebx
  int v15; // eax
  unsigned __int64 v16; // r15
  _KPROCESS *Process; // r13
  int MemoryPhysicalContiguity; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r9
  unsigned __int64 v27; // r12
  int v28; // eax
  __int64 v29; // rdx
  char v30; // cl
  int v31; // r8d
  __int64 v32; // rcx
  int v33; // r8d
  unsigned __int64 v34; // r9
  __int64 v35; // r11
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rcx
  __int64 result; // rax
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // r10d
  unsigned __int16 *ProcessPartition; // r11
  __int64 v48; // rdi
  int v49; // ecx
  __int64 *v50; // rax
  char v51; // bl
  int v52; // edi
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // r15
  char v56; // bl
  unsigned __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // ecx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // ecx
  int IsUserQueryVmCallerTrusted; // eax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // r8
  bool v69; // cf
  char v70; // cl
  char v71; // al
  char v72; // cl
  __int64 v73; // rcx
  unsigned __int64 AddressSpan; // rax
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  int v79; // edx
  __int64 *v80; // rax
  unsigned int BadAddresses; // ebx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r8
  unsigned __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rbx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v89; // r10
  char v90; // [rsp+40h] [rbp-138h]
  unsigned __int8 v91; // [rsp+44h] [rbp-134h]
  unsigned int v92; // [rsp+48h] [rbp-130h] BYREF
  int v93; // [rsp+4Ch] [rbp-12Ch]
  __int64 v94; // [rsp+50h] [rbp-128h] BYREF
  int v95[2]; // [rsp+58h] [rbp-120h]
  _QWORD *v96; // [rsp+60h] [rbp-118h]
  PVOID Object; // [rsp+68h] [rbp-110h] BYREF
  unsigned __int64 VadPageSize; // [rsp+70h] [rbp-108h]
  _OWORD v99[3]; // [rsp+78h] [rbp-100h] BYREF
  __int128 v100; // [rsp+A8h] [rbp-D0h]
  __int64 v101; // [rsp+B8h] [rbp-C0h]
  __int64 P; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v103; // [rsp+C8h] [rbp-B0h] BYREF
  __int128 Source; // [rsp+D8h] [rbp-A0h] BYREF
  __int128 v105; // [rsp+E8h] [rbp-90h]
  __int128 v106; // [rsp+F8h] [rbp-80h]
  _BYTE v107[48]; // [rsp+108h] [rbp-70h] BYREF

  v7 = a4;
  *(_QWORD *)v95 = a4;
  v9 = a2;
  v96 = a6;
  v11 = 0LL;
  v92 = 0;
  Object = 0LL;
  v94 = 0LL;
  P = 0LL;
  memset(v99, 0, sizeof(v99));
  v100 = 0LL;
  v101 = 0LL;
  memset(v107, 0, sizeof(v107));
  v90 = 0;
  VadPageSize = 0LL;
  v103 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v91 = PreviousMode;
  if ( a3 != 2 )
  {
    a2 = 0x140000000uLL;
    switch ( a3 )
    {
      case 0:
      case 8:
        v69 = a5 < 0x30;
        goto LABEL_110;
      case 1:
        if ( a5 < 8 )
          return 3221225476LL;
        v14 = 256;
        v90 = 0;
        goto LABEL_3;
      case 3:
      case 6:
        v69 = a5 < 0x18;
        goto LABEL_110;
      case 4:
        if ( a5 < 0x10 )
          return 3221225476LL;
        v14 = 256;
        v90 = 0;
        goto LABEL_3;
      case 5:
        v69 = a5 < 8;
        goto LABEL_110;
      case 7:
        v69 = a5 < 0x20;
LABEL_110:
        if ( v69 )
          return 3221225476LL;
        goto LABEL_2;
      case 11:
        if ( a5 < 0x28 )
          return 3221225476LL;
        v14 = 256;
        v90 = 0;
        goto LABEL_3;
      case 12:
        if ( !v9 )
          goto LABEL_2;
        return 3221225485LL;
      case 13:
        return 3221225659LL;
      case 14:
        if ( a5 < 0x18 )
          return 3221225476LL;
        if ( v9 )
          goto LABEL_2;
        result = 3221225485LL;
        break;
      default:
        return 3221225475LL;
    }
    return result;
  }
LABEL_2:
  v14 = 0;
LABEL_3:
  if ( v14 == 256
    && PreviousMode
    && (IsUserQueryVmCallerTrusted = MiIsUserQueryVmCallerTrusted(CurrentThread),
        PreviousMode = v91,
        !IsUserQueryVmCallerTrusted) )
  {
    v15 = a7 | 0x40000000;
  }
  else
  {
    v15 = a7;
  }
  v93 = v15;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      a2 = v7;
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v67 = v7 + a5 - 1;
      if ( v7 > v67 || (a4 = 0x7FFFFFFF0000LL, v67 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v68 = (v67 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)a2 = *(_BYTE *)a2;
        a2 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( a2 != v68 );
      LOBYTE(v14) = 0;
    }
    else
    {
      a4 = 0x7FFFFFFF0000LL;
    }
    if ( v96 )
    {
      if ( (unsigned __int64)v96 < 0x7FFFFFFF0000LL )
        a4 = (__int64)v96;
      *(_QWORD *)a4 = *(_QWORD *)a4;
      LOBYTE(v14) = 0;
    }
  }
  if ( v9 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v16 = v9 & 0x7FFFFFFFF000LL;
  if ( a3 != 10 )
    goto LABEL_8;
  Source = **(_OWORD **)v95;
  v105 = *(_OWORD *)(*(_QWORD *)v95 + 16LL);
  v106 = *(_OWORD *)(*(_QWORD *)v95 + 32LL);
  VadPageSize = *((_QWORD *)&v105 + 1);
  *((_QWORD *)&v105 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 )
    return 3221225485LL;
  v86 = VadPageSize - 1;
  if ( !VadPageSize )
    v86 = 0LL;
  a2 = v9 + v86;
  if ( a2 < v9 || a2 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  VadPageSize = v16 + ((VadPageSize + (v9 & 0xFFF) + 4095) & 0xFFFFFFFFFFFFF000uLL);
  PreviousMode = v91;
LABEL_8:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
  }
  else
  {
    v79 = 1024;
    if ( (v93 & 0x40000000) == 0 )
      v79 = 4096;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               v79,
               (__int64)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)Object;
    if ( (*((_DWORD *)Object + 383) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return 3221225506LL;
    }
  }
  switch ( a3 )
  {
    case 11:
      MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(Process, *(_QWORD *)v95, a5, v91);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v96 )
          *v96 = a5;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 12:
      BadAddresses = MmQueryBadAddresses((_DWORD)Process, 12, v95[0], a5, (__int64)v96);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      return BadAddresses;
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList((ULONG_PTR)Process, v93, *(unsigned __int64 *)v95, a5);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v96 )
          *v96 = a5;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 1:
      BadAddresses = MiGetWorkingSetInfo((__int64)Process, v93, *(__int64 *)v95, a5, &P);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( (BadAddresses & 0x80000000) == 0 )
      {
        if ( v96 )
          *v96 = 8 * P + 8;
        return 0LL;
      }
      return BadAddresses;
    case 5:
      v87 = *(_QWORD *)&Process[3].FreezeCount;
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      **(_QWORD **)v95 = v87;
      if ( v96 )
        *v96 = 8LL;
      return 0LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess(Process, 0, (__int64)v107);
    LOBYTE(v14) = v14 | 1;
    v90 = v14;
  }
  if ( a3 == 8 && Process->SecureState.SecureHandle && (int)VslQueryVirtualMemory((__int64)Process, v9, v99) >= 0 )
  {
    if ( LODWORD(v99[2]) == 4096 )
      WORD2(v99[1]) = *(_WORD *)MiGetProcessPartition((__int64)Process);
    else
      WORD2(v99[1]) = 0;
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v107, 0, v84, a4);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    v85 = *(_QWORD *)v95;
    **(_OWORD **)v95 = v99[0];
    *(__m256i *)(v85 + 16) = *(__m256i *)&v99[1];
    if ( v96 )
      *v96 = 48LL;
    return 0LL;
  }
  if ( a3 == 14 )
  {
    MemoryPhysicalContiguity = MiQueryImageExtensionInformation(*(__int128 **)v95, a2, v9, v96);
LABEL_170:
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v107, 0, v19, v20);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    return (unsigned int)MemoryPhysicalContiguity;
  }
  MemoryPhysicalContiguity = MiReturnLockedVadOrNextVa(v9, &v94, &v103, a4);
  if ( MemoryPhysicalContiguity < 0 )
    goto LABEL_170;
  v21 = v94;
  if ( !v94 )
  {
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v107, 0, v19, v20);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      v82 = v103 - v16;
      v83 = *(_QWORD *)v95;
      *(_QWORD *)(*(_QWORD *)v95 + 8LL) = 0LL;
      *(_DWORD *)(v83 + 16) = 0;
      *(_QWORD *)v83 = v16;
      *(_QWORD *)(v83 + 24) = v82;
      *(_DWORD *)(v83 + 32) = 0x10000;
      *(_QWORD *)(v83 + 36) = 1LL;
      MiSetBasicInfoPartitionId(v83, 0);
      if ( v96 )
        *v96 = 48LL;
      return 0LL;
    }
    return 3221225793LL;
  }
  memset((char *)&v99[1] + 4, 0, 20);
  HIDWORD(v99[2]) = 0;
  *(_QWORD *)&v99[0] = v16;
  *((_QWORD *)&v99[0] + 1) = (*(unsigned int *)(v94 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v94 + 32) << 32)) << 12;
  v22 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v94);
  v24 = 0x140000000uLL;
  LODWORD(v99[1]) = MmProtectToValue[(*(_DWORD *)(v21 + 48) >> 7) & 0x1F] | v22;
  v25 = *(_DWORD *)(v21 + 48);
  if ( (v25 & 0x200000) != 0 )
  {
    DWORD2(v99[2]) = 0x20000;
    if ( MiIsSoftwareEnclave(v21) )
    {
      LOBYTE(v14) = v14 | 0x40;
      v90 = v14;
    }
    v70 = v90 | 0x80;
    v26 = 0x7FFFFFFFDLL;
    if ( (*(unsigned int *)(v21 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v94 + 34) << 32)) != 0x7FFFFFFFDLL )
      v70 = v14;
    v21 = v94;
    v24 = *(_DWORD *)(v94 + 48) & 0x70;
    v71 = v70 | 8;
    if ( (_DWORD)v24 != 16 )
      v71 = v70;
    v72 = v71 | 0x10;
    if ( (_DWORD)v24 != 48 )
      v72 = v71;
    LOBYTE(v14) = v72 | 0x20;
    if ( (*(_DWORD *)(v94 + 48) & 0x400000) == 0 )
      LOBYTE(v14) = v72;
    v90 = v14;
    Process = (_KPROCESS *)Object;
    goto LABEL_26;
  }
  if ( (v25 & 0x70) == 0x20 )
  {
    DWORD2(v99[2]) = 0x1000000;
    if ( a3 == 7 && (*(_BYTE *)(**(_QWORD **)(v21 + 72) + 62LL) & 0xC) == 4 )
    {
LABEL_217:
      LOBYTE(v14) = v14 | 4;
      v90 = v14;
    }
  }
  else
  {
    DWORD2(v99[2]) = 0x40000;
    if ( a3 == 3 && a5 >= 0x30 || a3 == 7 )
    {
      v73 = **(_QWORD **)(v21 + 72);
      if ( !*(_QWORD *)(v73 + 64) )
      {
        DWORD2(v99[2]) = 0x8000000;
        goto LABEL_24;
      }
      if ( a3 == 7 && (*(_BYTE *)(v73 + 62) & 0xC) == 4 )
        goto LABEL_217;
    }
  }
LABEL_24:
  if ( a3 != 2 )
  {
    v26 = 0x7FFFFFFFDLL;
LABEL_26:
    v27 = 0LL;
    goto LABEL_27;
  }
  v80 = *(__int64 **)(v21 + 72);
  v27 = *(_QWORD *)(*v80 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v27 )
    v27 = MiReferenceControlAreaFile(*v80);
  if ( !v27 )
    v27 = 1LL;
  v26 = 0x7FFFFFFFDLL;
LABEL_27:
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v28 = *(_DWORD *)(v21 + 48);
      if ( (v28 & 0x200000) != 0 || (v28 & 0x70) != 0x20 )
        goto LABEL_40;
      v29 = ***(_QWORD ***)(v21 + 72);
      v30 = *(_BYTE *)(v29 + 15);
      *(_QWORD *)&v100 = (*(unsigned int *)(v94 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v94 + 32) << 32)) << 12;
      *((_QWORD *)&v100 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), -1LL, -1LL);
      v31 = v101 & 0xFFFFFFC3 | (4 * (v30 & 0xF));
      LODWORD(v101) = v31;
      v21 = v94;
      if ( (*(_DWORD *)(v94 + 48) & 0xF80) == 0x80 )
        LODWORD(v101) = v31 | 2;
      if ( (unsigned int)MiVadMapsLargeImage(v94) )
      {
        LockedVadEvent = MiLocateLockedVadEvent(v32, 16);
        v24 = *(_QWORD *)(LockedVadEvent + 16);
        *(_QWORD *)&v100 = v89 + ((unsigned __int64)*(unsigned __int8 *)(LockedVadEvent + 8) << 16);
      }
      else
      {
        v24 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
            - (*(unsigned int *)(v35 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v35 + 32) << 32))
            + 1;
      }
      LOBYTE(v11) = (v34 & 0xFFF) != 0;
      v26 = v34 >> 12;
      if ( v24 < v26 + v11 )
      {
        v23 = v33 | 1u;
      }
      else
      {
        if ( (MiReadVadFlags2(v21) & 0x20) == 0 )
        {
LABEL_39:
          Process = (_KPROCESS *)Object;
          LOBYTE(v14) = v90;
LABEL_40:
          MiUnlockAndDereferenceVadShared(v21, v24, v23, v26);
          if ( (v14 & 1) != 0 )
          {
            KiUnstackDetachProcess((__int64)v107, 0, v36, v37);
            ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
          }
          v92 = 24;
          v38 = *(_QWORD *)v95;
          **(_OWORD **)v95 = v100;
          *(_QWORD *)(v38 + 16) = v101;
          if ( v96 )
            *v96 = 24LL;
          return 0LL;
        }
        v23 = (unsigned int)v23 | 0x40;
      }
      LODWORD(v101) = v23;
      goto LABEL_39;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)v99, v16, VadPageSize, v21);
      *((_QWORD *)&v99[1] + 1) = AddressSpan - *(_QWORD *)&v99[0];
    }
    MiUnlockAndDereferenceVadShared(v21, v24, v23, v26);
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v107, 0, v75, v76);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      v77 = *(_QWORD *)v95;
      **(_OWORD **)v95 = v99[0];
      *(__m256i *)(v77 + 16) = *(__m256i *)&v99[1];
      if ( v96 )
        *v96 = 48LL;
      return 0LL;
    }
    if ( !v27 )
      return 3221225793LL;
    if ( v27 == 1 )
      return 3221225624LL;
    if ( (unsigned int)a5 < a5 )
    {
      ObfDereferenceObjectWithTag((PVOID)v27, 0x63536D4Du);
      return 3221225715LL;
    }
    BadAddresses = ObQueryNameStringMode((char *)v27, *(__int64 *)v95, a5, &v92, v91);
    ObfDereferenceObjectWithTag((PVOID)v27, 0x63536D4Du);
    if ( v96 )
      *v96 = v92;
    return BadAddresses;
  }
  v93 = 0;
  v40 = ((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
       - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
       + 1) << 12;
  if ( (*(unsigned int *)(v21 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v94 + 34) << 32)) >= 0x7FFFFFFFDLL )
    v41 = 0LL;
  else
    v41 = *(unsigned int *)(v94 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v94 + 34) << 32);
  v42 = v94;
  VadPageSize = MiGetVadPageSize(v94);
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)Object);
  v48 = 0LL;
  v49 = *(_DWORD *)(v42 + 48);
  if ( (v49 & 0x200000) != 0 )
  {
    v51 = v90;
    if ( (v90 & 0x10) != 0 )
    {
      MiGetAweVadPartition(v42);
      VadPageSize = MiGetAweVadPageSize(v42);
    }
    else
    {
      if ( (v49 & 0x800000) == 0 && (v49 & 0x180000u) < 0x100000 )
        goto LABEL_51;
      v78 = MiLocateLockedVadEvent(v42, 16);
      if ( v78 )
      {
        v48 = *(_QWORD *)(v78 + 24);
        if ( !v48 || PsReferencePartitionSafe(*(_QWORD *)(v78 + 24)) )
          goto LABEL_51;
        v46 = -1073740640;
        v93 = -1073740640;
      }
      v48 = 0LL;
    }
  }
  else
  {
    v50 = *(__int64 **)(v42 + 72);
    if ( v50 && *v50 )
      ProcessPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v50);
    v51 = v90;
  }
LABEL_51:
  if ( v46 < 0 )
    LODWORD(v94) = 0;
  else
    LODWORD(v94) = *ProcessPartition;
  if ( v48 )
    PsDereferencePartition(v48);
  v52 = (*(_DWORD *)(v42 + 48) >> 12) & 0x7F;
  MiUnlockAndDereferenceVadShared(v42, v43, v44, v45);
  if ( (v51 & 1) != 0 )
  {
    KiUnstackDetachProcess((__int64)v107, 0, v53, v54);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  result = (unsigned int)v93;
  if ( v93 >= 0 )
  {
    v55 = v41 << 12;
    v56 = v51 & 0xFD;
    v57 = *(_QWORD *)v95;
    **(_QWORD **)v95 = *((_QWORD *)&v99[0] + 1);
    *(_DWORD *)(v57 + 8) = v99[1];
    *(_QWORD *)(v57 + 16) = v40;
    if ( a3 != 7 )
    {
      v58 = DWORD2(v99[2]);
LABEL_60:
      *(_DWORD *)(v57 + 12) = v58;
      v59 = 24LL;
      v92 = 24;
      if ( a5 >= 0x20 )
      {
        *(_QWORD *)(v57 + 24) = v55;
        v59 = 32LL;
        v92 = 32;
      }
      if ( a5 >= 0x28 )
      {
        *(_QWORD *)(v57 + 32) = (unsigned __int16)v94;
        v59 = 40LL;
        v92 = 40;
      }
      if ( a5 >= 0x30 )
      {
        if ( v52 )
          v60 = (unsigned int)(v52 - 1);
        else
          v60 = 0xFFFFFFFFLL;
        *(_QWORD *)(v57 + 40) = v60;
        v92 = 48;
        v59 = 48LL;
      }
      if ( v96 )
        *v96 = v59;
      return 0LL;
    }
    *(_DWORD *)(v57 + 12) = 0;
    if ( DWORD2(v99[2]) == 0x20000 )
    {
      v61 = 1;
      *(_DWORD *)(v57 + 12) = 1;
    }
    else if ( (v56 & 8) != 0 )
    {
      *(_DWORD *)(v57 + 12) = 16;
      v61 = 16;
    }
    else if ( DWORD2(v99[2]) == 0x40000 )
    {
      *(_DWORD *)(v57 + 12) = 2;
      v61 = 2;
    }
    else if ( DWORD2(v99[2]) == 0x1000000 )
    {
      *(_DWORD *)(v57 + 12) = 4;
      v61 = 4;
    }
    else
    {
      v61 = 0;
      if ( DWORD2(v99[2]) == 0x8000000 )
      {
        *(_DWORD *)(v57 + 12) = 8;
        v61 = 8;
      }
    }
    switch ( VadPageSize )
    {
      case 0x10uLL:
        v61 |= 0x80u;
        break;
      case 0x200uLL:
        v61 |= 0x800u;
        break;
      case 0x40000uLL:
        v61 |= 0x1000u;
        break;
      default:
        goto LABEL_79;
    }
    *(_DWORD *)(v57 + 12) = v61;
LABEL_79:
    v62 = v61 | (32 * (v56 & 0x20));
    *(_DWORD *)(v57 + 12) = v62;
    v63 = v62 | (32 * (v56 & 0x10));
    *(_DWORD *)(v57 + 12) = v63;
    v64 = v63 | (8 * (v56 & 4));
    *(_DWORD *)(v57 + 12) = v64;
    v65 = v64 | v56 & 0x40;
    *(_DWORD *)(v57 + 12) = v65;
    v58 = v65 | (2 * (v56 & 0x80));
    goto LABEL_60;
  }
  return result;
}
