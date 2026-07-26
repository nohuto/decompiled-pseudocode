/*
 * XREFs of ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1400C2570
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x14003FD30 (NdisAcquireRWLockWrite.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1400C24C4 (-ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ?ndisVerifyValidRWLockFlags@@YAXE@Z @ 0x1400C2958 (-ndisVerifyValidRWLockFlags@@YAXE@Z.c)
 */

void __fastcall ndisVerifyNdisAcquireRWLockWrite(
        struct _NDIS_RW_LOCK_EX *BugCheckParameter3,
        struct _LOCK_STATE_EX *BugCheckParameter4,
        unsigned __int8 a3)
{
  struct NDIS_VERIFY_RW_LOCK_EX *RWLockVerifierContext; // rbx

  RWLockVerifierContext = ndisGetRWLockVerifierContext(BugCheckParameter3);
  if ( KeGetCurrentIrql() == 2 && *(_QWORD *)((KeGetPcr()->Prcb.Number << 12) + *((_QWORD *)BugCheckParameter3 + 4)) )
    ndisBugCheckEx(0x2FuLL, 1uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  ndisVerifyValidRWLockFlags(a3);
  NdisAcquireRWLockWrite(BugCheckParameter3, BugCheckParameter4, a3);
  if ( RWLockVerifierContext )
    _InterlockedIncrement64((volatile signed __int64 *)RWLockVerifierContext + 6);
}
