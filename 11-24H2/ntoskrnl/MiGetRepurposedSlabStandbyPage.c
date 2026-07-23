/*
 * XREFs of MiGetRepurposedSlabStandbyPage @ 0x140218448
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiLockPageListAndFirstPage @ 0x1402185DC (MiLockPageListAndFirstPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x140218778 (MiReInitializeFreeSlabPfn.c)
 *     MiReleasePageListLock @ 0x140218800 (MiReleasePageListLock.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiGetRepurposedSlabStandbyPage(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 Page; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  ULONG_PTR v9; // rbx
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-A8h]
  _BYTE v13[112]; // [rsp+30h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(v1 + 16) == 0x3FFFFFFFFFLL )
    return -1LL;
  memset_0(v13, 0, 0x68uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 2;
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, v3);
  }
  Page = MiLockPageListAndFirstPage(v1, v13);
  v8 = Page;
  if ( Page == -1 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(CurrentIrql);
    return -1LL;
  }
  v9 = 48 * Page - 0x220000000000LL;
  MiUnlinkPageFromListEx(v9);
  MiReleasePageListLock(v1, v13);
  MiDiscardTransitionPteEx(v9, 2048LL);
  v12 = *(_DWORD *)(v9 + 32);
  BYTE2(v12) = BYTE2(v12) & 0xF8 | 1;
  *(_DWORD *)(v9 + 32) = v12;
  MiReInitializeFreeSlabPfn(v9, a1);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
