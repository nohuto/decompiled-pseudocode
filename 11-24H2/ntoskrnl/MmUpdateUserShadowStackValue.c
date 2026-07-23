/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x140482448
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x1408D959C (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  BOOL v8; // r14d
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rsi
  int v19; // eax
  unsigned __int64 valid; // r12
  unsigned __int64 v22; // r15
  struct _LIST_ENTRY **p_Blink; // r13
  unsigned __int64 v24; // rdi
  unsigned int v25; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v26; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-48h]
  ULONG_PTR v28; // [rsp+38h] [rbp-40h]
  unsigned __int8 v30; // [rsp+90h] [rbp+18h]
  unsigned int v31; // [rsp+98h] [rbp+20h]

  v25 = 0;
  v26 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v25, a4);
  v18 = (void *)v14;
  if ( v14 )
  {
    v19 = *(_DWORD *)(v14 + 48);
    if ( (v19 & 0x200000) != 0 && (v19 & 0x14000000) == 0x10000000 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      v24 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v30 = MiLockWorkingSetShared((__int64)p_Blink, v15, v16, v17);
        valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v24, &v26, 0);
        v27 = valid;
        v22 = MI_READ_PTE_LOCK_FREE(v26);
        if ( valid == ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v22 & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)p_Blink, valid);
        MiUnlockWorkingSetShared((__int64)p_Blink, v30);
      }
      v5 = (v22 >> 12) & 0xFFFFFFFFFFLL;
      v6 = 48 * v5 - 0x220000000000LL;
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          v13 = v31 + 1;
          v31 = v13;
          if ( (v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      v7 = (a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v5, 0LL, 0x80000000);
      v8 = a2 == _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, a2);
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      v28 = CLFS_LSN_NULL_EXT;
      *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      v9 = MiCaptureDirtyBitToPfn(48 * v5 - 0x220000000000LL);
      if ( v9 )
        v11 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
      else
        v11 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
        MiReleasePageFileInfo(v11, v9, 1LL, v10);
      MiUnlockPageTableInternal((__int64)p_Blink, v27);
      MiUnlockWorkingSetShared((__int64)p_Blink, v30);
      v12 = !v8 ? 0xC0000272 : 0;
    }
    else
    {
      v12 = -1073741800;
    }
  }
  else
  {
    v12 = v25;
  }
  if ( v18 )
    MiUnlockAndDereferenceVad(v18);
  return v12;
}
