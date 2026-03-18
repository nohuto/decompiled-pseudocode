/*
 * XREFs of MiBuildForkPageTable @ 0x1404A304C
 * Callers:
 *     MiUpdateForkMaps @ 0x140A6680C (MiUpdateForkMaps.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildForkPageTable(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, ULONG_PTR *a4, __int64 a5, int a6)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 DemandZeroPte; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned int v15; // r15d
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // r15
  __int64 v22; // rdx
  ULONG_PTR TransitionPte; // rbx
  __int64 result; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  char v27[4]; // [rsp+40h] [rbp-A8h] BYREF
  int v28; // [rsp+44h] [rbp-A4h]
  ULONG_PTR v29; // [rsp+48h] [rbp-A0h]
  __int64 v30; // [rsp+50h] [rbp-98h]
  struct _LIST_ENTRY **p_Blink; // [rsp+58h] [rbp-90h]
  ULONG_PTR *v32; // [rsp+60h] [rbp-88h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-80h]
  _OWORD v34[3]; // [rsp+70h] [rbp-78h] BYREF

  v30 = a2;
  BugCheckParameter1 = a1;
  v32 = a4;
  v29 = a3;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = 48 * a5 - 0x220000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v7 + 16) = DemandZeroPte;
  v10 = DemandZeroPte;
  MiSetPfnContainingFrame(v7, v11);
  if ( a6 == 3 )
  {
    p_Blink = 0LL;
    v13 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12, 2LL);
    }
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v13 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    CurrentIrql = MiLockWorkingSetShared((__int64)p_Blink);
    MiMakeSystemAddressValid(a3, 0, CurrentIrql, 0);
  }
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiSetPfnModified(v7, 1);
  if ( (HIWORD(*(_DWORD *)(v7 + 32)) & 0xC0) != 0x40 )
    MiChangePageAttribute(v7, 1u);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
  HIWORD(v28) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v28) = 1;
  *(_DWORD *)(v7 + 32) = v28;
  *(_QWORD *)(v7 + 8) = v29;
  v28 = *(_DWORD *)(v7 + 32);
  BYTE2(v28) = BYTE2(v28) & 0xF8 | 6;
  *(_DWORD *)(v7 + 32) = v28;
  MiAddLockedPageCharge(v7, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v17 = *(_QWORD *)(v8 + 24);
  v18 = v17 + 1;
  v19 = (v17 ^ (v17 + 1)) & 0xC000000000000000uLL;
  v20 = v32;
  *(_QWORD *)(v8 + 24) = v18 ^ v19;
  *v20 = v10;
  if ( a6 == 3 || (MiIncreaseUsedPtesInPfn(v8, 1), a6 != 1) )
  {
    v21 = v29;
    TransitionPte = MiMakeValidPte(v29, v30, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0x600000) != 0 && *(_BYTE *)(BugCheckParameter1 + 352) != 1 )
    {
      *(_QWORD *)((v29 & 0xFFF) + *(_QWORD *)(BugCheckParameter1 + 1288)) = TransitionPte;
      if ( !HIBYTE(word_140E2ED84) )
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
  else
  {
    v21 = v29;
    TransitionPte = MiMakeTransitionPte(v30, 4);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a6 == 3 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v22) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    MiUnlockPageTableInternal((__int64)p_Blink, v13);
    MiUnlockWorkingSetShared((__int64)p_Blink, CurrentIrql);
    if ( a6 == 1 )
    {
      result = (__int64)v32;
      *v32 = TransitionPte;
      return result;
    }
  }
  v27[0] = 0;
  memset(v34, 0, sizeof(v34));
  v25 = BugCheckParameter1 + 1024;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v34);
  v26 = MiLockWorkingSetOptimal(BugCheckParameter1 + 1024, v21, (unsigned __int8 *)v27);
  MiAllocateWsle(v25, v21, v7, 0, TransitionPte, 0, 0LL);
  MiUnlockWorkingSetOptimal(v25, v26, v27[0]);
  return KiUnstackDetachProcess((__int64)v34, 0);
}
