/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14033DB60
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiHandleCollidedFault @ 0x14033D7C8 (MiHandleCollidedFault.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiFlushWaitForReadInProgress @ 0x1404C9AA4 (MiFlushWaitForReadInProgress.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiIsFaultPteIntact @ 0x140246470 (MiIsFaultPteIntact.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiImagePageOk @ 0x14033B990 (MiImagePageOk.c)
 *     MiRelockProtoPoolPage @ 0x14033DFA0 (MiRelockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        unsigned __int64 *a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r13
  ULONG_PTR v13; // rbp
  _DWORD *v14; // r15
  unsigned __int8 v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  char v22; // bp
  unsigned __int8 *v24; // rdx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 *v29; // rax
  int v30; // ebx
  unsigned int v31; // ebx
  unsigned __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+98h] [rbp+10h]
  __int64 v35; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int8 v36; // [rsp+A8h] [rbp+20h] BYREF

  v36 = a4;
  v32 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v8 = MI_READ_PTE_LOCK_FREE(v32);
  v12 = *(_QWORD *)a2;
  v13 = 0LL;
  v14 = a5;
  v35 = v8;
  if ( *a5 )
    goto LABEL_53;
  if ( !(unsigned int)MiAddLockedPageCharge(a2, 2, v10, v11) )
    *v14 = 1;
  if ( *v14 )
    goto LABEL_53;
  if ( a3 && (unsigned __int16)*(_DWORD *)(a3 + 32) >= 0x7FFFu )
  {
    *v14 = 1;
    MiRemoveLockedPageChargeAndDecRef(a2, v9, v10, v11);
  }
  if ( *v14 )
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
      MiRemoveLockedPageChargeAndDecRef(a3, v9, v10, v11);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v12 + 144), 1u);
  if ( a3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v15 = v36;
    MiUnlockProtoPoolPage(a3, v36, v10, v11);
  }
  else
  {
    v15 = v36;
    MiUnlockPage(a2, v36);
  }
  v16 = a1 + 7;
  v34 = 0LL;
  if ( *v16 )
    v34 = MiReleaseFaultState((__int64)v16, 0x11u, 0LL);
  v17 = *(_QWORD *)(v12 + 184);
  if ( v17 )
  {
    v29 = KeAbPreAcquire(v17, 0LL);
    v13 = (ULONG_PTR)v29;
    v18 = v16;
    if ( v29 )
    {
      KeAbPreWait(v29);
      v18 = a1 + 7;
    }
  }
  else
  {
    v18 = v16;
  }
  KeWaitForSingleObject((PVOID)(v12 + 24), WrPageIn, 0, 0, 0LL);
  if ( v13 )
  {
    KeAbPreAcquire(*(_QWORD *)(v12 + 184), v13);
    KeAbPostReleaseEx(*(_QWORD *)(v12 + 184), v13);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)(v12 - 32));
  if ( *v18 )
  {
    v22 = 1;
    MiRelockFaultState(v16, v34);
  }
  else
  {
    v22 = 0;
  }
  if ( *v14 )
    return 3221226548LL;
  if ( a3 )
  {
    v24 = &v36;
    if ( v22 )
      v24 = 0LL;
    MiRelockProtoPoolPage(a3, v24);
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else if ( v15 == 2 )
  {
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
    v31 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
    MiRemoveLockedPageChargeAndDecRef(a2, v19, v20, v21);
    return v31 - 1073740748;
  }
  else
  {
    if ( !(unsigned int)MiIsFaultPteIntact((__int64)a1, *a1, v32, &v35) || !MiImagePageOk(*a1, a2, v27, 0LL) )
    {
      MiRemoveLockedPageChargeAndDecRef(a2, v26, v27, v28);
      return 3221226548LL;
    }
    return 0LL;
  }
}
