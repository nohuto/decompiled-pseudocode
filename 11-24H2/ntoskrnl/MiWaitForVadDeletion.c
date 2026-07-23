/*
 * XREFs of MiWaitForVadDeletion @ 0x140345500
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x140345020 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanVad @ 0x140895DDC (MiCleanVad.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

int __fastcall MiWaitForVadDeletion(__int64 a1)
{
  int result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  _BYTE v4[8]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v5; // [rsp+28h] [rbp-58h] BYREF
  char v6; // [rsp+2Ah] [rbp-56h]
  int v7; // [rsp+2Ch] [rbp-54h]
  _QWORD v8[8]; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+70h] [rbp-10h]

  result = (unsigned int)memset_0(v4, 0, 0x58uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0;
    v8[1] = v8;
    v9 = 1;
    v8[0] = v8;
    v5 = 263;
    v6 = 6;
    MiInsertVadEvent(a1, v4);
    MiUnlockVad(CurrentThread, a1);
    KeWaitForGate((__int64)&v5, 18LL);
    return MiLockVad((__int64)CurrentThread, a1);
  }
  return result;
}
