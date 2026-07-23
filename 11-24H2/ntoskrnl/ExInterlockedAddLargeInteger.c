/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14041FF40
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x140420A88 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x140420B38 (ExpReleaseSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  LARGE_INTEGER v7; // rbx
  LONGLONG v8; // rdx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  v7 = *Addend;
  v8 = Addend->QuadPart + Increment.QuadPart;
  Addend->QuadPart = v8;
  LOBYTE(v8) = v6;
  ExpReleaseSpinLockDisabled(Lock, v8);
  return v7;
}
