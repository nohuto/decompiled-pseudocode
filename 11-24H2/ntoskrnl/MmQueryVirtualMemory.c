/*
 * XREFs of MmQueryVirtualMemory @ 0x140986420
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140399A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     PfpVirtualQuery @ 0x140932690 (PfpVirtualQuery.c)
 *     NtQueryVirtualMemory @ 0x1409863E0 (NtQueryVirtualMemory.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiGetWorkingSetInfo @ 0x140267168 (MiGetWorkingSetInfo.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140302420 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiGetAweVadPartition @ 0x1403CC010 (MiGetAweVadPartition.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiQueryAddressSpan @ 0x1403CE718 (MiQueryAddressSpan.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     MiVadMapsLargeImage @ 0x140404B60 (MiVadMapsLargeImage.c)
 *     MiGetVadPageSize @ 0x1404272B0 (MiGetVadPageSize.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 *     MiIsSoftwareEnclave @ 0x140451BA8 (MiIsSoftwareEnclave.c)
 *     MiQueryImageExtensionInformation @ 0x140474954 (MiQueryImageExtensionInformation.c)
 *     MiSetBasicInfoPartitionId @ 0x14047DAC4 (MiSetBasicInfoPartitionId.c)
 *     VslQueryVirtualMemory @ 0x1404B1BA8 (VslQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1406B3A10 (RtlCompareMemoryUlong.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140987584 (MiIsUserQueryVmCallerTrusted.c)
 *     MmQueryBadAddresses @ 0x1409876D4 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     MiGetAweVadPageSize @ 0x140988078 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int a7)
{
  unsigned __int64 v9; // rdi
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // r13
  char PreviousMode; // cl
  int v14; // ebx
  int v15; // eax
  unsigned __int64 v16; // r15
  _KPROCESS *Process; // r13
  int MemoryPhysicalContiguity; // edi
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  int v26; // eax
  __int64 v27; // rdx
  char v28; // cl
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // r8d
  unsigned __int64 v32; // r9
  __int64 v33; // r11
  unsigned __int64 v34; // rcx
  __int64 result; // rax
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // r10d
  unsigned __int16 *ProcessPartition; // r11
  __int64 v44; // rdi
  int v45; // ecx
  __int64 *v46; // rax
  char v47; // bl
  int v48; // edi
  unsigned __int64 v49; // r15
  char v50; // bl
  unsigned __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int IsUserQueryVmCallerTrusted; // eax
  unsigned __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // r8
  bool v64; // cf
  char v65; // cl
  char v66; // al
  char v67; // cl
  __int64 v68; // rcx
  unsigned __int64 AddressSpan; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  int v72; // edx
  __int64 *v73; // rax
  unsigned int BadAddresses; // ebx
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rbx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v81; // r10
  char v82; // [rsp+40h] [rbp-138h]
  unsigned __int8 v83; // [rsp+44h] [rbp-134h]
  unsigned int v84; // [rsp+48h] [rbp-130h] BYREF
  int v85; // [rsp+4Ch] [rbp-12Ch]
  __int64 v86; // [rsp+50h] [rbp-128h] BYREF
  int v87[2]; // [rsp+58h] [rbp-120h]
  _QWORD *v88; // [rsp+60h] [rbp-118h]
  PVOID Object; // [rsp+68h] [rbp-110h] BYREF
  unsigned __int64 VadPageSize; // [rsp+70h] [rbp-108h]
  _OWORD v91[3]; // [rsp+78h] [rbp-100h] BYREF
  __int128 v92; // [rsp+A8h] [rbp-D0h]
  __int64 v93; // [rsp+B8h] [rbp-C0h]
  __int64 P; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v95; // [rsp+C8h] [rbp-B0h] BYREF
  __int128 Source; // [rsp+D8h] [rbp-A0h] BYREF
  __int128 v97; // [rsp+E8h] [rbp-90h]
  __int128 v98; // [rsp+F8h] [rbp-80h]
  _BYTE v99[48]; // [rsp+108h] [rbp-70h] BYREF

  *(_QWORD *)v87 = a4;
  v9 = a2;
  v88 = a6;
  v11 = 0LL;
  v84 = 0;
  Object = 0LL;
  v86 = 0LL;
  P = 0LL;
  memset(v91, 0, sizeof(v91));
  v92 = 0LL;
  v93 = 0LL;
  memset(v99, 0, sizeof(v99));
  v82 = 0;
  VadPageSize = 0LL;
  v95 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v83 = PreviousMode;
  if ( a3 != 2 )
  {
    a2 = 0x140000000uLL;
    switch ( a3 )
    {
      case 0:
      case 8:
        v64 = a5 < 0x30;
        goto LABEL_110;
      case 1:
        if ( a5 < 8 )
          return 3221225476LL;
        v14 = 256;
        v82 = 0;
        goto LABEL_3;
      case 3:
      case 6:
        v64 = a5 < 0x18;
        goto LABEL_110;
      case 4:
        if ( a5 < 0x10 )
          return 3221225476LL;
        v14 = 256;
        v82 = 0;
        goto LABEL_3;
      case 5:
        v64 = a5 < 8;
        goto LABEL_110;
      case 7:
        v64 = a5 < 0x20;
LABEL_110:
        if ( v64 )
          return 3221225476LL;
        goto LABEL_2;
      case 11:
        if ( a5 < 0x28 )
          return 3221225476LL;
        v14 = 256;
        v82 = 0;
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
        PreviousMode = v83,
        !IsUserQueryVmCallerTrusted) )
  {
    v15 = a7 | 0x40000000;
  }
  else
  {
    v15 = a7;
  }
  v85 = v15;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      a2 = a4;
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v61 = a4 + a5 - 1;
      if ( a4 > v61 || (v62 = 0x7FFFFFFF0000LL, v61 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v63 = (v61 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)a2 = *(_BYTE *)a2;
        a2 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( a2 != v63 );
      LOBYTE(v14) = 0;
    }
    else
    {
      v62 = 0x7FFFFFFF0000LL;
    }
    if ( v88 )
    {
      if ( (unsigned __int64)v88 < 0x7FFFFFFF0000LL )
        v62 = (__int64)v88;
      *(_QWORD *)v62 = *(_QWORD *)v62;
      LOBYTE(v14) = 0;
    }
  }
  if ( v9 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v16 = v9 & 0x7FFFFFFFF000LL;
  if ( a3 != 10 )
    goto LABEL_8;
  Source = **(_OWORD **)v87;
  v97 = *(_OWORD *)(*(_QWORD *)v87 + 16LL);
  v98 = *(_OWORD *)(*(_QWORD *)v87 + 32LL);
  VadPageSize = *((_QWORD *)&v97 + 1);
  *((_QWORD *)&v97 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 )
    return 3221225485LL;
  v78 = VadPageSize - 1;
  if ( !VadPageSize )
    v78 = 0LL;
  a2 = v9 + v78;
  if ( a2 < v9 || a2 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  VadPageSize = v16 + ((VadPageSize + (v9 & 0xFFF) + 4095) & 0xFFFFFFFFFFFFF000uLL);
  PreviousMode = v83;
LABEL_8:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
  }
  else
  {
    v72 = 1024;
    if ( (v85 & 0x40000000) == 0 )
      v72 = 4096;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               v72,
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
      MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(Process, *(_QWORD *)v87, a5, v83);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v88 )
          *v88 = a5;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 12:
      BadAddresses = MmQueryBadAddresses((_DWORD)Process, 12, v87[0], a5, (__int64)v88);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      return BadAddresses;
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList((ULONG_PTR)Process, v85, *(unsigned __int64 *)v87, a5);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v88 )
          *v88 = a5;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 1:
      BadAddresses = MiGetWorkingSetInfo((__int64)Process, v85, *(__int64 *)v87, a5, &P);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( (BadAddresses & 0x80000000) == 0 )
      {
        if ( v88 )
          *v88 = 8 * P + 8;
        return 0LL;
      }
      return BadAddresses;
    case 5:
      v79 = *(_QWORD *)&Process[3].FreezeCount;
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      **(_QWORD **)v87 = v79;
      if ( v88 )
        *v88 = 8LL;
      return 0LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess(Process, 0, (__int64)v99);
    LOBYTE(v14) = v14 | 1;
    v82 = v14;
  }
  if ( a3 == 8 && Process->SecureState.SecureHandle && (int)VslQueryVirtualMemory((__int64)Process, v9, v91) >= 0 )
  {
    if ( LODWORD(v91[2]) == 4096 )
      WORD2(v91[1]) = *(_WORD *)MiGetProcessPartition((__int64)Process);
    else
      WORD2(v91[1]) = 0;
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    v77 = *(_QWORD *)v87;
    **(_OWORD **)v87 = v91[0];
    *(__m256i *)(v77 + 16) = *(__m256i *)&v91[1];
    if ( v88 )
      *v88 = 48LL;
    return 0LL;
  }
  if ( a3 == 14 )
  {
    MemoryPhysicalContiguity = MiQueryImageExtensionInformation(*(__int128 **)v87, a2, v9, v88);
LABEL_170:
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    return (unsigned int)MemoryPhysicalContiguity;
  }
  MemoryPhysicalContiguity = MiReturnLockedVadOrNextVa(v9, &v86, &v95);
  if ( MemoryPhysicalContiguity < 0 )
    goto LABEL_170;
  v19 = v86;
  if ( !v86 )
  {
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      v75 = v95 - v16;
      v76 = *(_QWORD *)v87;
      *(_QWORD *)(*(_QWORD *)v87 + 8LL) = 0LL;
      *(_DWORD *)(v76 + 16) = 0;
      *(_QWORD *)v76 = v16;
      *(_QWORD *)(v76 + 24) = v75;
      *(_DWORD *)(v76 + 32) = 0x10000;
      *(_QWORD *)(v76 + 36) = 1LL;
      MiSetBasicInfoPartitionId(v76, 0);
      if ( v88 )
        *v88 = 48LL;
      return 0LL;
    }
    return 3221225793LL;
  }
  memset((char *)&v91[1] + 4, 0, 20);
  HIDWORD(v91[2]) = 0;
  *(_QWORD *)&v91[0] = v16;
  *((_QWORD *)&v91[0] + 1) = (*(unsigned int *)(v86 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v86 + 32) << 32)) << 12;
  v20 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v86);
  v22 = 0x140000000uLL;
  LODWORD(v91[1]) = MmProtectToValue[(*(_DWORD *)(v19 + 48) >> 7) & 0x1F] | v20;
  v23 = *(_DWORD *)(v19 + 48);
  if ( (v23 & 0x200000) != 0 )
  {
    DWORD2(v91[2]) = 0x20000;
    if ( MiIsSoftwareEnclave(v19) )
    {
      LOBYTE(v14) = v14 | 0x40;
      v82 = v14;
    }
    v65 = v82 | 0x80;
    v24 = 0x7FFFFFFFDLL;
    if ( (*(unsigned int *)(v19 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v86 + 34) << 32)) != 0x7FFFFFFFDLL )
      v65 = v14;
    v19 = v86;
    v22 = *(_DWORD *)(v86 + 48) & 0x70;
    v66 = v65 | 8;
    if ( (_DWORD)v22 != 16 )
      v66 = v65;
    v67 = v66 | 0x10;
    if ( (_DWORD)v22 != 48 )
      v67 = v66;
    LOBYTE(v14) = v67 | 0x20;
    if ( (*(_DWORD *)(v86 + 48) & 0x400000) == 0 )
      LOBYTE(v14) = v67;
    v82 = v14;
    Process = (_KPROCESS *)Object;
    goto LABEL_26;
  }
  if ( (v23 & 0x70) == 0x20 )
  {
    DWORD2(v91[2]) = 0x1000000;
    if ( a3 == 7 && (*(_BYTE *)(**(_QWORD **)(v19 + 72) + 62LL) & 0xC) == 4 )
    {
LABEL_217:
      LOBYTE(v14) = v14 | 4;
      v82 = v14;
    }
  }
  else
  {
    DWORD2(v91[2]) = 0x40000;
    if ( a3 == 3 && a5 >= 0x30 || a3 == 7 )
    {
      v68 = **(_QWORD **)(v19 + 72);
      if ( !*(_QWORD *)(v68 + 64) )
      {
        DWORD2(v91[2]) = 0x8000000;
        goto LABEL_24;
      }
      if ( a3 == 7 && (*(_BYTE *)(v68 + 62) & 0xC) == 4 )
        goto LABEL_217;
    }
  }
LABEL_24:
  if ( a3 != 2 )
  {
    v24 = 0x7FFFFFFFDLL;
LABEL_26:
    v25 = 0LL;
    goto LABEL_27;
  }
  v73 = *(__int64 **)(v19 + 72);
  v25 = *(_QWORD *)(*v73 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v25 )
    v25 = MiReferenceControlAreaFile(*v73);
  if ( !v25 )
    v25 = 1LL;
  v24 = 0x7FFFFFFFDLL;
LABEL_27:
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v26 = *(_DWORD *)(v19 + 48);
      if ( (v26 & 0x200000) != 0 || (v26 & 0x70) != 0x20 )
        goto LABEL_40;
      v27 = ***(_QWORD ***)(v19 + 72);
      v28 = *(_BYTE *)(v27 + 15);
      *(_QWORD *)&v92 = (*(unsigned int *)(v86 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v86 + 32) << 32)) << 12;
      *((_QWORD *)&v92 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 24), -1LL, -1LL);
      v29 = v93 & 0xFFFFFFC3 | (4 * (v28 & 0xF));
      LODWORD(v93) = v29;
      v19 = v86;
      if ( (*(_DWORD *)(v86 + 48) & 0xF80) == 0x80 )
        LODWORD(v93) = v29 | 2;
      if ( (unsigned int)MiVadMapsLargeImage(v86) )
      {
        LockedVadEvent = MiLocateLockedVadEvent(v30, 16);
        v22 = *(_QWORD *)(LockedVadEvent + 16);
        *(_QWORD *)&v92 = v81 + ((unsigned __int64)*(unsigned __int8 *)(LockedVadEvent + 8) << 16);
      }
      else
      {
        v22 = (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
            - (*(unsigned int *)(v33 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v33 + 32) << 32))
            + 1;
      }
      LOBYTE(v11) = (v32 & 0xFFF) != 0;
      v24 = v32 >> 12;
      if ( v22 < v24 + v11 )
      {
        v21 = v31 | 1u;
      }
      else
      {
        if ( (MiReadVadFlags2(v19) & 0x20) == 0 )
        {
LABEL_39:
          Process = (_KPROCESS *)Object;
          LOBYTE(v14) = v82;
LABEL_40:
          MiUnlockAndDereferenceVadShared(v19, v22, v21, v24);
          if ( (v14 & 1) != 0 )
          {
            KiUnstackDetachProcess((__int64)v99, 0);
            ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
          }
          v84 = 24;
          v34 = *(_QWORD *)v87;
          **(_OWORD **)v87 = v92;
          *(_QWORD *)(v34 + 16) = v93;
          if ( v88 )
            *v88 = 24LL;
          return 0LL;
        }
        v21 = (unsigned int)v21 | 0x40;
      }
      LODWORD(v93) = v21;
      goto LABEL_39;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)v91, v16, VadPageSize, v19);
      *((_QWORD *)&v91[1] + 1) = AddressSpan - *(_QWORD *)&v91[0];
    }
    MiUnlockAndDereferenceVadShared(v19, v22, v21, v24);
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      v70 = *(_QWORD *)v87;
      **(_OWORD **)v87 = v91[0];
      *(__m256i *)(v70 + 16) = *(__m256i *)&v91[1];
      if ( v88 )
        *v88 = 48LL;
      return 0LL;
    }
    if ( !v25 )
      return 3221225793LL;
    if ( v25 == 1 )
      return 3221225624LL;
    if ( (unsigned int)a5 < a5 )
    {
      ObfDereferenceObjectWithTag((PVOID)v25, 0x63536D4Du);
      return 3221225715LL;
    }
    BadAddresses = ObQueryNameStringMode((char *)v25, *(__int64 *)v87, a5, &v84, v83);
    ObfDereferenceObjectWithTag((PVOID)v25, 0x63536D4Du);
    if ( v88 )
      *v88 = v84;
    return BadAddresses;
  }
  v85 = 0;
  v36 = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
       - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
       + 1) << 12;
  if ( (*(unsigned int *)(v19 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v86 + 34) << 32)) >= 0x7FFFFFFFDLL )
    v37 = 0LL;
  else
    v37 = *(unsigned int *)(v86 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v86 + 34) << 32);
  v38 = v86;
  VadPageSize = MiGetVadPageSize(v86);
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)Object);
  v44 = 0LL;
  v45 = *(_DWORD *)(v38 + 48);
  if ( (v45 & 0x200000) != 0 )
  {
    v47 = v82;
    if ( (v82 & 0x10) != 0 )
    {
      MiGetAweVadPartition(v38);
      VadPageSize = MiGetAweVadPageSize(v38);
    }
    else
    {
      if ( (v45 & 0x800000) == 0 && (v45 & 0x180000u) < 0x100000 )
        goto LABEL_51;
      v71 = MiLocateLockedVadEvent(v38, 16);
      if ( v71 )
      {
        v44 = *(_QWORD *)(v71 + 24);
        if ( !v44 || PsReferencePartitionSafe(*(_QWORD *)(v71 + 24)) )
          goto LABEL_51;
        v42 = -1073740640;
        v85 = -1073740640;
      }
      v44 = 0LL;
    }
  }
  else
  {
    v46 = *(__int64 **)(v38 + 72);
    if ( v46 && *v46 )
      ProcessPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v46);
    v47 = v82;
  }
LABEL_51:
  if ( v42 < 0 )
    LODWORD(v86) = 0;
  else
    LODWORD(v86) = *ProcessPartition;
  if ( v44 )
    PsDereferencePartition(v44);
  v48 = (*(_DWORD *)(v38 + 48) >> 12) & 0x7F;
  MiUnlockAndDereferenceVadShared(v38, v39, v40, v41);
  if ( (v47 & 1) != 0 )
  {
    KiUnstackDetachProcess((__int64)v99, 0);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  result = (unsigned int)v85;
  if ( v85 >= 0 )
  {
    v49 = v37 << 12;
    v50 = v47 & 0xFD;
    v51 = *(_QWORD *)v87;
    **(_QWORD **)v87 = *((_QWORD *)&v91[0] + 1);
    *(_DWORD *)(v51 + 8) = v91[1];
    *(_QWORD *)(v51 + 16) = v36;
    if ( a3 != 7 )
    {
      v52 = DWORD2(v91[2]);
LABEL_60:
      *(_DWORD *)(v51 + 12) = v52;
      v53 = 24LL;
      v84 = 24;
      if ( a5 >= 0x20 )
      {
        *(_QWORD *)(v51 + 24) = v49;
        v53 = 32LL;
        v84 = 32;
      }
      if ( a5 >= 0x28 )
      {
        *(_QWORD *)(v51 + 32) = (unsigned __int16)v86;
        v53 = 40LL;
        v84 = 40;
      }
      if ( a5 >= 0x30 )
      {
        if ( v48 )
          v54 = (unsigned int)(v48 - 1);
        else
          v54 = 0xFFFFFFFFLL;
        *(_QWORD *)(v51 + 40) = v54;
        v84 = 48;
        v53 = 48LL;
      }
      if ( v88 )
        *v88 = v53;
      return 0LL;
    }
    *(_DWORD *)(v51 + 12) = 0;
    if ( DWORD2(v91[2]) == 0x20000 )
    {
      v55 = 1;
      *(_DWORD *)(v51 + 12) = 1;
    }
    else if ( (v50 & 8) != 0 )
    {
      *(_DWORD *)(v51 + 12) = 16;
      v55 = 16;
    }
    else if ( DWORD2(v91[2]) == 0x40000 )
    {
      *(_DWORD *)(v51 + 12) = 2;
      v55 = 2;
    }
    else if ( DWORD2(v91[2]) == 0x1000000 )
    {
      *(_DWORD *)(v51 + 12) = 4;
      v55 = 4;
    }
    else
    {
      v55 = 0;
      if ( DWORD2(v91[2]) == 0x8000000 )
      {
        *(_DWORD *)(v51 + 12) = 8;
        v55 = 8;
      }
    }
    switch ( VadPageSize )
    {
      case 0x10uLL:
        v55 |= 0x80u;
        break;
      case 0x200uLL:
        v55 |= 0x800u;
        break;
      case 0x40000uLL:
        v55 |= 0x1000u;
        break;
      default:
        goto LABEL_79;
    }
    *(_DWORD *)(v51 + 12) = v55;
LABEL_79:
    v56 = v55 | (32 * (v50 & 0x20));
    *(_DWORD *)(v51 + 12) = v56;
    v57 = v56 | (32 * (v50 & 0x10));
    *(_DWORD *)(v51 + 12) = v57;
    v58 = v57 | (8 * (v50 & 4));
    *(_DWORD *)(v51 + 12) = v58;
    v59 = v58 | v50 & 0x40;
    *(_DWORD *)(v51 + 12) = v59;
    v52 = v59 | (2 * (v50 & 0x80));
    goto LABEL_60;
  }
  return result;
}
