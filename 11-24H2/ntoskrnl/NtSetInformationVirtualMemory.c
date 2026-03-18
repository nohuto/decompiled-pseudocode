/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1409E8FB0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiGetLargestPageIndex @ 0x140494B50 (MiGetLargestPageIndex.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     VmPrefetchVirtualAddresses @ 0x14079E6C8 (VmPrefetchVirtualAddresses.c)
 *     MiProcessRemoveFromWorkingSet @ 0x1407ED994 (MiProcessRemoveFromWorkingSet.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E9914 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x1409E9AAC (MiCfgMarkValidEntries.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetInformationVirtualMemory(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        __int64 a5,
        int a6)
{
  char v6; // r11
  char v8; // r15
  int v9; // ebx
  int valid; // edi
  int v11; // ecx
  struct _KTHREAD *CurrentThread; // r10
  _DWORD *p_LockNV; // r9
  char v14; // r10
  unsigned int v15; // eax
  __int64 v16; // r13
  __int64 v17; // r13
  __int64 result; // rax
  unsigned int v19; // r13d
  _QWORD *Pool; // r15
  unsigned __int64 v21; // r10
  _QWORD *i; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  unsigned __int64 v26; // r11
  int v27; // eax
  _BYTE *v28; // r14
  ULONG_PTR v29; // r13
  unsigned int v30; // r14d
  __int64 v31; // r9
  __int64 v32; // r8
  unsigned int v33; // r14d
  unsigned int v34; // r14d
  unsigned int v35; // r14d
  unsigned int v36; // r14d
  unsigned int v37; // r14d
  unsigned int LargestPageIndex; // eax
  unsigned int v39; // edi
  __int64 *v40; // rax
  KPROCESSOR_MODE PreviousMode; // [rsp+50h] [rbp-318h]
  _BYTE *P; // [rsp+58h] [rbp-310h]
  unsigned int v43; // [rsp+60h] [rbp-308h]
  char v45; // [rsp+78h] [rbp-2F0h]
  unsigned int v46; // [rsp+7Ch] [rbp-2ECh]
  PVOID Object; // [rsp+80h] [rbp-2E8h] BYREF
  PVOID v48; // [rsp+88h] [rbp-2E0h]
  int v49; // [rsp+90h] [rbp-2D8h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-2D0h]
  volatile void *Address[2]; // [rsp+A0h] [rbp-2C8h]
  ULONG_PTR v52[2]; // [rsp+B0h] [rbp-2B8h]
  __int64 v53; // [rsp+C0h] [rbp-2A8h]
  PVOID v54; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KTHREAD *v55; // [rsp+D0h] [rbp-298h]
  ULONG_PTR v56; // [rsp+D8h] [rbp-290h]
  void *Src; // [rsp+E0h] [rbp-288h]
  _OWORD v58[3]; // [rsp+F8h] [rbp-270h] BYREF
  _BYTE v59[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v60[256]; // [rsp+230h] [rbp-138h] BYREF

  v6 = (char)a4;
  Src = a4;
  v50 = a3;
  v56 = a1;
  Object = 0LL;
  memset(v58, 0, sizeof(v58));
  v49 = 0;
  v54 = 0LL;
  v8 = 0;
  v45 = 0;
  v9 = 0;
  P = v59;
  valid = 0;
  v43 = 0;
  if ( a2 >= 2 )
  {
    if ( a2 == 2 )
    {
      v11 = a6;
      if ( a6 == 40 )
        goto LABEL_10;
      return 3221225716LL;
    }
    if ( a2 != 3 && a2 != 4 && a2 != 5 && a2 - 6 > 1 )
      return 3221225712LL;
  }
  if ( !a5 )
    return 3221225715LL;
  v11 = a6;
  if ( a6 != 4 )
    return 3221225716LL;
  if ( a2 == 4 )
  {
    if ( !dword_140E374AC )
      return 3221225659LL;
    if ( a3 != 1 )
      return 3221225713LL;
  }
LABEL_10:
  if ( a3 - 1 > 0xFFFFFFFFFFFFFFELL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  v48 = p_LockNV;
  if ( a2 == 2 && (p_LockNV[468] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v8 = 1;
    v45 = v8;
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)v52 = 0LL;
  v53 = 0LL;
  v14 = CurrentThread->PreviousMode;
  PreviousMode = v14;
  if ( v14 )
  {
    if ( 16 * a3 && (v6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 == 2 )
    {
      if ( v11 && (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Address = *(_OWORD *)a5;
      *(_OWORD *)v52 = *(_OWORD *)(a5 + 16);
      v53 = *(_QWORD *)(a5 + 32);
      v15 = _mm_cvtsi128_si32(*(__m128i *)Address);
      v46 = v15;
      if ( !v15 )
        return 3221225715LL;
      v16 = v15;
      if ( HIDWORD(Address[0]) )
        return 3221225715LL;
      ProbeForWrite(Address[1], 4uLL, 4u);
      v17 = 16 * v16;
      if ( v17 )
      {
        if ( (v52[0] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v52[0] + v17 > 0x7FFFFFFF0000LL || v52[0] + v17 < v52[0] )
          v46 = (unsigned int)Address[0];
      }
      p_LockNV = v48;
      v14 = PreviousMode;
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v43 = *(_DWORD *)a5;
      v46 = (unsigned int)Address[0];
    }
    v19 = v46;
    goto LABEL_35;
  }
  if ( a2 != 2 )
  {
    v43 = *(_DWORD *)a5;
    v19 = (unsigned int)Address[0];
    goto LABEL_35;
  }
  *(_OWORD *)Address = *(_OWORD *)a5;
  *(_OWORD *)v52 = *(_OWORD *)(a5 + 16);
  v53 = *(_QWORD *)(a5 + 32);
  v19 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v19 || HIDWORD(Address[0]) )
    return 3221225715LL;
LABEL_35:
  if ( a1 == -1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 8, (__int64)PsProcessType, v14, 0x66506D4Du, &Object, 0LL, 0LL);
    valid = result;
    if ( (int)result < 0 )
      return result;
  }
  Pool = v60;
  v48 = v60;
  if ( v50 > 0x10 )
  {
    Pool = (_QWORD *)MiAllocatePool(0x40uLL, 16 * v50, 1917676877);
    v48 = Pool;
    if ( !Pool )
    {
      Pool = v60;
LABEL_121:
      v28 = v59;
      valid = -1073741670;
      goto LABEL_56;
    }
  }
  if ( a2 == 2 )
  {
    if ( v19 > 0x10 )
    {
      P = (_BYTE *)MiAllocatePool(0x40uLL, 16LL * v19, 1917676877);
      if ( !P )
        goto LABEL_121;
    }
    if ( v52[1] )
    {
      valid = ObpReferenceObjectByHandleWithTag(
                v52[1],
                1,
                (__int64)MmSectionObjectType,
                PreviousMode,
                0x66506D4Du,
                &v54,
                0LL,
                0LL);
      if ( valid < 0 )
        goto LABEL_55;
    }
  }
  memmove(Pool, Src, 16 * v50);
  if ( a2 == 2 )
    memmove(P, (const void *)v52[0], 16LL * v19);
  if ( v55->ApcState.Process != Object )
  {
    if ( a2 - 3 <= 1 )
    {
      valid = -1073741585;
LABEL_55:
      v28 = P;
      goto LABEL_56;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v58);
    v9 = 1;
  }
  v21 = 0LL;
  for ( i = Pool; i < &Pool[2 * v50]; i += 2 )
  {
    v23 = i[1];
    if ( !v23
      || (unsigned __int64)(v23 + *i - 1LL) < *i
      || (unsigned __int64)(v23 + *i - 1LL) > 0x7FFFFFFEFFFFLL
      || v21 + ((v23 + (unsigned __int64)(*(_DWORD *)i & 0xFFF) + 4095) >> 12) < v21 )
    {
      valid = -1073741582;
      goto LABEL_55;
    }
    v21 += (v23 + (unsigned __int64)(*(_DWORD *)i & 0xFFF) + 4095) >> 12;
  }
  if ( !a2 )
  {
    if ( (v43 & 0xFFFFFFFE) == 0 )
    {
      MiGetEffectivePagePriorityThread((__int64)v55);
      if ( (int)PsGetIoPriorityThread(v24) <= 1 )
        v25 |= 0x400u;
      v27 = MiPrefetchVirtualMemory(v26, (unsigned __int64)Pool, (__int64)Object + 1024, v25);
      goto LABEL_54;
    }
    goto LABEL_81;
  }
  v30 = a2 - 1;
  if ( !v30 )
  {
    if ( v43 <= 5 )
    {
      v31 = v43;
      v32 = 1LL;
LABEL_80:
      v27 = MiProcessVaRangesInfoClass(v50, Pool, v32, v31);
      goto LABEL_54;
    }
LABEL_81:
    valid = -1073741581;
    goto LABEL_55;
  }
  v33 = v30 - 1;
  if ( v33 )
  {
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 1 )
              goto LABEL_55;
            if ( (v43 & 0xFFFFFFFE) != 0 )
              goto LABEL_81;
            v27 = MiProcessRemoveFromWorkingSet(v50, (__int64)Pool, v43);
          }
          else
          {
            if ( v43 )
            {
              valid = -1073741811;
              goto LABEL_55;
            }
            v27 = VmPrefetchVirtualAddresses(Pool, v50, 1);
          }
        }
        else
        {
          LargestPageIndex = MiGetLargestPageIndex();
          v39 = LargestPageIndex;
          if ( LargestPageIndex < 3 )
          {
            v40 = &MiPageSizes[LargestPageIndex];
            do
            {
              if ( *v40 == v43 )
                break;
              ++v39;
              ++v40;
            }
            while ( v39 < 3 );
          }
          if ( v39 - 1 > 1 )
            goto LABEL_97;
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
          {
            valid = -1073741727;
            goto LABEL_55;
          }
          v27 = MiProcessVaContiguityInformation(Pool, v50, v39);
        }
LABEL_54:
        valid = v27;
        goto LABEL_55;
      }
    }
    else
    {
      if ( v43 )
        goto LABEL_81;
      if ( (*((_DWORD *)Object + 125) & 0x10) != 0 )
      {
        v31 = 0LL;
        v32 = 3LL;
        goto LABEL_80;
      }
    }
LABEL_97:
    valid = -1073741637;
    goto LABEL_55;
  }
  v28 = P;
  if ( v50 == 1 )
  {
    valid = MiCfgMarkValidEntries((_DWORD)Object, *Pool, Pool[1], (_DWORD)P, v19, (__int64)&v49, v45, (__int64)v54, v53);
    if ( v9 )
    {
      KiUnstackDetachProcess((__int64)v58, 0);
      LOBYTE(v9) = 0;
    }
    *(_DWORD *)Address[1] = v49;
    v29 = a1;
    goto LABEL_57;
  }
  valid = -1073741582;
LABEL_56:
  v29 = a1;
LABEL_57:
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v58, 0);
  if ( v54 )
    ObfDereferenceObjectWithTag(v54, 0x66506D4Du);
  if ( v29 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( Pool != (_QWORD *)v60 )
    ExFreePoolWithTag(Pool, 0);
  if ( v28 != v59 )
    ExFreePoolWithTag(v28, 0);
  return (unsigned int)valid;
}
