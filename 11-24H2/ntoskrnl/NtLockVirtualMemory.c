/*
 * XREFs of NtLockVirtualMemory @ 0x1403DBC30
 * Callers:
 *     <none>
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiUnlockVa @ 0x1403DB604 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     MiVadPagesTradable @ 0x1403DD010 (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1409DE190 (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  void *Pool; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r11
  unsigned __int64 Address; // rax
  unsigned __int64 v13; // r11
  unsigned __int64 i; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  char *v19; // r14
  char v20; // r8
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r10
  __int64 v23; // rsi
  unsigned __int64 v24; // r11
  __int64 v25; // r8
  _QWORD *v26; // r9
  __int64 v27; // r8
  _QWORD *v28; // r9
  unsigned __int64 v29; // rax
  char v30; // al
  BOOL v31; // esi
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 NextPageTable; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  NTSTATUS v44; // esi
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rbx
  int v50; // r12d
  __int64 v51; // r8
  _QWORD *v52; // r9
  __int64 v53; // r8
  _QWORD *v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int8 v58; // [rsp+40h] [rbp-128h]
  unsigned int v59; // [rsp+44h] [rbp-124h]
  unsigned __int64 v60; // [rsp+48h] [rbp-120h]
  char v61; // [rsp+50h] [rbp-118h]
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  unsigned __int64 NextVad; // [rsp+60h] [rbp-108h]
  int v64; // [rsp+68h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-F8h]
  BOOL v66; // [rsp+78h] [rbp-F0h]
  __int64 v67; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v68; // [rsp+88h] [rbp-E0h]
  PVOID P; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v70; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 v71; // [rsp+A0h] [rbp-C8h]
  __int64 v72; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-B8h]
  int v74; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-A8h]
  char *v76; // [rsp+C8h] [rbp-A0h]
  __int64 v77; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  PSIZE_T v79; // [rsp+E0h] [rbp-88h]
  PVOID *v80; // [rsp+E8h] [rbp-80h]
  _BYTE v81[48]; // [rsp+F0h] [rbp-78h] BYREF

  v79 = RegionSize;
  v80 = BaseAddress;
  memset(v81, 0, sizeof(v81));
  v72 = 0LL;
  v70 = 0LL;
  Object = 0LL;
  v5 = 0;
  v61 = 0;
  v64 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v70, (__int64)&v72, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = (v70 + v72 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v8 = v70 & 0xFFFFFFFFFFFFF000uLL;
  v60 = 0LL;
  Pool = (void *)MiAllocatePool(
                   0x40uLL,
                   8
                 * (((((v7 - (v70 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
                  + ((((unsigned __int8)((v7 - (v70 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
                   1802267981);
  P = Pool;
  if ( !Pool )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v81);
    v5 = 2;
    v61 = 2;
    v64 = 2;
  }
  v10 = ((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v68 = v10;
  v71 = v8;
  v75 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = MiLockVadRange(Object, v8, v7, 0LL);
  v73 = v11;
  if ( !v11 )
  {
    v44 = -1073741819;
    goto LABEL_68;
  }
  Address = (unsigned __int64)MiLocateAddress(v8);
  NextVad = Address;
  for ( i = 0LL; i < v13; i = v41 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      v44 = -1073741747;
      goto LABEL_68;
    }
    Address = MiGetNextVad(v40);
  }
  v66 = MiVadPureReserve(NextVad);
  v18 = 0LL;
  v19 = (char *)Object + 1024;
  v76 = (char *)Object + 1024;
  v77 = *((_QWORD *)Object + 130);
LABEL_9:
  v20 = MiLockWorkingSetShared((__int64)v19, v15, v16, v17);
  v58 = v20;
LABEL_10:
  v21 = 0xFFFFDE0000000000uLL;
  v22 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v8 > v7 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal((__int64)v19, v18);
        v20 = v58;
      }
      MiUnlockWorkingSetShared((__int64)v19, v20);
      MiUnlockVadRange(Object, v71, v73, 0LL);
      if ( (v5 & 2) != 0 )
        KiUnstackDetachProcess((__int64)v81, 0, v37, v38);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v39 = v70 & 0xFFFFFFFFFFFFF000uLL;
      *v79 = v7 - (v70 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v80 = (PVOID)v39;
      return (v5 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v8 >> 12 > (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
    {
      NextVad = MiGetNextVad(NextVad);
      v66 = MiVadPureReserve(NextVad);
    }
    BugCheckParameter2 = ((v8 >> 18) & 0x3FFFFFF8) + v22;
    if ( v18 != BugCheckParameter2 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal((__int64)v19, v18);
        v18 = 0LL;
        v20 = v58;
      }
      if ( v66 )
      {
        NextPageTable = MiGetNextPageTable(v10, v75, v20, 0, &v74);
        if ( NextPageTable )
          v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v10 )
        {
          v44 = -1073741819;
          goto LABEL_62;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v10, (*(_DWORD *)(NextVad + 48) >> 12) & 0x7F, v20, 0);
        v18 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v21 = 0xFFFFDE0000000000uLL;
    }
    if ( (*(_QWORD *)v10 & 1) == 0 )
    {
      MiUnlockPageTableInternal((__int64)v19, v18);
      v18 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v19, v58);
      goto LABEL_9;
    }
    v23 = v21 + 48 * ((*(_QWORD *)v10 >> 12) & 0xFFFFFFFFFFLL);
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v8) & 0xF) == 8 )
    {
      v5 |= 1u;
      v61 = v5;
      v64 = v5;
      v29 = v60;
      goto LABEL_27;
    }
    if ( *((_QWORD *)v19 + 14) <= (unsigned __int64)(*(_QWORD *)(v77 + 32) + 6LL) )
    {
      v44 = -1073741663;
      goto LABEL_62;
    }
    if ( *(__int64 *)(v23 + 40) < 0 )
    {
      if ( !(unsigned int)MiLockPageTablePage(v23, 1) )
        goto LABEL_95;
      v24 = 0xFFFFDE0000000000uLL;
    }
    BugCheckParameter2 = v24 + 48 * ((*(_QWORD *)BugCheckParameter2 >> 12) & 0xFFFFFFFFFFLL);
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v67 = 0LL;
    if ( (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
    {
      if ( *(__int64 *)(v23 + 40) < 0 )
      {
        v67 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiChargeCommit(v67, 1uLL, 0) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2, v42, v26);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1, v53, v54);
          v44 = -1073741523;
          goto LABEL_62;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v67 + 19632), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v23 + 16)) )
    {
      MiLockPageAndSetDirty(v23, 1LL, v43, (__int64)v26);
    }
    LOBYTE(v26) = 8;
    if ( !(unsigned int)MiSetVaAgeList((__int64)v19, v8, 1LL, (__int64)v26) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2, v27, v28);
      if ( *(__int64 *)(v23 + 40) < 0 )
      {
        MiUnlockPageTableCharges(48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1, v51, v52);
        if ( (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v67, 1LL, 0);
      }
      goto LABEL_95;
    }
    LODWORD(v67) = MiGetEffectivePagePriorityThread(CurrentThread);
    v59 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v59 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v59);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
    MiUpdatePfnPriority(v23, (unsigned int)v67, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = v60;
    _bittestandset64((signed __int64 *)P, v60);
LABEL_27:
    v60 = v29 + 1;
    v30 = v68 + 8;
    v68 += 8LL;
    v8 += 4096LL;
    v31 = 0;
    if ( v8 <= v7 && (v30 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended((__int64)v19, 0)
        || (unsigned int)MiPageTableLockIsContended((__int64)v19, v18) )
      {
LABEL_29:
        MiUnlockPageTableInternal((__int64)v19, v18);
        MiUnlockWorkingSetShared((__int64)v19, v58);
        v18 = 0LL;
        MiLockWorkingSetShared((__int64)v19, v33, v34, v35);
        v10 = v68;
        v20 = v58;
        goto LABEL_10;
      }
      v31 = KeShouldYieldProcessor() != 0;
    }
    v32 = !v31;
    v10 = v68;
    v20 = v58;
    v22 = 0xFFFFF6FB40000000uLL;
    v21 = 0xFFFFDE0000000000uLL;
    if ( !v32 )
      goto LABEL_29;
  }
  if ( *(__int64 *)(v23 + 40) < 0 )
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1, v25, v26);
LABEL_95:
  v44 = -1073741670;
LABEL_62:
  if ( v18 )
  {
    MiUnlockPageTableInternal((__int64)v19, v18);
    v18 = 0LL;
  }
  if ( v60 )
  {
    v47 = v60 - 1;
    NextVad = v60 - 1;
    v48 = (v60 << 12) + v71 - 4096;
    v49 = v60;
    while ( 1 )
    {
      if ( _bittest64((const signed __int64 *)P, v47) == 1 )
      {
        if ( v18 != ((v48 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v18 )
            MiUnlockPageTableInternal((__int64)v19, v18);
          v18 = ((v48 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockNestedPageTable((__int64)v19, v18);
        }
        MiUnlockVa((__int64)v19, v48);
        v47 = NextVad;
      }
      v50 = 0;
      if ( (v47 & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)v19, 0)
          || v18 && (unsigned int)MiPageTableLockIsContended((__int64)v19, v18) )
        {
LABEL_102:
          if ( v18 )
          {
            MiUnlockPageTableInternal((__int64)v19, v18);
            v18 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)v19, v58);
          MiLockWorkingSetShared((__int64)v19, v55, v56, v57);
          v47 = NextVad;
          goto LABEL_78;
        }
        if ( KeShouldYieldProcessor() )
          v50 = 1;
        v47 = NextVad;
      }
      if ( v50 )
        goto LABEL_102;
LABEL_78:
      v48 -= 4096LL;
      NextVad = --v47;
      if ( !--v49 )
      {
        LOBYTE(v5) = v61;
        break;
      }
    }
  }
  if ( v18 )
    MiUnlockPageTableInternal((__int64)v19, v18);
  MiUnlockWorkingSetShared((__int64)v19, v58);
  Pool = P;
  v11 = v73;
LABEL_68:
  MiUnlockVadRange(Object, v71, v11, 0LL);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v81, 0, v45, v46);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(Pool, 0);
  return v44;
}
