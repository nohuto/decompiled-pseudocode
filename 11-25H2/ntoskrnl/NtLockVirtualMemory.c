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

__int64 __fastcall NtLockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  void *Pool; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r11
  __int64 Address; // rax
  unsigned __int64 v12; // r11
  unsigned __int64 i; // r8
  unsigned __int64 v14; // rdi
  char *v15; // r14
  char v16; // r8
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r10
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rax
  char v24; // al
  BOOL v25; // esi
  bool v26; // zf
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r8
  unsigned int v32; // esi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rbx
  int v36; // r12d
  unsigned __int8 v37; // [rsp+40h] [rbp-128h]
  int v38; // [rsp+44h] [rbp-124h]
  unsigned __int64 v39; // [rsp+48h] [rbp-120h]
  char v40; // [rsp+50h] [rbp-118h]
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  unsigned __int64 NextVad; // [rsp+60h] [rbp-108h]
  int v43; // [rsp+68h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-F8h]
  BOOL v45; // [rsp+78h] [rbp-F0h]
  __int64 v46; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v47; // [rsp+88h] [rbp-E0h]
  PVOID P; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v49; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 v50; // [rsp+A0h] [rbp-C8h]
  __int64 v51; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-B8h]
  int v53; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-A8h]
  char *v55; // [rsp+C8h] [rbp-A0h]
  __int64 v56; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  _QWORD *v58; // [rsp+E0h] [rbp-88h]
  unsigned __int64 *v59; // [rsp+E8h] [rbp-80h]
  _BYTE v60[48]; // [rsp+F0h] [rbp-78h] BYREF

  v58 = a3;
  v59 = a2;
  memset(v60, 0, sizeof(v60));
  v51 = 0LL;
  v49 = 0LL;
  Object = 0LL;
  v4 = 0;
  v40 = 0;
  v43 = 0;
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v49, (__int64)&v51, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = (v49 + v51 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v7 = v49 & 0xFFFFFFFFFFFFF000uLL;
  v39 = 0LL;
  Pool = (void *)MiAllocatePool(
                   0x40uLL,
                   8
                 * (((((v6 - (v49 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
                  + ((((unsigned __int8)((v6 - (v49 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
                   1802267981);
  P = Pool;
  if ( !Pool )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v60);
    v4 = 2;
    v40 = 2;
    v43 = 2;
  }
  v9 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = v9;
  v50 = v7;
  v54 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v7, v6, 0LL);
  v52 = v10;
  if ( !v10 )
  {
    v32 = -1073741819;
    goto LABEL_68;
  }
  Address = (__int64)MiLocateAddress(v7);
  NextVad = Address;
  for ( i = 0LL; i < v12; i = v30 + 1 )
  {
    if ( !MiVadPagesTradable(Address) )
    {
      v32 = -1073741747;
      goto LABEL_68;
    }
    Address = MiGetNextVad(v29);
  }
  v45 = MiVadPureReserve(NextVad);
  v14 = 0LL;
  v15 = (char *)Object + 1024;
  v55 = (char *)Object + 1024;
  v56 = *((_QWORD *)Object + 130);
LABEL_9:
  v16 = MiLockWorkingSetShared((__int64)v15);
  v37 = v16;
LABEL_10:
  v17 = 0xFFFFDE0000000000uLL;
  v18 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v7 > v6 )
    {
      if ( v14 )
      {
        MiUnlockPageTable((__int64)v15, v14);
        v16 = v37;
      }
      MiUnlockWorkingSetShared((__int64)v15, v16);
      MiUnlockVadRange(Object, v50, v52, 0LL);
      if ( (v4 & 2) != 0 )
        KiUnstackDetachProcess((__int64)v60, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v28 = v49 & 0xFFFFFFFFFFFFF000uLL;
      *v58 = v6 - (v49 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v59 = v28;
      return (v4 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v7 >> 12 > (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
    {
      NextVad = MiGetNextVad(NextVad);
      v45 = MiVadPureReserve(NextVad);
    }
    BugCheckParameter2 = ((v7 >> 18) & 0x3FFFFFF8) + v18;
    if ( v14 != BugCheckParameter2 )
    {
      if ( v14 )
      {
        MiUnlockPageTable((__int64)v15, v14);
        v14 = 0LL;
        v16 = v37;
      }
      if ( v45 )
      {
        NextPageTable = MiGetNextPageTable(v9, v54, v16, 0, &v53);
        if ( NextPageTable )
          v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v9 )
        {
          v32 = -1073741819;
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
      MiUnlockPageTable((__int64)v15, v14);
      v14 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v15, v37);
      goto LABEL_9;
    }
    v19 = v17 + 48 * ((*(_QWORD *)v9 >> 12) & 0xFFFFFFFFFFLL);
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v7) & 0xF) == 8 )
    {
      v4 |= 1u;
      v40 = v4;
      v43 = v4;
      v23 = v39;
      goto LABEL_27;
    }
    if ( *((_QWORD *)v15 + 14) <= (unsigned __int64)(*(_QWORD *)(v56 + 32) + 6LL) )
    {
      v32 = -1073741663;
      goto LABEL_62;
    }
    if ( *(__int64 *)(v19 + 40) < 0 )
    {
      if ( !(unsigned int)MiLockPageTablePage(v19, 1) )
        goto LABEL_95;
      v22 = 0xFFFFDE0000000000uLL;
    }
    BugCheckParameter2 = v22 + 48 * ((*(_QWORD *)BugCheckParameter2 >> 12) & 0xFFFFFFFFFFLL);
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v46 = 0LL;
    if ( (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
    {
      if ( *(__int64 *)(v19 + 40) < 0 )
      {
        v46 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL));
        if ( !(unsigned int)MiChargeCommit(v46, 1uLL, 0) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
          v32 = -1073741523;
          goto LABEL_62;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v46 + 19632), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v19 + 16)) )
    {
      MiLockPageAndSetDirty(v19, 1LL, v31);
    }
    if ( !(unsigned int)MiSetVaAgeList((__int64)v15, v7, 1u, 8u) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      if ( *(__int64 *)(v19 + 40) < 0 )
      {
        MiUnlockPageTableCharges(48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
        if ( (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v46, 1LL, 0);
      }
      goto LABEL_95;
    }
    LODWORD(v46) = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v38 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    MiUpdatePfnPriority(v19, (unsigned int)v46, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = v39;
    _bittestandset64((signed __int64 *)P, v39);
LABEL_27:
    v39 = v23 + 1;
    v24 = v47 + 8;
    v47 += 8LL;
    v7 += 4096LL;
    v25 = 0;
    if ( v7 <= v6 && (v24 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended((__int64)v15, 0)
        || (unsigned int)MiPageTableLockIsContended((__int64)v15, v14) )
      {
LABEL_29:
        MiUnlockPageTable((__int64)v15, v14);
        MiUnlockWorkingSetShared((__int64)v15, v37);
        v14 = 0LL;
        MiLockWorkingSetShared((__int64)v15);
        v9 = v47;
        v16 = v37;
        goto LABEL_10;
      }
      v25 = KeShouldYieldProcessor() != 0;
    }
    v26 = !v25;
    v9 = v47;
    v16 = v37;
    v18 = 0xFFFFF6FB40000000uLL;
    v17 = 0xFFFFDE0000000000uLL;
    if ( !v26 )
      goto LABEL_29;
  }
  if ( *(__int64 *)(v19 + 40) < 0 )
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
LABEL_95:
  v32 = -1073741670;
LABEL_62:
  if ( v14 )
  {
    MiUnlockPageTable((__int64)v15, v14);
    v14 = 0LL;
  }
  if ( v39 )
  {
    v33 = v39 - 1;
    NextVad = v39 - 1;
    v34 = (v39 << 12) + v50 - 4096;
    v35 = v39;
    while ( 1 )
    {
      if ( _bittest64((const signed __int64 *)P, v33) == 1 )
      {
        if ( v14 != ((v34 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v14 )
            MiUnlockPageTable((__int64)v15, v14);
          v14 = ((v34 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockNestedPageTable((__int64)v15, v14, v20, v21);
        }
        MiUnlockVa((__int64)v15, v34);
        v33 = NextVad;
      }
      v36 = 0;
      if ( (v33 & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)v15, 0)
          || v14 && (unsigned int)MiPageTableLockIsContended((__int64)v15, v14) )
        {
LABEL_102:
          if ( v14 )
          {
            MiUnlockPageTable((__int64)v15, v14);
            v14 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)v15, v37);
          MiLockWorkingSetShared((__int64)v15);
          v33 = NextVad;
          goto LABEL_78;
        }
        if ( KeShouldYieldProcessor() )
          v36 = 1;
        v33 = NextVad;
      }
      if ( v36 )
        goto LABEL_102;
LABEL_78:
      v34 -= 4096LL;
      NextVad = --v33;
      if ( !--v35 )
      {
        LOBYTE(v4) = v40;
        break;
      }
    }
  }
  if ( v14 )
    MiUnlockPageTable((__int64)v15, v14);
  MiUnlockWorkingSetShared((__int64)v15, v37);
  Pool = P;
  v10 = v52;
LABEL_68:
  MiUnlockVadRange(Object, v50, v10, 0LL);
  if ( (v4 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v60, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(Pool, 0);
  return v32;
}
