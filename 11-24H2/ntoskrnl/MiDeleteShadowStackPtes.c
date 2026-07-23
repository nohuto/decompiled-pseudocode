/*
 * XREFs of MiDeleteShadowStackPtes @ 0x14021EA48
 * Callers:
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiValidateKernelShadowStackPage @ 0x140221838 (MiValidateKernelShadowStackPage.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     VslFreeKernelShadowStack @ 0x140A445BC (VslFreeKernelShadowStack.c)
 */

__int64 __fastcall MiDeleteShadowStackPtes(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rdi
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
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int IsPfnFromChargedSlabAllocation; // r14d
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // ebp
  bool v34; // zf
  unsigned __int8 v36; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+90h] [rbp+18h]
  int v39; // [rsp+90h] [rbp+18h]
  _QWORD *v40; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  v7 = 0;
  v40 = 0LL;
  v9 = a3;
  if ( KeGetCurrentIrql() == 2 )
  {
    v13 = 17;
    v36 = 17;
    MiLockWorkingSetSharedAtDpc(a2);
  }
  else
  {
    v13 = MiLockWorkingSetShared(a2);
    v36 = v13;
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
  v13 = v36;
  v9 = a3;
  v40 = v18;
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
    v36 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = 2;
      LOBYTE(v20) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v20, v19);
    }
  }
  v23 = v40;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = (__int64)v23;
    if ( !v23 )
      break;
    v23 = (_QWORD *)*v23;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v25);
    v31 = (volatile signed __int32 *)(v25 + 24);
    v32 = v24 + 1;
    if ( !IsPfnFromChargedSlabAllocation )
      v32 = v24;
    v33 = 0;
    v24 = v32;
    while ( _interlockedbittestandset64(v31, 0x3FuLL) )
    {
      do
      {
        if ( (++v33 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27, v26, v28, v29) )
        {
          HvlNotifyLongSpinWait(v33);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v31 < 0 );
    }
    MiSetPfnIdentity(v25, 0);
    *(_QWORD *)(v25 + 24) = *(_QWORD *)v31 & 0xC000000000000000uLL;
    v38 = *(_DWORD *)(v25 + 32);
    v34 = (_WORD)v38 == 2;
    LOWORD(v38) = v38 - 2;
    *(_DWORD *)(v25 + 32) = v38;
    if ( v34 )
    {
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v25 + 0x220000000000LL) >> 4));
    }
    else
    {
      v39 = *(_DWORD *)(v25 + 32);
      BYTE2(v39) |= 7u;
      *(_DWORD *)(v25 + 32) = v39;
      *(_QWORD *)(v25 + 24) = *(_QWORD *)v31 | 0x4000000000000000LL;
      if ( !IsPfnFromChargedSlabAllocation )
        ++a6[1];
    }
    _InterlockedAnd64((volatile signed __int64 *)v31, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v36 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = v36;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
    }
    __writecr8(v36);
  }
  return v24;
}
