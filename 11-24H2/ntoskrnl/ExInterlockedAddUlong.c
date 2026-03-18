/*
 * XREFs of ExInterlockedAddUlong @ 0x14042E270
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x14042ED58 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x14042EE08 (ExpReleaseSpinLockDisabled.c)
 */

ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  ULONG v7; // ebx
  __int64 v8; // rdx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  v7 = *Addend;
  v8 = *Addend + Increment;
  *Addend = v8;
  LOBYTE(v8) = v6;
  ExpReleaseSpinLockDisabled(Lock, v8);
  return v7;
}
