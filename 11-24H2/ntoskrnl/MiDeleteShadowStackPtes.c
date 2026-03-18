/*
 * XREFs of MiDeleteShadowStackPtes @ 0x140269284
 * Callers:
 *     MiDeleteKernelStackPages @ 0x14026A1A4 (MiDeleteKernelStackPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiValidateKernelShadowStackPage @ 0x14026C2A8 (MiValidateKernelShadowStackPage.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     VslFreeKernelShadowStack @ 0x140A4DA2C (VslFreeKernelShadowStack.c)
 */

__int64 __fastcall MiDeleteShadowStackPtes(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  unsigned int v7; // r14d
  ULONG_PTR v9; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // si
  ULONG_PTR v14; // r13
  ULONG_PTR v15; // r12
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int8 CurrentIrql; // si
  _QWORD *v23; // rsi
  __int64 v24; // r15
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  int IsPfnFromChargedSlabAllocation; // r14d
  volatile signed __int32 *v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // ebp
  bool v31; // zf
  unsigned __int8 v33; // [rsp+80h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+18h]
  int v36; // [rsp+90h] [rbp+18h]
  _QWORD *v37; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  v7 = 0;
  v37 = 0LL;
  v9 = a3;
  if ( KeGetCurrentIrql() == 2 )
  {
    v13 = 17;
    v33 = 17;
    MiLockWorkingSetSharedAtDpc(a2);
  }
  else
  {
    v13 = MiLockWorkingSetShared(a2);
    v33 = v13;
  }
  v14 = v9 + 8 * a4;
  v15 = v9;
  if ( v9 >= v14 )
    goto LABEL_12;
  v16 = 0LL;
  do
  {
    if ( !v6 )
      goto LABEL_6;
    if ( (v15 & 0xFFF) == 0 )
    {
      if ( v7 )
      {
        MiDecreaseUsedPtes(v12, v6, v7);
        v7 = 0;
      }
      MiUnlockPageTableInternal(a2, v6);
LABEL_6:
      v6 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(a2, v6);
    }
    v17 = 48 * ((*(_QWORD *)v15 >> 12) & 0xFFFFFFFFFFLL);
    ++*a6;
    v18 = (_QWORD *)(v17 - 0x220000000000LL);
    MiValidateKernelShadowStackPage(v15);
    ++a6[3];
    ++v7;
    *v18 = v16;
    v16 = v18;
    *(_QWORD *)v15 = CLFS_LSN_NULL_EXT;
    v15 += 8LL;
  }
  while ( v15 < v14 );
  v13 = v33;
  v9 = a3;
  v37 = v18;
  if ( v6 )
  {
    if ( v7 )
      MiDecreaseUsedPtes(v12, v6, v7);
    MiUnlockPageTableInternal(a2, v6);
  }
LABEL_12:
  LOBYTE(v11) = v13;
  MiUnlockWorkingSetShared(a2, v11);
  v20 = a5;
  if ( a5 )
  {
    if ( _bittest64(&MiFlags, 0x29u) )
    {
      v21 = VslFreeKernelShadowStack();
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x51541uLL, v9 - 1, v21, 0LL);
    }
  }
  if ( v13 != 17 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v33 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = 2;
      LOBYTE(v20) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v20, v19);
    }
  }
  v23 = v37;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = v23;
    if ( !v23 )
      break;
    v23 = (_QWORD *)*v23;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v25);
    v28 = (volatile signed __int32 *)(v25 + 3);
    v29 = v24 + 1;
    if ( !IsPfnFromChargedSlabAllocation )
      v29 = v24;
    v30 = 0;
    v24 = v29;
    while ( _interlockedbittestandset64(v28, 0x3FuLL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v28 < 0 );
    }
    MiSetPfnIdentity(v25, 0LL);
    v25[3] = *(_QWORD *)v28 & 0xC000000000000000uLL;
    v35 = *((_DWORD *)v25 + 8);
    v31 = (_WORD)v35 == 2;
    LOWORD(v35) = v35 - 2;
    *((_DWORD *)v25 + 8) = v35;
    if ( v31 )
    {
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v25 + 0x44000000000LL) >> 4), 2LL);
    }
    else
    {
      v36 = *((_DWORD *)v25 + 8);
      BYTE2(v36) |= 7u;
      *((_DWORD *)v25 + 8) = v36;
      v25[3] = *(_QWORD *)v28 | 0x4000000000000000LL;
      if ( !IsPfnFromChargedSlabAllocation )
        ++a6[1];
    }
    _InterlockedAnd64((volatile signed __int64 *)v28, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v33 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = v33;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
    }
    __writecr8(v33);
  }
  return v24;
}
