/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x14048789C
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x140A537E8 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  BOOL v10; // r14d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 valid; // r12
  unsigned __int64 v15; // r15
  struct _LIST_ENTRY **p_Blink; // r13
  ULONG_PTR v17; // rdi
  unsigned int v18; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v19; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  ULONG_PTR v21; // [rsp+38h] [rbp-40h]
  unsigned __int8 v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  v18 = 0;
  v19 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v18);
  v4 = (char *)v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 48);
    if ( (v5 & 0x4200000) == 0x200000 && (v5 & 0x10000000) != 0 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      v17 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v23 = MiLockWorkingSetShared((__int64)p_Blink);
        valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v17, &v19, 0);
        v20 = valid;
        v15 = MI_READ_PTE_LOCK_FREE(v19);
        if ( valid == ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v15 & 1) != 0 )
          break;
        MiUnlockPageTable((__int64)p_Blink, valid);
        MiUnlockWorkingSetShared((__int64)p_Blink, v23);
      }
      v7 = (v15 >> 12) & 0xFFFFFFFFFFLL;
      v8 = 48 * v7 - 0x220000000000LL;
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      v9 = (a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v7, 0LL, 0x80000000);
      v10 = a2 == _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, a2);
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      v21 = CLFS_LSN_NULL_EXT;
      *(_QWORD *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      v11 = MiCaptureDirtyBitToPfn(48 * v7 - 0x220000000000LL);
      if ( v11 )
        v12 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
      else
        v12 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 )
        MiReleasePageFileInfo(v12, v11, 1);
      MiUnlockPageTable((__int64)p_Blink, v20);
      MiUnlockWorkingSetShared((__int64)p_Blink, v23);
      v6 = !v10 ? 0xC0000272 : 0;
    }
    else
    {
      v6 = -1073741800;
    }
  }
  else
  {
    v6 = v18;
  }
  if ( v4 )
    MiUnlockAndDereferenceVad(v4);
  return v6;
}
