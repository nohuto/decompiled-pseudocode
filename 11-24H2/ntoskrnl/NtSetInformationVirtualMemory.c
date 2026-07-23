/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1409E3F70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiGetLargestPageIndex @ 0x14048F5E0 (MiGetLargestPageIndex.c)
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     VmPrefetchVirtualAddresses @ 0x14079E7D8 (VmPrefetchVirtualAddresses.c)
 *     MiProcessRemoveFromWorkingSet @ 0x1407EDF64 (MiProcessRemoveFromWorkingSet.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E48D4 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  char v6; // r11
  char v8; // r15
  int v9; // ebx
  NTSTATUS valid; // edi
  ULONG v11; // ecx
  struct _KTHREAD *CurrentThread; // r10
  _DWORD *p_LockNV; // r9
  char v14; // r10
  unsigned int v15; // eax
  __int64 v16; // r13
  __int64 v17; // r13
  NTSTATUS result; // eax
  unsigned int v19; // r13d
  _QWORD *Pool; // r15
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r10
  __int64 *v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  int v28; // r9d
  unsigned __int64 v29; // r11
  NTSTATUS v30; // eax
  _BYTE *v31; // r14
  HANDLE v32; // r13
  __int32 v33; // r14d
  __int64 v34; // r9
  __int64 v35; // r8
  __int32 v36; // r14d
  __int32 v37; // r14d
  __int32 v38; // r14d
  int v39; // r14d
  int v40; // r14d
  unsigned int LargestPageIndex; // eax
  unsigned int v42; // edi
  __int64 *v43; // rax
  KPROCESSOR_MODE PreviousMode; // [rsp+50h] [rbp-318h]
  _BYTE *P; // [rsp+58h] [rbp-310h]
  unsigned int v46; // [rsp+60h] [rbp-308h]
  char v48; // [rsp+78h] [rbp-2F0h]
  unsigned int v49; // [rsp+7Ch] [rbp-2ECh]
  PVOID Object; // [rsp+80h] [rbp-2E8h] BYREF
  PVOID v51; // [rsp+88h] [rbp-2E0h]
  int v52; // [rsp+90h] [rbp-2D8h] BYREF
  ULONG_PTR v53; // [rsp+98h] [rbp-2D0h]
  volatile void *Address[2]; // [rsp+A0h] [rbp-2C8h]
  ULONG_PTR v55[2]; // [rsp+B0h] [rbp-2B8h]
  __int64 v56; // [rsp+C0h] [rbp-2A8h]
  PVOID v57; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KTHREAD *v58; // [rsp+D0h] [rbp-298h]
  HANDLE v59; // [rsp+D8h] [rbp-290h]
  void *Src; // [rsp+E0h] [rbp-288h]
  _OWORD v61[3]; // [rsp+F8h] [rbp-270h] BYREF
  _BYTE v62[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v63[256]; // [rsp+230h] [rbp-138h] BYREF

  v6 = (char)VirtualAddresses;
  Src = VirtualAddresses;
  v53 = NumberOfEntries;
  v59 = ProcessHandle;
  Object = 0LL;
  memset(v61, 0, sizeof(v61));
  v52 = 0;
  v57 = 0LL;
  v8 = 0;
  v48 = 0;
  v9 = 0;
  P = v62;
  valid = 0;
  v46 = 0;
  if ( (unsigned int)VmInformationClass >= VmCfgCallTargetInformation )
  {
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v11 = VmInformationLength;
      if ( VmInformationLength == 40 )
        goto LABEL_10;
      return -1073741580;
    }
    if ( VmInformationClass != VmPageDirtyStateInformation
      && VmInformationClass != VmImageHotPatchInformation
      && VmInformationClass != VmPhysicalContiguityInformation
      && (unsigned int)(VmInformationClass - 6) > 1 )
    {
      return -1073741584;
    }
  }
  if ( !VmInformation )
    return -1073741581;
  v11 = VmInformationLength;
  if ( VmInformationLength != 4 )
    return -1073741580;
  if ( VmInformationClass == VmImageHotPatchInformation )
  {
    if ( !dword_140E375EC )
      return -1073741637;
    if ( NumberOfEntries != 1 )
      return -1073741583;
  }
LABEL_10:
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v58 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  v51 = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[468] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v8 = 1;
    v48 = v8;
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  v14 = CurrentThread->PreviousMode;
  PreviousMode = v14;
  if ( v14 )
  {
    if ( 16 * NumberOfEntries && (v6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( v11 && ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      *(_OWORD *)v55 = *((_OWORD *)VmInformation + 1);
      v56 = *((_QWORD *)VmInformation + 4);
      v15 = _mm_cvtsi128_si32(*(__m128i *)Address);
      v49 = v15;
      if ( !v15 )
        return -1073741581;
      v16 = v15;
      if ( HIDWORD(Address[0]) )
        return -1073741581;
      ProbeForWrite(Address[1], 4uLL, 4u);
      v17 = 16 * v16;
      if ( v17 )
      {
        if ( (v55[0] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v55[0] + v17 > 0x7FFFFFFF0000LL || v55[0] + v17 < v55[0] )
          v49 = (unsigned int)Address[0];
      }
      p_LockNV = v51;
      v14 = PreviousMode;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = *(_DWORD *)VmInformation;
      v49 = (unsigned int)Address[0];
    }
    v19 = v49;
    goto LABEL_35;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v46 = *(_DWORD *)VmInformation;
    v19 = (unsigned int)Address[0];
    goto LABEL_35;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  *(_OWORD *)v55 = *((_OWORD *)VmInformation + 1);
  v56 = *((_QWORD *)VmInformation + 4);
  v19 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v19 || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_35:
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               8,
               (__int64)PsProcessType,
               v14,
               0x66506D4Du,
               &Object,
               0LL,
               0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  Pool = v63;
  v51 = v63;
  if ( v53 > 0x10 )
  {
    Pool = (_QWORD *)MiAllocatePool(0x40uLL, 16 * v53, 1917676877);
    v51 = Pool;
    if ( !Pool )
    {
      Pool = v63;
LABEL_121:
      v31 = v62;
      valid = -1073741670;
      goto LABEL_56;
    }
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( v19 > 0x10 )
    {
      P = (_BYTE *)MiAllocatePool(0x40uLL, 16LL * v19, 1917676877);
      if ( !P )
        goto LABEL_121;
    }
    if ( v55[1] )
    {
      valid = ObpReferenceObjectByHandleWithTag(
                v55[1],
                1,
                (__int64)MmSectionObjectType,
                PreviousMode,
                0x66506D4Du,
                &v57,
                0LL,
                0LL);
      if ( valid < 0 )
        goto LABEL_55;
    }
  }
  memmove(Pool, Src, 16 * v53);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(P, (const void *)v55[0], 16LL * v19);
  if ( v58->ApcState.Process != Object )
  {
    if ( (unsigned int)(VmInformationClass - 3) <= 1 )
    {
      valid = -1073741585;
LABEL_55:
      v31 = P;
      goto LABEL_56;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v61);
    v9 = 1;
  }
  v23 = 0LL;
  v24 = Pool;
  v21 = (unsigned __int64)&Pool[2 * v53];
  while ( (unsigned __int64)v24 < v21 )
  {
    v25 = v24[1];
    if ( !v25
      || (v22 = *v24, v25 + *v24 - 1 < (unsigned __int64)*v24)
      || (v26 = v25 + v22 - 1, v22 = 0x7FFFFFFEFFFFLL, v26 > 0x7FFFFFFEFFFFLL)
      || v23 + ((v25 + (unsigned __int64)(*(_DWORD *)v24 & 0xFFF) + 4095) >> 12) < v23 )
    {
      valid = -1073741582;
      goto LABEL_55;
    }
    v23 += (v25 + (unsigned __int64)(*(_DWORD *)v24 & 0xFFF) + 4095) >> 12;
    v24 += 2;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( (v46 & 0xFFFFFFFE) == 0 )
    {
      MiGetEffectivePagePriorityThread((__int64)v58);
      if ( (int)PsGetIoPriorityThread(v27) <= 1 )
        v28 |= 0x400u;
      v30 = MiPrefetchVirtualMemory(v29, (__int64)Pool, (__int64)Object + 1024, v28);
      goto LABEL_54;
    }
    goto LABEL_81;
  }
  v33 = VmInformationClass - 1;
  if ( !v33 )
  {
    if ( v46 <= 5 )
    {
      v34 = v46;
      v35 = 1LL;
LABEL_80:
      v30 = MiProcessVaRangesInfoClass(v53, Pool, v35, v34);
      goto LABEL_54;
    }
LABEL_81:
    valid = -1073741581;
    goto LABEL_55;
  }
  v36 = v33 - 1;
  if ( v36 )
  {
    v37 = v36 - 1;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            if ( v40 != 1 )
              goto LABEL_55;
            if ( (v46 & 0xFFFFFFFE) != 0 )
              goto LABEL_81;
            v30 = MiProcessRemoveFromWorkingSet(v53, (__int64)Pool, v46);
          }
          else
          {
            if ( v46 )
            {
              valid = -1073741811;
              goto LABEL_55;
            }
            v30 = VmPrefetchVirtualAddresses(Pool, v53, 1);
          }
        }
        else
        {
          LargestPageIndex = MiGetLargestPageIndex();
          v42 = LargestPageIndex;
          if ( LargestPageIndex < 3 )
          {
            v43 = &MiPageSizes[LargestPageIndex];
            do
            {
              if ( *v43 == v46 )
                break;
              ++v42;
              ++v43;
            }
            while ( v42 < 3 );
          }
          if ( v42 - 1 > 1 )
            goto LABEL_97;
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
          {
            valid = -1073741727;
            goto LABEL_55;
          }
          v30 = MiProcessVaContiguityInformation(Pool, v53, v42);
        }
LABEL_54:
        valid = v30;
        goto LABEL_55;
      }
    }
    else
    {
      if ( v46 )
        goto LABEL_81;
      if ( (*((_DWORD *)Object + 125) & 0x10) != 0 )
      {
        v34 = 0LL;
        v35 = 3LL;
        goto LABEL_80;
      }
    }
LABEL_97:
    valid = -1073741637;
    goto LABEL_55;
  }
  v31 = P;
  if ( v53 == 1 )
  {
    valid = MiCfgMarkValidEntries((_DWORD)Object, *Pool, Pool[1], (_DWORD)P, v19, (__int64)&v52, v48, (__int64)v57, v56);
    if ( v9 )
    {
      KiUnstackDetachProcess((__int64)v61, 0, v21, v22);
      LOBYTE(v9) = 0;
    }
    *(_DWORD *)Address[1] = v52;
    v32 = ProcessHandle;
    goto LABEL_57;
  }
  valid = -1073741582;
LABEL_56:
  v32 = ProcessHandle;
LABEL_57:
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v61, 0, v21, v22);
  if ( v57 )
    ObfDereferenceObjectWithTag(v57, 0x66506D4Du);
  if ( v32 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( Pool != (_QWORD *)v63 )
    ExFreePoolWithTag(Pool, 0);
  if ( v31 != v62 )
    ExFreePoolWithTag(v31, 0);
  return valid;
}
