/*
 * XREFs of MiMakeProtoLeafValid @ 0x1404056C4
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int8 a3)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int64 v6; // r15

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( (*(_QWORD *)BugCheckParameter1 & 1) == 0 )
  {
    MiUnlockPageTableInternal((__int64)p_Blink, v6);
    MiUnlockWorkingSetShared((__int64)p_Blink, a3);
    a3 = MiLockWorkingSetShared((__int64)p_Blink);
    MiMakeSystemAddressValid(BugCheckParameter1, 0, a3, 0);
  }
  return 0LL;
}
