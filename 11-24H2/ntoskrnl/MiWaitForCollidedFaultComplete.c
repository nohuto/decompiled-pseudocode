/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x1404270E4
 * Callers:
 *     MiFlushWaitForReadInProgress @ 0x140272338 (MiFlushWaitForReadInProgress.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x140426D4C (MiHandleCollidedFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsFaultPteIntact @ 0x14030CD60 (MiIsFaultPteIntact.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140345A40 (MiRelockProtoPoolPage.c)
 *     MiImagePageOk @ 0x140349970 (MiImagePageOk.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  ULONG_PTR v13; // rbp
  _DWORD *v14; // r15
  unsigned __int8 v15; // r14
  __int64 *v16; // rsi
  __int64 v17; // rcx
  __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // bp
  unsigned __int8 *v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned __int64 v35; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+98h] [rbp+10h]
  __int64 v38; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int8 v39; // [rsp+A8h] [rbp+20h] BYREF

  v39 = a4;
  v35 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v8 = MI_READ_PTE_LOCK_FREE(v35);
  v12 = *(_QWORD *)a2;
  v13 = 0LL;
  v14 = a5;
  v38 = v8;
  if ( *a5 )
    goto LABEL_53;
  if ( !(unsigned int)MiAddLockedPageCharge(a2, 2) )
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
          KeYieldProcessorEx((unsigned int *)&a5);
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
    v15 = v39;
    LOBYTE(v9) = v39;
    MiUnlockProtoPoolPage(a3, v9, v10, v11);
  }
  else
  {
    v15 = v39;
    MiUnlockPage(a2, v39);
  }
  v16 = (__int64 *)(a1 + 7);
  v37 = 0LL;
  if ( *v16 )
    v37 = MiReleaseFaultState(v16, 0x11u, 0LL);
  v17 = *(_QWORD *)(v12 + 184);
  if ( v17 )
  {
    v29 = (char *)KeAbPreAcquire(v17, 0LL);
    v13 = (ULONG_PTR)v29;
    v18 = v16;
    if ( v29 )
    {
      KeAbPreWait(v29, v30, v31, v32);
      v18 = (__int64 *)(a1 + 7);
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
    MiRelockFaultState(v16, v37);
  }
  else
  {
    v22 = 0;
  }
  if ( *v14 )
    return 3221226548LL;
  if ( a3 )
  {
    v24 = &v39;
    if ( v22 )
      v24 = 0LL;
    MiRelockProtoPoolPage(a3, v24, v20, v21);
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v25);
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
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v33 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v33);
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
    MiLockPageInline(a2, v19, v20, v21);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
    v34 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
    MiRemoveLockedPageChargeAndDecRef(a2, v19, v20, v21);
    return v34 - 1073740748;
  }
  else
  {
    if ( !(unsigned int)MiIsFaultPteIntact((__int64)a1, *a1, v35, &v38) || !MiImagePageOk(*a1, a2, v27, 0LL) )
    {
      MiRemoveLockedPageChargeAndDecRef(a2, v26, v27, v28);
      return 3221226548LL;
    }
    return 0LL;
  }
}
