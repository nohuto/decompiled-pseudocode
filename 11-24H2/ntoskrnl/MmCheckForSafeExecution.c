/*
 * XREFs of MmCheckForSafeExecution @ 0x1407F6AC0
 * Callers:
 *     KiEmulateAtlThunk @ 0x1403F5764 (KiEmulateAtlThunk.c)
 * Callees:
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MmValidateUserCallTarget @ 0x1406F463C (MmValidateUserCallTarget.c)
 */

bool __fastcall MmCheckForSafeExecution(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v9; // di
  __int64 Process; // r14
  struct _LIST_ENTRY *Address; // rax
  __int64 v12; // r11
  struct _LIST_ENTRY *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( !a4
    && ((MiLocateAddress(a1), Address = MiLocateAddress(a2), !v12)
     || !Address
     || (struct _LIST_ENTRY *)v12 == Address
     || (*(_DWORD *)(v12 + 48) & 0x70) == 0x20)
    || (v13 = MiLocateAddress(a3)) == 0LL
    || ((__int64)v13[3].Flink & 0x70) != 0x20 )
  {
    v9 = 0;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( v9 )
    return (unsigned int)MmValidateUserCallTarget(a3, 1) != 0;
  return v9;
}
