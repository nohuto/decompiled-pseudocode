/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x1404873D8
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x1408DB370 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  BOOL v6; // r14d
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // r12d
  __int64 v11; // rax
  void *v12; // rsi
  int v13; // eax
  unsigned __int64 valid; // r12
  unsigned __int64 v16; // r15
  struct _LIST_ENTRY **p_Blink; // r13
  ULONG_PTR v18; // rdi
  unsigned int v19; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v20; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  ULONG_PTR v22; // [rsp+38h] [rbp-40h]
  unsigned __int8 v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v19 = 0;
  v20 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v19);
  v12 = (void *)v11;
  if ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 48);
    if ( (v13 & 0x200000) != 0 && (v13 & 0x14000000) == 0x10000000 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      v18 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v24 = MiLockWorkingSetShared((__int64)p_Blink);
        valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v18, &v20, 0);
        v21 = valid;
        v16 = MI_READ_PTE_LOCK_FREE(v20);
        if ( valid == ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v16 & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)p_Blink, valid);
        MiUnlockWorkingSetShared((__int64)p_Blink, v24);
      }
      v3 = (v16 >> 12) & 0xFFFFFFFFFFLL;
      v4 = 48 * v3 - 0x220000000000LL;
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
        {
          v10 = v25 + 1;
          v25 = v10;
          if ( (v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v5 = (a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v3, 0LL, 0x80000000LL);
      v6 = a2 == _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, a2);
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      v22 = CLFS_LSN_NULL_EXT;
      *(_QWORD *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      v7 = MiCaptureDirtyBitToPfn(48 * v3 - 0x220000000000LL);
      if ( v7 )
        v8 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
      else
        v8 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v7 )
        MiReleasePageFileInfo(v8, v7, 1LL);
      MiUnlockPageTableInternal((__int64)p_Blink, v21);
      MiUnlockWorkingSetShared((__int64)p_Blink, v24);
      v9 = !v6 ? 0xC0000272 : 0;
    }
    else
    {
      v9 = -1073741800;
    }
  }
  else
  {
    v9 = v19;
  }
  if ( v12 )
    MiUnlockAndDereferenceVad(v12);
  return v9;
}
