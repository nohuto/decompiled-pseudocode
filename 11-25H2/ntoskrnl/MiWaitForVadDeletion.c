/*
 * XREFs of MiWaitForVadDeletion @ 0x1402A668C
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402A6B28 (MiObtainReferencedSecureVad.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiCleanVad @ 0x1408B4DF0 (MiCleanVad.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 * Callees:
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall MiWaitForVadDeletion(__int64 a1)
{
  void *result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // [rsp+20h] [rbp-60h] BYREF
  __int16 v5; // [rsp+28h] [rbp-58h] BYREF
  char v6; // [rsp+2Ah] [rbp-56h]
  int v7; // [rsp+2Ch] [rbp-54h]
  _QWORD v8[8]; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+70h] [rbp-10h]

  result = memset_0(&v4, 0, 0x58uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0;
    v8[1] = v8;
    v9 = 1;
    v8[0] = v8;
    v5 = 263;
    v6 = 6;
    MiInsertVadEvent(a1, &v4, 1);
    MiUnlockVad(CurrentThread, a1);
    KeWaitForGate(&v5, 18LL);
    return (void *)MiLockVad(CurrentThread, a1);
  }
  return result;
}
