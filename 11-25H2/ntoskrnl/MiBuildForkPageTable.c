/*
 * XREFs of MiBuildForkPageTable @ 0x1402D13B0
 * Callers:
 *     MiUpdateForkMaps @ 0x140A6EA7C (MiUpdateForkMaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402D1090 (MiIncreaseUsedPtesInPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rdx
  ULONG_PTR TransitionPte; // rbx
  __int64 v27; // rsi
  __int64 v28; // r9
  unsigned __int64 v29; // rdi
  __int64 result; // rax
  unsigned __int8 v31[4]; // [rsp+40h] [rbp-A8h] BYREF
  int v32; // [rsp+44h] [rbp-A4h]
  ULONG_PTR v33; // [rsp+48h] [rbp-A0h]
  __int64 v34; // [rsp+50h] [rbp-98h]
  struct _LIST_ENTRY **p_Blink; // [rsp+58h] [rbp-90h]
  ULONG_PTR *v36; // [rsp+60h] [rbp-88h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-80h]
  _OWORD v38[3]; // [rsp+70h] [rbp-78h] BYREF

  v34 = a2;
  BugCheckParameter1 = a1;
  v36 = a4;
  v33 = a3;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = 48 * a5 - 0x220000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
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
      KiRaiseIrqlProcessIrqlFlags(v12);
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
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
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
  MiSetPfnModified(v7, 1LL);
  if ( (HIWORD(*(_DWORD *)(v7 + 32)) & 0xC0) != 0x40 )
    MiChangePageAttribute(v7, 1);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
  HIWORD(v32) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v32) = 1;
  *(_DWORD *)(v7 + 32) = v32;
  *(_QWORD *)(v7 + 8) = v33;
  v32 = *(_DWORD *)(v7 + 32);
  BYTE2(v32) = BYTE2(v32) & 0xF8 | 6;
  *(_DWORD *)(v7 + 32) = v32;
  MiAddLockedPageCharge(v7, 1, v16, v17);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v19 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
      {
        HvlNotifyLongSpinWait(v19);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v20 = *(_QWORD *)(v8 + 24);
  v21 = v20 + 1;
  v22 = (v20 ^ (v20 + 1)) & 0xC000000000000000uLL;
  v23 = v36;
  *(_QWORD *)(v8 + 24) = v21 ^ v22;
  *v23 = v10;
  if ( a6 == 3 || (MiIncreaseUsedPtesInPfn(v8, 1), a6 != 1) )
  {
    v24 = v33;
    TransitionPte = MiMakeValidPte(v33, v34, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0x600000) != 0 && *(_BYTE *)(BugCheckParameter1 + 352) != 1 )
    {
      *(_QWORD *)((v33 & 0xFFF) + *(_QWORD *)(BugCheckParameter1 + 1288)) = TransitionPte;
      if ( !HIBYTE(word_140E2EB44) )
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
  else
  {
    v24 = v33;
    TransitionPte = MiMakeTransitionPte(v34, 4LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a6 == 3 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v25) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
    }
    __writecr8(CurrentIrql);
    goto LABEL_33;
  }
  MiUnlockPageTable((__int64)p_Blink, v13);
  MiUnlockWorkingSetShared((__int64)p_Blink, CurrentIrql);
  if ( a6 != 1 )
  {
LABEL_33:
    v31[0] = 0;
    memset(v38, 0, sizeof(v38));
    v27 = BugCheckParameter1 + 1024;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v38);
    v29 = MiLockWorkingSetOptimal(BugCheckParameter1 + 1024, v24, v31, v28);
    MiAllocateWsle(v27, v24, v7, 0, TransitionPte, 0, 0LL);
    MiUnlockWorkingSetOptimal(v27, v29, v31[0]);
    return KiUnstackDetachProcess((__int64)v38, 0LL);
  }
  result = (__int64)v36;
  *v36 = TransitionPte;
  return result;
}
