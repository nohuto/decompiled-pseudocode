/*
 * XREFs of MiGetRepurposedSlabStandbyPage @ 0x1402C5DA4
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiLockPageListAndFirstPage @ 0x1402C5F38 (MiLockPageListAndFirstPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C60D4 (MiReInitializeFreeSlabPfn.c)
 *     MiReleasePageListLock @ 0x1402C6160 (MiReleasePageListLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiGetRepurposedSlabStandbyPage(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 Page; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  ULONG_PTR v8; // rbx
  __int64 v9; // r8
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
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3);
  }
  Page = MiLockPageListAndFirstPage(v1, v13);
  v7 = Page;
  if ( Page == -1 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(CurrentIrql);
    return -1LL;
  }
  v8 = 48 * Page - 0x220000000000LL;
  MiUnlinkPageFromListEx(v8, (v13[0] != 0) + 1);
  MiReleasePageListLock(v1, v13, v9);
  MiDiscardTransitionPteEx(v8);
  v12 = *(_DWORD *)(v8 + 32);
  BYTE2(v12) = BYTE2(v12) & 0xF8 | 1;
  *(_DWORD *)(v8 + 32) = v12;
  MiReInitializeFreeSlabPfn(v8, a1);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
  }
  return v7;
}
