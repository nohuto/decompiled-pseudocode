/*
 * XREFs of MiBuildForkPageTable @ 0x14049DFAC
 * Callers:
 *     MiUpdateForkMaps @ 0x140A5F5F0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildForkPageTable(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, ULONG_PTR *a4, __int64 a5, int a6)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 DemandZeroPte; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned int v18; // r15d
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rdx
  ULONG_PTR BugCheckParameter3; // rbx
  __int64 result; // rax
  __int64 v28; // rsi
  __int64 v29; // r9
  ULONG_PTR v30; // rdi
  __int64 v31; // r8
  __int64 v32; // r9
  char v33[4]; // [rsp+40h] [rbp-A8h] BYREF
  int v34; // [rsp+44h] [rbp-A4h]
  int v35[2]; // [rsp+48h] [rbp-A0h]
  __int64 v36; // [rsp+50h] [rbp-98h]
  struct _LIST_ENTRY **p_Blink; // [rsp+58h] [rbp-90h]
  ULONG_PTR *v38; // [rsp+60h] [rbp-88h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-80h]
  _OWORD v40[3]; // [rsp+70h] [rbp-78h] BYREF

  v36 = a2;
  BugCheckParameter1 = a1;
  v38 = a4;
  *(_QWORD *)v35 = a3;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = 48 * a5 - 0x220000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v7 + 16) = DemandZeroPte;
  v10 = DemandZeroPte;
  MiSetPfnContainingFrame(v7, v11);
  if ( a6 == 3 )
  {
    p_Blink = 0LL;
    v16 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v13, 2LL);
    }
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v16 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    CurrentIrql = MiLockWorkingSetShared((__int64)p_Blink, v12, v14, v15);
    MiMakeSystemAddressValid(a3, 0, CurrentIrql, 0);
  }
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v18);
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
  HIWORD(v34) = HIWORD(*(_DWORD *)(v7 + 32));
  LOWORD(v34) = 1;
  *(_DWORD *)(v7 + 32) = v34;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)v35;
  v34 = *(_DWORD *)(v7 + 32);
  BYTE2(v34) = BYTE2(v34) & 0xF8 | 6;
  *(_DWORD *)(v7 + 32) = v34;
  MiAddLockedPageCharge(v7, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v19 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  v23 = v38;
  *(_QWORD *)(v8 + 24) = v21 ^ v22;
  *v23 = v10;
  if ( a6 == 3 || (MiIncreaseUsedPtesInPfn(v8, 1), a6 != 1) )
  {
    v24 = *(_QWORD *)v35;
    BugCheckParameter3 = MiMakeValidPte(*(unsigned __int64 *)v35, v36, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0x600000) != 0 && *(_BYTE *)(BugCheckParameter1 + 352) != 1 )
    {
      *(_QWORD *)((v35[0] & 0xFFF) + *(_QWORD *)(BugCheckParameter1 + 1288)) = BugCheckParameter3;
      if ( !HIBYTE(word_140E2EEC4) )
        BugCheckParameter3 |= 0x8000000000000000uLL;
    }
  }
  else
  {
    v24 = *(_QWORD *)v35;
    BugCheckParameter3 = MiMakeTransitionPte(v36, 4);
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
  }
  else
  {
    MiUnlockPageTableInternal((__int64)p_Blink, v16);
    MiUnlockWorkingSetShared((__int64)p_Blink, CurrentIrql);
    if ( a6 == 1 )
    {
      result = (__int64)v38;
      *v38 = BugCheckParameter3;
      return result;
    }
  }
  v33[0] = 0;
  memset(v40, 0, sizeof(v40));
  v28 = BugCheckParameter1 + 1024;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v40);
  v30 = MiLockWorkingSetOptimal(BugCheckParameter1 + 1024, v24, (unsigned __int8 *)v33, v29);
  MiAllocateWsle(v28, v24, v7, 0, BugCheckParameter3, 0, 0LL);
  MiUnlockWorkingSetOptimal(v28, v30, v33[0]);
  return KiUnstackDetachProcess((__int64)v40, 0, v31, v32);
}
