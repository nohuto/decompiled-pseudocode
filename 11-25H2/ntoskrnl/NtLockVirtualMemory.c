/*
 * XREFs of NtLockVirtualMemory @ 0x140388E00
 * Callers:
 *     <none>
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiLockPageTablePage @ 0x1402AC2E0 (MiLockPageTablePage.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiVadPagesTradable @ 0x1402CA000 (MiVadPagesTradable.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MiUnlockVa @ 0x1402CC790 (MiUnlockVa.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1409EAC40 (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 Address; // rax
  unsigned __int64 v13; // r11
  unsigned __int64 i; // r8
  unsigned __int64 v15; // rdi
  char *v16; // r14
  char v17; // r8
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  char v25; // al
  BOOL v26; // esi
  bool v27; // zf
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r8
  NTSTATUS v33; // esi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rbx
  int v37; // r12d
  unsigned __int8 v38; // [rsp+40h] [rbp-128h]
  int v39; // [rsp+44h] [rbp-124h]
  unsigned __int64 v40; // [rsp+48h] [rbp-120h]
  char v41; // [rsp+50h] [rbp-118h]
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  unsigned __int64 NextVad; // [rsp+60h] [rbp-108h]
  int v44; // [rsp+68h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-F8h]
  BOOL v46; // [rsp+78h] [rbp-F0h]
  __int64 v47; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v48; // [rsp+88h] [rbp-E0h]
  PVOID P; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v50; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp-C8h]
  __int64 v52; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-B8h]
  int v54; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-A8h]
  char *v56; // [rsp+C8h] [rbp-A0h]
  __int64 v57; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  PSIZE_T v59; // [rsp+E0h] [rbp-88h]
  PVOID *v60; // [rsp+E8h] [rbp-80h]
  _BYTE v61[48]; // [rsp+F0h] [rbp-78h] BYREF

  v59 = RegionSize;
  v60 = BaseAddress;
  memset(v61, 0, sizeof(v61));
  v52 = 0LL;
  v50 = 0LL;
  Object = 0LL;
  v5 = 0;
  v41 = 0;
  v44 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v50, (__int64)&v52, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = (v50 + v52 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v8 = v50 & 0xFFFFFFFFFFFFF000uLL;
  v40 = 0LL;
  Pool = (void *)MiAllocatePool(
                   0x40uLL,
                   8
                 * (((((v7 - (v50 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
                  + ((((unsigned __int8)((v7 - (v50 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
                   1802267981);
  P = Pool;
  if ( !Pool )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v61);
    v5 = 2;
    v41 = 2;
    v44 = 2;
  }
  v10 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = v10;
  v51 = v8;
  v55 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = MiLockVadRange(Object, v8, v7, 0LL);
  v53 = v11;
  if ( !v11 )
  {
    v33 = -1073741819;
    goto LABEL_68;
  }
  Address = (__int64)MiLocateAddress(v8);
  NextVad = Address;
  for ( i = 0LL; i < v13; i = v31 + 1 )
  {
    if ( !MiVadPagesTradable(Address) )
    {
      v33 = -1073741747;
      goto LABEL_68;
    }
    Address = MiGetNextVad(v30);
  }
  v46 = MiVadPureReserve(NextVad);
  v15 = 0LL;
  v16 = (char *)Object + 1024;
  v56 = (char *)Object + 1024;
  v57 = *((_QWORD *)Object + 130);
LABEL_9:
  v17 = MiLockWorkingSetShared((__int64)v16);
  v38 = v17;
LABEL_10:
  v18 = 0xFFFFDE0000000000uLL;
  v19 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v8 > v7 )
    {
      if ( v15 )
      {
        MiUnlockPageTable((__int64)v16, v15);
        v17 = v38;
      }
      MiUnlockWorkingSetShared((__int64)v16, v17);
      MiUnlockVadRange(Object, v51, v53, 0LL);
      if ( (v5 & 2) != 0 )
        KiUnstackDetachProcess((__int64)v61, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v29 = v50 & 0xFFFFFFFFFFFFF000uLL;
      *v59 = v7 - (v50 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v60 = (PVOID)v29;
      return (v5 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v8 >> 12 > (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
    {
      NextVad = MiGetNextVad(NextVad);
      v46 = MiVadPureReserve(NextVad);
    }
    BugCheckParameter2 = ((v8 >> 18) & 0x3FFFFFF8) + v19;
    if ( v15 != BugCheckParameter2 )
    {
      if ( v15 )
      {
        MiUnlockPageTable((__int64)v16, v15);
        v15 = 0LL;
        v17 = v38;
      }
      if ( v46 )
      {
        NextPageTable = MiGetNextPageTable(v10, v55, v17, 0, &v54);
        if ( NextPageTable )
          v15 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v10 )
        {
          v33 = -1073741819;
          goto LABEL_62;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v10, (*(_DWORD *)(NextVad + 48) >> 12) & 0x7F, v17, 0);
        v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v18 = 0xFFFFDE0000000000uLL;
    }
    if ( (*(_QWORD *)v10 & 1) == 0 )
    {
      MiUnlockPageTable((__int64)v16, v15);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v16, v38);
      goto LABEL_9;
    }
    v20 = v18 + 48 * ((*(_QWORD *)v10 >> 12) & 0xFFFFFFFFFFLL);
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v8) & 0xF) == 8 )
    {
      v5 |= 1u;
      v41 = v5;
      v44 = v5;
      v24 = v40;
      goto LABEL_27;
    }
    if ( *((_QWORD *)v16 + 14) <= (unsigned __int64)(*(_QWORD *)(v57 + 32) + 6LL) )
    {
      v33 = -1073741663;
      goto LABEL_62;
    }
    if ( *(__int64 *)(v20 + 40) < 0 )
    {
      if ( !(unsigned int)MiLockPageTablePage(v20, 1) )
        goto LABEL_95;
      v23 = 0xFFFFDE0000000000uLL;
    }
    BugCheckParameter2 = v23 + 48 * ((*(_QWORD *)BugCheckParameter2 >> 12) & 0xFFFFFFFFFFLL);
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v47 = 0LL;
    if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
    {
      if ( *(__int64 *)(v20 + 40) < 0 )
      {
        v47 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiChargeCommit(v47, 1uLL, 0) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
          v33 = -1073741523;
          goto LABEL_62;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v47 + 19632), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v20 + 16)) )
    {
      MiLockPageAndSetDirty(v20, 1LL, v32);
    }
    if ( !(unsigned int)MiSetVaAgeList((__int64)v16, v8, 1u, 8u) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      if ( *(__int64 *)(v20 + 40) < 0 )
      {
        MiUnlockPageTableCharges(48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
        if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v47, 1LL, 0);
      }
      goto LABEL_95;
    }
    LODWORD(v47) = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v39 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    MiUpdatePfnPriority(v20, (unsigned int)v47, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v24 = v40;
    _bittestandset64((signed __int64 *)P, v40);
LABEL_27:
    v40 = v24 + 1;
    v25 = v48 + 8;
    v48 += 8LL;
    v8 += 4096LL;
    v26 = 0;
    if ( v8 <= v7 && (v25 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended((__int64)v16, 0)
        || (unsigned int)MiPageTableLockIsContended((__int64)v16, v15) )
      {
LABEL_29:
        MiUnlockPageTable((__int64)v16, v15);
        MiUnlockWorkingSetShared((__int64)v16, v38);
        v15 = 0LL;
        MiLockWorkingSetShared((__int64)v16);
        v10 = v48;
        v17 = v38;
        goto LABEL_10;
      }
      v26 = KeShouldYieldProcessor() != 0;
    }
    v27 = !v26;
    v10 = v48;
    v17 = v38;
    v19 = 0xFFFFF6FB40000000uLL;
    v18 = 0xFFFFDE0000000000uLL;
    if ( !v27 )
      goto LABEL_29;
  }
  if ( *(__int64 *)(v20 + 40) < 0 )
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
LABEL_95:
  v33 = -1073741670;
LABEL_62:
  if ( v15 )
  {
    MiUnlockPageTable((__int64)v16, v15);
    v15 = 0LL;
  }
  if ( v40 )
  {
    v34 = v40 - 1;
    NextVad = v40 - 1;
    v35 = (v40 << 12) + v51 - 4096;
    v36 = v40;
    while ( 1 )
    {
      if ( _bittest64((const signed __int64 *)P, v34) == 1 )
      {
        if ( v15 != ((v35 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v15 )
            MiUnlockPageTable((__int64)v16, v15);
          v15 = ((v35 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockNestedPageTable((__int64)v16, v15, v21, v22);
        }
        MiUnlockVa((__int64)v16, v35);
        v34 = NextVad;
      }
      v37 = 0;
      if ( (v34 & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)v16, 0)
          || v15 && (unsigned int)MiPageTableLockIsContended((__int64)v16, v15) )
        {
LABEL_102:
          if ( v15 )
          {
            MiUnlockPageTable((__int64)v16, v15);
            v15 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)v16, v38);
          MiLockWorkingSetShared((__int64)v16);
          v34 = NextVad;
          goto LABEL_78;
        }
        if ( KeShouldYieldProcessor() )
          v37 = 1;
        v34 = NextVad;
      }
      if ( v37 )
        goto LABEL_102;
LABEL_78:
      v35 -= 4096LL;
      NextVad = --v34;
      if ( !--v36 )
      {
        LOBYTE(v5) = v41;
        break;
      }
    }
  }
  if ( v15 )
    MiUnlockPageTable((__int64)v16, v15);
  MiUnlockWorkingSetShared((__int64)v16, v38);
  Pool = P;
  v11 = v53;
LABEL_68:
  MiUnlockVadRange(Object, v51, v11, 0LL);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v61, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(Pool, 0);
  return v33;
}
