/*
 * XREFs of ?ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1400C9A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1400C96F4 (-ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ?ndisVerifyValidRWLockFlags@@YAXE@Z @ 0x1400C9B88 (-ndisVerifyValidRWLockFlags@@YAXE@Z.c)
 *     NdisTryAcquireRWLockWrite @ 0x1400C9D20 (NdisTryAcquireRWLockWrite.c)
 */

unsigned __int8 __fastcall ndisVerifyNdisTryAcquireRWLockWrite(
        struct _NDIS_RW_LOCK_EX *a1,
        struct _LOCK_STATE_EX *a2,
        unsigned __int8 a3)
{
  struct NDIS_VERIFY_RW_LOCK_EX *RWLockVerifierContext; // rbp
  __int64 v7; // r8

  RWLockVerifierContext = ndisGetRWLockVerifierContext(a1);
  ndisVerifyValidRWLockFlags(a3);
  LOBYTE(v7) = a3;
  if ( (unsigned __int8)NdisTryAcquireRWLockWrite(a1, a2, v7) )
  {
    if ( RWLockVerifierContext )
      _InterlockedIncrement64((volatile signed __int64 *)RWLockVerifierContext + 9);
    return 1;
  }
  else
  {
    if ( RWLockVerifierContext )
      _InterlockedIncrement64((volatile signed __int64 *)RWLockVerifierContext + 10);
    return 0;
  }
}
