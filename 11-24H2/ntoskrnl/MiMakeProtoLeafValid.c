/*
 * XREFs of MiMakeProtoLeafValid @ 0x1403C7C20
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int8 a3)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( (*(_QWORD *)BugCheckParameter1 & 1) == 0 )
  {
    MiUnlockPageTableInternal((__int64)p_Blink, v6);
    MiUnlockWorkingSetShared((__int64)p_Blink, a3);
    a3 = MiLockWorkingSetShared((__int64)p_Blink, v7, v8, v9);
    MiMakeSystemAddressValid(BugCheckParameter1, 0, a3, 0);
  }
  return 0LL;
}
