/*
 * XREFs of NtLockVirtualMemory @ 0x1403FD910
 * Callers:
 *     <none>
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiLockPageTablePage @ 0x140284A20 (MiLockPageTablePage.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockVa @ 0x1402C7B34 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 *     MiVadPagesTradable @ 0x1403FE990 (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1408E8A30 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1409E3730 (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  void *Pool; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r11
  unsigned __int64 Address; // rax
  unsigned __int64 v12; // r11
  unsigned __int64 i; // r8
  unsigned __int64 v14; // rdi
  char *v15; // r14
  char v16; // r8
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r10
  __int64 v19; // rsi
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rax
  char v22; // al
  BOOL v23; // esi
  bool v24; // zf
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r8
  unsigned int v30; // esi
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbx
  int v34; // r12d
  unsigned __int8 v35; // [rsp+40h] [rbp-128h]
  unsigned int v36; // [rsp+44h] [rbp-124h]
  unsigned __int64 v37; // [rsp+48h] [rbp-120h]
  char v38; // [rsp+50h] [rbp-118h]
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  unsigned __int64 NextVad; // [rsp+60h] [rbp-108h]
  int v41; // [rsp+68h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-F8h]
  BOOL v43; // [rsp+78h] [rbp-F0h]
  __int64 v44; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v45; // [rsp+88h] [rbp-E0h]
  PVOID P; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v47; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 v48; // [rsp+A0h] [rbp-C8h]
  __int64 v49; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-B8h]
  int v51; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-A8h]
  char *v53; // [rsp+C8h] [rbp-A0h]
  __int64 v54; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  _QWORD *v56; // [rsp+E0h] [rbp-88h]
  unsigned __int64 *v57; // [rsp+E8h] [rbp-80h]
  _BYTE v58[48]; // [rsp+F0h] [rbp-78h] BYREF

  v56 = a3;
  v57 = a2;
  memset(v58, 0, sizeof(v58));
  v49 = 0LL;
  v47 = 0LL;
  Object = 0LL;
  v4 = 0;
  v38 = 0;
  v41 = 0;
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v47, (__int64)&v49, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = (v47 + v49 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v7 = v47 & 0xFFFFFFFFFFFFF000uLL;
  v37 = 0LL;
  Pool = (void *)MiAllocatePool(
                   0x40uLL,
                   8
                 * (((((v6 - (v47 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
                  + ((((unsigned __int8)((v6 - (v47 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
                   1802267981);
  P = Pool;
  if ( !Pool )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v58);
    v4 = 2;
    v38 = 2;
    v41 = 2;
  }
  v9 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = v9;
  v48 = v7;
  v52 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v7, v6, 0LL);
  v50 = v10;
  if ( !v10 )
  {
    v30 = -1073741819;
    goto LABEL_68;
  }
  Address = (unsigned __int64)MiLocateAddress(v7);
  NextVad = Address;
  for ( i = 0LL; i < v12; i = v28 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      v30 = -1073741747;
      goto LABEL_68;
    }
    Address = MiGetNextVad(v27);
  }
  v43 = MiVadPureReserve(NextVad);
  v14 = 0LL;
  v15 = (char *)Object + 1024;
  v53 = (char *)Object + 1024;
  v54 = *((_QWORD *)Object + 130);
LABEL_9:
  v16 = MiLockWorkingSetShared((__int64)v15);
  v35 = v16;
LABEL_10:
  v17 = 0xFFFFDE0000000000uLL;
  v18 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v7 > v6 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        v16 = v35;
      }
      MiUnlockWorkingSetShared((__int64)v15, v16);
      MiUnlockVadRange(Object, v48, v50, 0LL);
      if ( (v4 & 2) != 0 )
        KiUnstackDetachProcess((__int64)v58, 0);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v26 = v47 & 0xFFFFFFFFFFFFF000uLL;
      *v56 = v6 - (v47 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v57 = v26;
      return (v4 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v7 >> 12 > (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
    {
      NextVad = MiGetNextVad(NextVad);
      v43 = MiVadPureReserve(NextVad);
    }
    BugCheckParameter2 = ((v7 >> 18) & 0x3FFFFFF8) + v18;
    if ( v14 != BugCheckParameter2 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        v14 = 0LL;
        v16 = v35;
      }
      if ( v43 )
      {
        NextPageTable = MiGetNextPageTable(v9, v52, v16, 0, &v51);
        if ( NextPageTable )
          v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v9 )
        {
          v30 = -1073741819;
          goto LABEL_62;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v9, (*(_DWORD *)(NextVad + 48) >> 12) & 0x7F, v16, 0);
        v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v17 = 0xFFFFDE0000000000uLL;
    }
    if ( (*(_QWORD *)v9 & 1) == 0 )
    {
      MiUnlockPageTableInternal((__int64)v15, v14);
      v14 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v15, v35);
      goto LABEL_9;
    }
    v19 = v17 + 48 * ((*(_QWORD *)v9 >> 12) & 0xFFFFFFFFFFLL);
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v7) & 0xF) == 8 )
    {
      v4 |= 1u;
      v38 = v4;
      v41 = v4;
      v21 = v37;
      goto LABEL_27;
    }
    if ( *((_QWORD *)v15 + 14) <= (unsigned __int64)(*(_QWORD *)(v54 + 32) + 6LL) )
    {
      v30 = -1073741663;
      goto LABEL_62;
    }
    if ( *(__int64 *)(v19 + 40) < 0 )
    {
      if ( !(unsigned int)MiLockPageTablePage(v19, 1) )
        goto LABEL_95;
      v20 = 0xFFFFDE0000000000uLL;
    }
    BugCheckParameter2 = v20 + 48 * ((*(_QWORD *)BugCheckParameter2 >> 12) & 0xFFFFFFFFFFLL);
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v44 = 0LL;
    if ( (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
    {
      if ( *(__int64 *)(v19 + 40) < 0 )
      {
        v44 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiChargeCommit(v44, 1uLL, 0) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
          v30 = -1073741523;
          goto LABEL_62;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v44 + 19632), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v19 + 16)) )
    {
      MiLockPageAndSetDirty(v19, 1LL, v29);
    }
    if ( !(unsigned int)MiSetVaAgeList((__int64)v15, v7, 1u, 8u) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      if ( *(__int64 *)(v19 + 40) < 0 )
      {
        MiUnlockPageTableCharges(48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
        if ( (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v44, 1LL, 0);
      }
      goto LABEL_95;
    }
    LODWORD(v44) = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v36 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v36);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    MiUpdatePfnPriority(v19, (unsigned int)v44, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v37;
    _bittestandset64((signed __int64 *)P, v37);
LABEL_27:
    v37 = v21 + 1;
    v22 = v45 + 8;
    v45 += 8LL;
    v7 += 4096LL;
    v23 = 0;
    if ( v7 <= v6 && (v22 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended((__int64)v15, 0)
        || (unsigned int)MiPageTableLockIsContended((__int64)v15, v14) )
      {
LABEL_29:
        MiUnlockPageTableInternal((__int64)v15, v14);
        MiUnlockWorkingSetShared((__int64)v15, v35);
        v14 = 0LL;
        MiLockWorkingSetShared((__int64)v15);
        v9 = v45;
        v16 = v35;
        goto LABEL_10;
      }
      v23 = KeShouldYieldProcessor() != 0;
    }
    v24 = !v23;
    v9 = v45;
    v16 = v35;
    v18 = 0xFFFFF6FB40000000uLL;
    v17 = 0xFFFFDE0000000000uLL;
    if ( !v24 )
      goto LABEL_29;
  }
  if ( *(__int64 *)(v19 + 40) < 0 )
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
LABEL_95:
  v30 = -1073741670;
LABEL_62:
  if ( v14 )
  {
    MiUnlockPageTableInternal((__int64)v15, v14);
    v14 = 0LL;
  }
  if ( v37 )
  {
    v31 = v37 - 1;
    NextVad = v37 - 1;
    v32 = (v37 << 12) + v48 - 4096;
    v33 = v37;
    while ( 1 )
    {
      if ( _bittest64((const signed __int64 *)P, v31) == 1 )
      {
        if ( v14 != ((v32 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v14 )
            MiUnlockPageTableInternal((__int64)v15, v14);
          v14 = ((v32 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockNestedPageTable((__int64)v15, v14);
        }
        MiUnlockVa((__int64)v15, v32);
        v31 = NextVad;
      }
      v34 = 0;
      if ( (v31 & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)v15, 0)
          || v14 && (unsigned int)MiPageTableLockIsContended((__int64)v15, v14) )
        {
LABEL_102:
          if ( v14 )
          {
            MiUnlockPageTableInternal((__int64)v15, v14);
            v14 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)v15, v35);
          MiLockWorkingSetShared((__int64)v15);
          v31 = NextVad;
          goto LABEL_78;
        }
        if ( KeShouldYieldProcessor() )
          v34 = 1;
        v31 = NextVad;
      }
      if ( v34 )
        goto LABEL_102;
LABEL_78:
      v32 -= 4096LL;
      NextVad = --v31;
      if ( !--v33 )
      {
        LOBYTE(v4) = v38;
        break;
      }
    }
  }
  if ( v14 )
    MiUnlockPageTableInternal((__int64)v15, v14);
  MiUnlockWorkingSetShared((__int64)v15, v35);
  Pool = P;
  v10 = v50;
LABEL_68:
  MiUnlockVadRange(Object, v48, v10, 0LL);
  if ( (v4 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v58, 0);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(Pool, 0);
  return v30;
}
