/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14023B89C
 * Callers:
 *     MiHandleCollidedFault @ 0x14023B504 (MiHandleCollidedFault.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiFlushWaitForReadInProgress @ 0x1404C9D74 (MiFlushWaitForReadInProgress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockProtoPoolPage @ 0x14023BCDC (MiRelockProtoPoolPage.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiImagePageOk @ 0x1402E8330 (MiImagePageOk.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x140302E80 (MiIsFaultPteIntact.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(_QWORD *a1, __int64 *a2, __int64 a3, char a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbp
  _DWORD *v12; // r15
  char v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // r12
  __int64 v18; // rcx
  char v19; // bp
  char *v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp+10h]
  __int64 v31; // [rsp+A0h] [rbp+18h] BYREF
  char v32; // [rsp+A8h] [rbp+20h] BYREF

  v32 = a4;
  v28 = a2[1] | 0x8000000000000000uLL;
  v8 = MI_READ_PTE_LOCK_FREE(v28);
  v10 = *a2;
  v11 = 0LL;
  v12 = a5;
  v31 = v8;
  if ( *a5 )
    goto LABEL_53;
  if ( !(unsigned int)MiAddLockedPageCharge(a2, 2LL) )
    *v12 = 1;
  if ( *v12 )
    goto LABEL_53;
  if ( a3 && (unsigned __int16)*(_DWORD *)(a3 + 32) >= 0x7FFFu )
  {
    *v12 = 1;
    MiRemoveLockedPageChargeAndDecRef(a2);
  }
  if ( *v12 )
  {
LABEL_53:
    if ( a3 )
    {
      LODWORD(a5) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v10 + 144), 1u);
  if ( a3 )
  {
    _InterlockedAnd64(a2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    v13 = v32;
    LOBYTE(v9) = v32;
    MiUnlockProtoPoolPage(a3, v9);
  }
  else
  {
    v13 = v32;
    LOBYTE(v9) = v32;
    MiUnlockPage(a2, v9);
  }
  v15 = a1 + 7;
  v30 = 0LL;
  if ( *v15 )
  {
    LOBYTE(v14) = 17;
    v30 = MiReleaseFaultState(v15, v14, 0LL);
  }
  v16 = *(_QWORD *)(v10 + 184);
  if ( v16 )
  {
    v25 = KeAbPreAcquire(v16, 0LL, 0LL);
    v11 = v25;
    v17 = v15;
    if ( v25 )
    {
      KeAbPreWait(v25);
      v17 = a1 + 7;
    }
  }
  else
  {
    v17 = v15;
  }
  KeWaitForSingleObject((PVOID)(v10 + 24), WrPageIn, 0, 0, 0LL);
  if ( v11 )
  {
    KeAbPreAcquire(*(_QWORD *)(v10 + 184), v11, 0LL);
    KeAbPostReleaseEx(*(_QWORD *)(v10 + 184));
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)(v10 - 32));
  if ( *v17 )
  {
    v19 = 1;
    MiRelockFaultState(v15, v30);
  }
  else
  {
    v19 = 0;
  }
  if ( *v12 )
    return 3221226548LL;
  if ( a3 )
  {
    v21 = &v32;
    if ( v19 )
      v21 = 0LL;
    MiRelockProtoPoolPage(a3, v21);
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a2 + 6, 0x3FuLL) )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22) )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( a2[3] < 0 );
    }
  }
  else if ( v13 == 2 )
  {
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a2 + 6, 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
        {
          HvlNotifyLongSpinWait(v26);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( a2[3] < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  if ( (a2[3] & 0x4000000000000000LL) != 0 )
  {
    v27 = (*((_BYTE *)a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return v27 - 1073740748;
  }
  else
  {
    if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v28, &v31) || !(unsigned int)MiImagePageOk(*a1, a2, v24, 0LL) )
    {
      MiRemoveLockedPageChargeAndDecRef(a2);
      return 3221226548LL;
    }
    return 0LL;
  }
}
