/*
 * XREFs of VfDriverEnableDisableVerifier @ 0x140B8A1C0
 * Callers:
 *     MmEnableOrDisableVerifierForDriver @ 0x140B82CD0 (MmEnableOrDisableVerifierForDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     VfDriverApplyDifVerification @ 0x140B8A038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8A250 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140B8A4F0 (VfDriverRemoveDifVerification.c)
 */

__int64 __fastcall VfDriverEnableDisableVerifier(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _KTHREAD *Lock; // r14
  unsigned int v9; // eax

  v6 = 0;
  Lock = MmAcquireLoadLock();
  if ( (a3 & 1) != 0 )
  {
    v9 = VfDriverEnableVerifier(a1, 0LL, a2);
LABEL_7:
    v6 = v9;
    goto LABEL_8;
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = VfDriverApplyDifVerification(a1, v7, a2);
    goto LABEL_7;
  }
  if ( (a3 & 4) != 0 )
  {
    v9 = VfDriverRemoveDifVerification(a1);
    goto LABEL_7;
  }
LABEL_8:
  MmReleaseLoadLock(Lock);
  return v6;
}
