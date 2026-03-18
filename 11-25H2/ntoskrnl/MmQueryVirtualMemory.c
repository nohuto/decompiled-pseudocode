/*
 * XREFs of MmQueryVirtualMemory @ 0x1409D0670
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x14020A380 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     NtQueryVirtualMemory @ 0x1409D0630 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x140ABD794 (PfpVirtualQuery.c)
 * Callees:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiGetWorkingSetInfo @ 0x1402D41D4 (MiGetWorkingSetInfo.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiGetVadPageSize @ 0x14042F920 (MiGetVadPageSize.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14043CF80 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiIsSoftwareEnclave @ 0x14044F474 (MiIsSoftwareEnclave.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     MiQueryAddressSpan @ 0x14045AA68 (MiQueryAddressSpan.c)
 *     MiQueryImageExtensionInformation @ 0x140479334 (MiQueryImageExtensionInformation.c)
 *     MiSetBasicInfoPartitionId @ 0x14047CDD0 (MiSetBasicInfoPartitionId.c)
 *     VslQueryVirtualMemory @ 0x1404B0B98 (VslQueryVirtualMemory.c)
 *     MiGetAweVadPartition @ 0x1404B3A84 (MiGetAweVadPartition.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1406A8740 (RtlCompareMemoryUlong.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1409D1878 (MiIsUserQueryVmCallerTrusted.c)
 *     MmQueryBadAddresses @ 0x1409D19C8 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     MiGetAweVadPageSize @ 0x1409D236C (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int a7)
{
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 PreviousMode; // di
  unsigned __int64 v13; // r12
  int v14; // ebx
  int v15; // eax
  unsigned __int64 v16; // r13
  ULONG_PTR v17; // rax
  _QWORD *p_Lock; // rcx
  int ImageExtensionInformation; // edi
  unsigned int *v20; // rdi
  unsigned int v21; // eax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r12
  PVOID v24; // r8
  int v25; // r10d
  unsigned __int16 *ProcessPartition; // r11
  __int64 v27; // rdi
  int v28; // ecx
  __int64 *v29; // rax
  char v30; // bl
  int v31; // edi
  __int64 result; // rax
  unsigned __int64 v33; // r12
  char v34; // bl
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  char v46; // cl
  int v47; // edx
  char v48; // al
  char v49; // cl
  unsigned __int64 AddressSpan; // rax
  __int64 v51; // rcx
  int MemoryPhysicalContiguity; // ebx
  unsigned __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rdx
  char v56; // cl
  int v57; // r8d
  __int64 v58; // rcx
  int v59; // r8d
  unsigned __int64 v60; // r9
  __int64 v61; // r11
  unsigned __int64 v62; // rdx
  char VadFlags2; // al
  int v64; // r8d
  PVOID v65; // rsi
  PVOID v66; // rdi
  int v67; // edx
  __int64 *v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r8
  unsigned __int64 v72; // r8
  __int64 v73; // rbx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v75; // r10
  __int64 v76; // r8
  char v77; // [rsp+40h] [rbp-158h]
  char v78; // [rsp+44h] [rbp-154h]
  struct _KTHREAD *Object; // [rsp+48h] [rbp-150h]
  _QWORD *Objecta; // [rsp+48h] [rbp-150h]
  unsigned __int16 Objectb; // [rsp+48h] [rbp-150h]
  unsigned int v82; // [rsp+54h] [rbp-144h] BYREF
  int v83; // [rsp+58h] [rbp-140h]
  _QWORD *v84; // [rsp+60h] [rbp-138h]
  PVOID v85; // [rsp+68h] [rbp-130h] BYREF
  PVOID v86; // [rsp+70h] [rbp-128h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-120h]
  PVOID VadPageSize; // [rsp+80h] [rbp-118h]
  unsigned __int64 v89; // [rsp+88h] [rbp-110h]
  unsigned __int64 v90; // [rsp+90h] [rbp-108h]
  _OWORD v91[3]; // [rsp+98h] [rbp-100h] BYREF
  __int128 v92; // [rsp+C8h] [rbp-D0h]
  __int64 v93; // [rsp+D8h] [rbp-C0h]
  __int64 P; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v95; // [rsp+E8h] [rbp-B0h] BYREF
  __int128 Source; // [rsp+F8h] [rbp-A0h] BYREF
  __int128 v97; // [rsp+108h] [rbp-90h]
  __int128 v98; // [rsp+118h] [rbp-80h]
  _BYTE v99[48]; // [rsp+128h] [rbp-70h] BYREF

  v9 = a2;
  v89 = a2;
  BugCheckParameter1 = a1;
  v84 = a6;
  v10 = 0LL;
  v82 = 0;
  v86 = 0LL;
  v85 = 0LL;
  P = 0LL;
  memset(v91, 0, sizeof(v91));
  v92 = 0LL;
  v93 = 0LL;
  memset(v99, 0, sizeof(v99));
  v77 = 0;
  VadPageSize = 0LL;
  v90 = 0LL;
  v95 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v78 = PreviousMode;
  if ( a3 == 2 )
  {
LABEL_2:
    v13 = a5;
LABEL_3:
    v14 = 0;
    goto LABEL_4;
  }
  if ( a3 == 8 )
  {
LABEL_73:
    v13 = a5;
    if ( a5 >= 0x30 )
      goto LABEL_3;
    return 3221225476LL;
  }
  if ( a3 != 4 )
  {
    a2 = 0x140000000uLL;
    switch ( a3 )
    {
      case 0:
        goto LABEL_73;
      case 1:
        v13 = a5;
        if ( a5 < 8 )
          return 3221225476LL;
        v14 = 256;
        v77 = 0;
        goto LABEL_4;
      case 3:
      case 6:
        v13 = a5;
        if ( a5 >= 0x18 )
          goto LABEL_3;
        return 3221225476LL;
      case 5:
        v13 = a5;
        if ( a5 >= 8 )
          goto LABEL_3;
        return 3221225476LL;
      case 7:
        v13 = a5;
        if ( a5 < 0x20 )
          return 3221225476LL;
        goto LABEL_3;
      case 11:
        v13 = a5;
        if ( a5 < 0x28 )
          return 3221225476LL;
        v14 = 256;
        v77 = 0;
        goto LABEL_4;
      case 12:
        if ( !v9 )
          goto LABEL_2;
        return 3221225485LL;
      case 13:
        return 3221225659LL;
      case 14:
        v13 = a5;
        if ( a5 < 0x18 )
          return 3221225476LL;
        if ( v9 )
          goto LABEL_3;
        result = 3221225485LL;
        break;
      default:
        return 3221225475LL;
    }
    return result;
  }
  v13 = a5;
  if ( a5 < 0x10 )
    return 3221225476LL;
  v14 = 256;
  v77 = 0;
LABEL_4:
  if ( v14 == 256 && PreviousMode && !(unsigned int)MiIsUserQueryVmCallerTrusted(CurrentThread) )
    v15 = a7 | 0x40000000;
  else
    v15 = a7;
  v83 = v15;
  if ( PreviousMode )
  {
    if ( v13 )
    {
      v43 = a4;
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v44 = v13 + a4 - 1;
      if ( a4 > v44 || (v45 = 0x7FFFFFFF0000LL, v44 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      a2 = (v44 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v43 = *(_BYTE *)v43;
        v43 = (v43 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v43 != a2 );
      LOBYTE(v14) = 0;
    }
    else
    {
      v45 = 0x7FFFFFFF0000LL;
    }
    if ( v84 )
    {
      if ( (unsigned __int64)v84 < 0x7FFFFFFF0000LL )
        v45 = (__int64)v84;
      *(_QWORD *)v45 = *(_QWORD *)v45;
      LOBYTE(v14) = 0;
    }
  }
  if ( v9 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v16 = v9 & 0x7FFFFFFFF000LL;
  if ( a3 != 10 )
    goto LABEL_9;
  Source = *(_OWORD *)a4;
  v97 = *(_OWORD *)(a4 + 16);
  v98 = *(_OWORD *)(a4 + 32);
  v90 = *((_QWORD *)&v97 + 1);
  *((_QWORD *)&v97 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 )
    return 3221225485LL;
  a2 = v90;
  v71 = v90 - 1;
  if ( !v90 )
    v71 = 0LL;
  v72 = v89 + v71;
  if ( v72 < v89 || v72 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v90 = v16 + ((v90 + (v89 & 0xFFF) + 4095) & 0xFFFFFFFFFFFFF000uLL);
LABEL_9:
  v17 = BugCheckParameter1;
  if ( BugCheckParameter1 == -1LL )
  {
    p_Lock = &Object->ApcState.Process->Header.Lock;
    Objecta = p_Lock;
    v86 = p_Lock;
  }
  else
  {
    v67 = 1024;
    if ( (v83 & 0x40000000) == 0 )
      v67 = 4096;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               v67,
               (__int64)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &v86,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    p_Lock = v86;
    Objecta = v86;
    if ( (*((_DWORD *)v86 + 383) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v86, 0x6D566D4Du);
      return 3221225506LL;
    }
    v17 = BugCheckParameter1;
  }
  switch ( a3 )
  {
    case 11:
      MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(p_Lock, a4, v13, PreviousMode);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v84 )
          *v84 = v13;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 12:
      MemoryPhysicalContiguity = MmQueryBadAddresses((_DWORD)p_Lock, 12, a4, v13, (__int64)v84);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
      return (unsigned int)MemoryPhysicalContiguity;
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList((ULONG_PTR)p_Lock, v83, a4, v13);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v84 )
          *v84 = v13;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 1:
      MemoryPhysicalContiguity = MiGetWorkingSetInfo((__int64)p_Lock, v83, a4, v13, &P);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v84 )
          *v84 = 8 * P + 8;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 5:
      v73 = p_Lock[213];
      if ( v17 != -1LL )
        ObfDereferenceObjectWithTag(v86, 0x6D566D4Du);
      *(_QWORD *)a4 = v73;
      if ( v84 )
        *v84 = 8LL;
      return 0LL;
  }
  if ( v17 != -1LL )
  {
    KiStackAttachProcess((_KPROCESS *)p_Lock, 0, (__int64)v99);
    LOBYTE(v14) = v14 | 1;
    v77 = v14;
  }
  if ( a3 == 8 && Objecta[46] && (int)VslQueryVirtualMemory((__int64)Objecta, v89, v91) >= 0 )
  {
    if ( LODWORD(v91[2]) == 4096 )
      WORD2(v91[1]) = *(_WORD *)MiGetProcessPartition((__int64)Objecta);
    else
      WORD2(v91[1]) = 0;
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0LL);
      ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
    }
    *(_OWORD *)a4 = v91[0];
    *(__m256i *)(a4 + 16) = *(__m256i *)&v91[1];
    if ( v84 )
      *v84 = 48LL;
    return 0LL;
  }
  if ( a3 == 14 )
  {
    ImageExtensionInformation = MiQueryImageExtensionInformation((__int128 *)a4, a2, v89, v84);
    goto LABEL_175;
  }
  ImageExtensionInformation = MiReturnLockedVadOrNextVa(v89, &v85, &v95);
  if ( ImageExtensionInformation < 0 )
  {
LABEL_175:
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0LL);
      ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
    }
    return (unsigned int)ImageExtensionInformation;
  }
  v20 = (unsigned int *)v85;
  if ( !v85 )
  {
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0LL);
      ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      v70 = v95 - v16;
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_DWORD *)(a4 + 16) = 0;
      *(_QWORD *)a4 = v16;
      *(_QWORD *)(a4 + 24) = v70;
      *(_DWORD *)(a4 + 32) = 0x10000;
      *(_QWORD *)(a4 + 36) = 1LL;
      MiSetBasicInfoPartitionId(a4, 0);
      if ( v84 )
        *v84 = 48LL;
      return 0LL;
    }
    return 3221225793LL;
  }
  memset((char *)&v91[1] + 4, 0, 20);
  HIDWORD(v91[2]) = 0;
  *(_QWORD *)&v91[0] = v16;
  *((_QWORD *)&v91[0] + 1) = (*((unsigned int *)v85 + 6) | ((unsigned __int64)*((unsigned __int8 *)v85 + 32) << 32)) << 12;
  LODWORD(v91[1]) = MmProtectToValue[(v20[12] >> 7) & 0x1F] | MI_GET_GRAPHICS_PROTECTION_FROM_VAD((__int64)v85);
  v21 = v20[12];
  if ( (v21 & 0x200000) == 0 )
  {
    if ( (v21 & 0x70) == 0x20 )
    {
      DWORD2(v91[2]) = 0x1000000;
      if ( a3 == 7 && (*(_BYTE *)(**((_QWORD **)v20 + 9) + 62LL) & 0xC) == 4 )
      {
LABEL_216:
        LOBYTE(v14) = v14 | 4;
        v77 = v14;
      }
    }
    else
    {
      DWORD2(v91[2]) = 0x40000;
      if ( a3 == 3 && v13 >= 0x30 || a3 == 7 )
      {
        v51 = **((_QWORD **)v20 + 9);
        if ( !*(_QWORD *)(v51 + 64) )
        {
          DWORD2(v91[2]) = 0x8000000;
          goto LABEL_25;
        }
        if ( a3 == 7 && (*(_BYTE *)(v51 + 62) & 0xC) == 4 )
          goto LABEL_216;
      }
    }
LABEL_25:
    if ( a3 == 2 )
    {
      v68 = (__int64 *)*((_QWORD *)v20 + 9);
      v69 = *(_QWORD *)(*v68 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v69 )
        v69 = MiReferenceControlAreaFile(*v68);
      if ( !v69 )
        v69 = 1LL;
      VadPageSize = (PVOID)v69;
    }
    goto LABEL_26;
  }
  DWORD2(v91[2]) = 0x20000;
  if ( MiIsSoftwareEnclave((__int64)v20) )
  {
    LOBYTE(v14) = v14 | 0x40;
    v77 = v14;
  }
  v46 = v77 | 0x80;
  if ( (v20[13] | ((unsigned __int64)*((unsigned __int8 *)v85 + 34) << 32)) != 0x7FFFFFFFDLL )
    v46 = v14;
  v20 = (unsigned int *)v85;
  v47 = *((_DWORD *)v85 + 12) & 0x70;
  v48 = v46 | 8;
  if ( v47 != 16 )
    v48 = v46;
  v49 = v48 | 0x10;
  if ( v47 != 48 )
    v49 = v48;
  LOBYTE(v14) = v49 | 0x20;
  if ( (*((_DWORD *)v85 + 12) & 0x400000) == 0 )
    LOBYTE(v14) = v49;
  v77 = v14;
  Objecta = v86;
LABEL_26:
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v54 = v20[12];
      if ( (v54 & 0x200000) != 0 || (v54 & 0x70) != 0x20 )
      {
        v65 = Objecta;
      }
      else
      {
        v55 = ***((_QWORD ***)v20 + 9);
        v56 = *(_BYTE *)(v55 + 15);
        *(_QWORD *)&v92 = (*((unsigned int *)v85 + 6) | ((unsigned __int64)*((unsigned __int8 *)v85 + 32) << 32)) << 12;
        *((_QWORD *)&v92 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 24), -1LL, -1LL);
        v57 = v93 & 0xFFFFFFC3 | (4 * (v56 & 0xF));
        LODWORD(v93) = v57;
        v20 = (unsigned int *)v85;
        if ( (*((_DWORD *)v85 + 12) & 0xF80) == 0x80 )
          LODWORD(v93) = v57 | 2;
        if ( (unsigned int)MiVadMapsLargeImage((__int64)v85) )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v58, 16);
          v62 = *(_QWORD *)(LockedVadEvent + 16);
          *(_QWORD *)&v92 = v75 + ((unsigned __int64)*(unsigned __int8 *)(LockedVadEvent + 8) << 16);
        }
        else
        {
          v62 = (v20[7] | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32))
              - (*(unsigned int *)(v61 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 32) << 32))
              + 1;
        }
        LOBYTE(v10) = (v60 & 0xFFF) != 0;
        if ( v62 < (v60 >> 12) + v10 )
        {
          LODWORD(v93) = v59 | 1;
          v65 = v86;
          LOBYTE(v14) = v77;
        }
        else
        {
          VadFlags2 = MiReadVadFlags2((__int64)v20);
          v65 = v86;
          LOBYTE(v14) = v77;
          if ( (VadFlags2 & 0x20) != 0 )
            LODWORD(v93) = v64 | 0x40;
        }
      }
      MiUnlockAndDereferenceVadShared(v20);
      if ( (v14 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v99, 0LL);
        ObfDereferenceObjectWithTag(v65, 0x6D566D4Du);
      }
      v82 = 24;
      *(_OWORD *)a4 = v92;
      *(_QWORD *)(a4 + 16) = v93;
      if ( v84 )
        *v84 = 24LL;
      return 0LL;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)v91, v16, v90, (ULONG_PTR)v20);
      *((_QWORD *)&v91[1] + 1) = AddressSpan - *(_QWORD *)&v91[0];
    }
    MiUnlockAndDereferenceVadShared(v20);
    if ( (v14 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v99, 0LL);
      ObfDereferenceObjectWithTag(Objecta, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      *(_OWORD *)a4 = v91[0];
      *(__m256i *)(a4 + 16) = *(__m256i *)&v91[1];
      if ( v84 )
        *v84 = 48LL;
      return 0LL;
    }
    v66 = VadPageSize;
    if ( !VadPageSize )
      return 3221225793LL;
    if ( VadPageSize == (PVOID)1 )
      return 3221225624LL;
    if ( (unsigned int)v13 < v13 )
    {
      ObfDereferenceObjectWithTag(VadPageSize, 0x63536D4Du);
      return 3221225715LL;
    }
    MemoryPhysicalContiguity = ObQueryNameStringMode((char *)VadPageSize, a4, v13, &v82, v78);
    ObfDereferenceObjectWithTag(v66, 0x63536D4Du);
    if ( v84 )
      *v84 = v82;
    return (unsigned int)MemoryPhysicalContiguity;
  }
  v83 = 0;
  v22 = ((v20[7] | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32))
       - (v20[6] | ((unsigned __int64)*((unsigned __int8 *)v20 + 32) << 32))
       + 1) << 12;
  if ( (v20[13] | ((unsigned __int64)*((unsigned __int8 *)v85 + 34) << 32)) >= 0x7FFFFFFFDLL )
    v23 = 0LL;
  else
    v23 = *((unsigned int *)v85 + 13) | ((unsigned __int64)*((unsigned __int8 *)v85 + 34) << 32);
  VadPageSize = (PVOID)MiGetVadPageSize((__int64)v85);
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)v86);
  v27 = 0LL;
  v28 = *((_DWORD *)v24 + 12);
  if ( (v28 & 0x200000) != 0 )
  {
    v30 = v77;
    if ( (v77 & 0x10) != 0 )
    {
      MiGetAweVadPartition((__int64)v24);
      VadPageSize = (PVOID)MiGetAweVadPageSize(v76);
      v24 = v85;
    }
    else
    {
      if ( (v28 & 0x800000) == 0 && (v28 & 0x180000u) < 0x100000 )
        goto LABEL_32;
      v53 = MiLocateLockedVadEvent((__int64)v24, 16);
      if ( v53 )
      {
        v27 = *(_QWORD *)(v53 + 24);
        if ( !v27 || PsReferencePartitionSafe(*(_QWORD *)(v53 + 24)) )
          goto LABEL_32;
        v25 = -1073740640;
        v83 = -1073740640;
      }
      v27 = 0LL;
    }
  }
  else
  {
    v29 = (__int64 *)*((_QWORD *)v24 + 9);
    if ( v29 && *v29 )
      ProcessPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v29);
    v30 = v77;
  }
LABEL_32:
  if ( v25 < 0 )
    Objectb = 0;
  else
    Objectb = *ProcessPartition;
  if ( v27 )
  {
    PsDereferencePartition(v27);
    v24 = v85;
  }
  v31 = (*((_DWORD *)v24 + 12) >> 12) & 0x7F;
  MiUnlockAndDereferenceVadShared(v24);
  if ( (v30 & 1) != 0 )
  {
    KiUnstackDetachProcess((__int64)v99, 0LL);
    ObfDereferenceObjectWithTag(v86, 0x6D566D4Du);
  }
  result = (unsigned int)v83;
  if ( v83 >= 0 )
  {
    v33 = v23 << 12;
    v34 = v30 & 0xFD;
    *(_QWORD *)a4 = *((_QWORD *)&v91[0] + 1);
    *(_DWORD *)(a4 + 8) = v91[1];
    *(_QWORD *)(a4 + 16) = v22;
    if ( a3 != 7 )
    {
      v35 = DWORD2(v91[2]);
LABEL_41:
      *(_DWORD *)(a4 + 12) = v35;
      v36 = 24LL;
      v82 = 24;
      if ( a5 >= 0x20 )
      {
        *(_QWORD *)(a4 + 24) = v33;
        v36 = 32LL;
        v82 = 32;
      }
      if ( a5 >= 0x28 )
      {
        *(_QWORD *)(a4 + 32) = Objectb;
        v36 = 40LL;
        v82 = 40;
      }
      if ( a5 >= 0x30 )
      {
        if ( v31 )
          v37 = (unsigned int)(v31 - 1);
        else
          v37 = 0xFFFFFFFFLL;
        *(_QWORD *)(a4 + 40) = v37;
        v82 = 48;
        v36 = 48LL;
      }
      if ( v84 )
        *v84 = v36;
      return 0LL;
    }
    *(_DWORD *)(a4 + 12) = 0;
    if ( DWORD2(v91[2]) == 0x20000 )
    {
      v38 = 1;
      *(_DWORD *)(a4 + 12) = 1;
    }
    else if ( (v34 & 8) != 0 )
    {
      *(_DWORD *)(a4 + 12) = 16;
      v38 = 16;
    }
    else if ( DWORD2(v91[2]) == 0x40000 )
    {
      *(_DWORD *)(a4 + 12) = 2;
      v38 = 2;
    }
    else if ( DWORD2(v91[2]) == 0x1000000 )
    {
      *(_DWORD *)(a4 + 12) = 4;
      v38 = 4;
    }
    else
    {
      v38 = 0;
      if ( DWORD2(v91[2]) == 0x8000000 )
      {
        *(_DWORD *)(a4 + 12) = 8;
        v38 = 8;
      }
    }
    if ( VadPageSize == (PVOID)16 )
    {
      v38 |= 0x80u;
    }
    else if ( VadPageSize == (PVOID)512 )
    {
      v38 |= 0x800u;
    }
    else
    {
      if ( VadPageSize != (PVOID)0x40000 )
        goto LABEL_60;
      v38 |= 0x1000u;
    }
    *(_DWORD *)(a4 + 12) = v38;
LABEL_60:
    v39 = v38 | (32 * (v34 & 0x20));
    *(_DWORD *)(a4 + 12) = v39;
    v40 = v39 | (32 * (v34 & 0x10));
    *(_DWORD *)(a4 + 12) = v40;
    v41 = v40 | (8 * (v34 & 4));
    *(_DWORD *)(a4 + 12) = v41;
    v42 = v41 | v34 & 0x40;
    *(_DWORD *)(a4 + 12) = v42;
    v35 = v42 | (2 * (v34 & 0x80));
    goto LABEL_41;
  }
  return result;
}
