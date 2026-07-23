/*
 * XREFs of MiTerminateEnclave @ 0x1407F8028
 * Callers:
 *     NtTerminateEnclave @ 0x1407F8730 (NtTerminateEnclave.c)
 * Callees:
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     PsTerminateVsmEnclave @ 0x14077B4E4 (PsTerminateVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x140A20164 (PsDereferenceVsmEnclave.c)
 *     MiTerminateHardwareEnclave @ 0x140B65940 (MiTerminateHardwareEnclave.c)
 */

__int64 __fastcall MiTerminateEnclave(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v8; // rsi
  unsigned int v9; // ebx

  v3 = *(_DWORD *)(a2 + 64);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 8) == 0 )
      MiTerminateHardwareEnclave(a1, a2);
    return 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(volatile signed __int64 **)(a2 + 72);
    if ( _InterlockedIncrement64(v8 + 2) <= 1 )
      __fastfail(0xEu);
    MiUnlockVad((__int64)CurrentThread, a2);
    v9 = PsTerminateVsmEnclave((__int64)v8, a3);
    PsDereferenceVsmEnclave((PVOID)v8);
    MiLockVad((__int64)CurrentThread, a2);
    return v9;
  }
}
