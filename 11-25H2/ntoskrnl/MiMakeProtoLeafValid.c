/*
 * XREFs of MiMakeProtoLeafValid @ 0x1404677A8
 * Callers:
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int8 a3)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int64 v6; // r15

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( (*(_QWORD *)BugCheckParameter1 & 1) == 0 )
  {
    MiUnlockPageTable((__int64)p_Blink, v6);
    MiUnlockWorkingSetShared((__int64)p_Blink, a3);
    a3 = MiLockWorkingSetShared((__int64)p_Blink);
    MiMakeSystemAddressValid(BugCheckParameter1, 0, a3, 0);
  }
  return 0LL;
}
