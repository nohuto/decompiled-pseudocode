/*
 * XREFs of MiDeleteShadowStackPtes @ 0x14049C92C
 * Callers:
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiValidateKernelShadowStackPage @ 0x140346F68 (MiValidateKernelShadowStackPage.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     VslFreeKernelShadowStack @ 0x140A4C9CC (VslFreeKernelShadowStack.c)
 */

__int64 __fastcall MiDeleteShadowStackPtes(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // r14d
  ULONG_PTR v9; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // si
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int8 CurrentIrql; // si
  _QWORD *v21; // rsi
  __int64 v22; // r15
  __int64 v23; // rbx
  int IsPfnFromChargedSlabAllocation; // r14d
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rax
  int v27; // ebp
  bool v28; // zf
  _QWORD *v29; // rsi
  __int64 v30; // rbx
  _QWORD *v31; // rbx
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
    v12 = 17;
    v33 = 17;
    MiLockWorkingSetSharedAtDpc(a2);
  }
  else
  {
    v12 = MiLockWorkingSetShared(a2);
    v33 = v12;
  }
  v15 = v9 + 8 * a4;
  v16 = v9;
  if ( v9 >= v15 )
    goto LABEL_4;
  v29 = 0LL;
  do
  {
    if ( !v6 )
      goto LABEL_26;
    if ( (v16 & 0xFFF) == 0 )
    {
      if ( v7 )
      {
        MiDecreaseUsedPtes(v11, v6, v7);
        v7 = 0;
      }
      MiUnlockPageTable(a2, v6);
LABEL_26:
      v6 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(a2, v6, v13, v14);
    }
    v30 = 48 * ((*(_QWORD *)v16 >> 12) & 0xFFFFFFFFFFLL);
    ++*a6;
    v31 = (_QWORD *)(v30 - 0x220000000000LL);
    MiValidateKernelShadowStackPage(v16, (__int64)v31);
    ++a6[3];
    ++v7;
    *v31 = v29;
    v29 = v31;
    *(_QWORD *)v16 = CLFS_LSN_NULL_EXT;
    v16 += 8LL;
  }
  while ( v16 < v15 );
  v12 = v33;
  v9 = a3;
  v37 = v31;
  if ( v6 )
  {
    if ( v7 )
      MiDecreaseUsedPtes(v11, v6, v7);
    MiUnlockPageTable(a2, v6);
  }
LABEL_4:
  MiUnlockWorkingSetShared(a2, v12);
  v18 = a5;
  if ( a5 )
  {
    if ( _bittest64(&MiFlags, 0x29u) )
    {
      v19 = VslFreeKernelShadowStack();
      if ( v19 < 0 )
        KeBugCheckEx(0x1Au, 0x51541uLL, v9 - 1, v19, 0LL);
    }
  }
  if ( v12 != 17 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v33 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v18) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v18);
    }
  }
  v21 = v37;
  v22 = 0LL;
  while ( 1 )
  {
    v23 = (__int64)v21;
    if ( !v21 )
      break;
    v21 = (_QWORD *)*v21;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v23);
    v25 = (volatile signed __int32 *)(v23 + 24);
    v26 = v22 + 1;
    if ( !IsPfnFromChargedSlabAllocation )
      v26 = v22;
    v27 = 0;
    v22 = v26;
    while ( _interlockedbittestandset64(v25, 0x3FuLL) )
    {
      do
      {
        if ( (++v27 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)v25 < 0 );
    }
    MiSetPfnIdentity(v23, 0);
    *(_QWORD *)(v23 + 24) = *(_QWORD *)v25 & 0xC000000000000000uLL;
    v35 = *(_DWORD *)(v23 + 32);
    v28 = (_WORD)v35 == 2;
    LOWORD(v35) = v35 - 2;
    *(_DWORD *)(v23 + 32) = v35;
    if ( v28 )
    {
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4), 2);
    }
    else
    {
      v36 = *(_DWORD *)(v23 + 32);
      BYTE2(v36) |= 7u;
      *(_DWORD *)(v23 + 32) = v36;
      *(_QWORD *)(v23 + 24) = *(_QWORD *)v25 | 0x4000000000000000LL;
      if ( !IsPfnFromChargedSlabAllocation )
        ++a6[1];
    }
    _InterlockedAnd64((volatile signed __int64 *)v25, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v33 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = v33;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    }
    __writecr8(v33);
  }
  return v22;
}
