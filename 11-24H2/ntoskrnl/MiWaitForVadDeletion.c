/*
 * XREFs of MiWaitForVadDeletion @ 0x1402FBA58
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanVad @ 0x1408E5224 (MiCleanVad.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 * Callees:
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     MiInsertVadEvent @ 0x1404F1B48 (MiInsertVadEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate(&v5, 18LL);
    return MiLockVad((__int64)CurrentThread, a1);
  }
  return result;
}
