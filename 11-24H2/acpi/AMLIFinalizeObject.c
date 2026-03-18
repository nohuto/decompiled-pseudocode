/*
 * XREFs of AMLIFinalizeObject @ 0x14006AD6C
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1400557B8 (ACPIInitDeleteDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1400680F0 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     AMLIRestartContext @ 0x14004B0FC (AMLIRestartContext.c)
 *     SetObjectsFlag @ 0x14006B9F4 (SetObjectsFlag.c)
 */

void __fastcall AMLIFinalizeObject(_QWORD *a1, char a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdi
  KSPIN_LOCK *v7; // rsi
  KIRQL v8; // al
  __int64 *v9; // rbx
  bool v10; // di

  dword_1400890B8 = 0;
  pszDest = 0;
  if ( a2 )
  {
    ExAcquireSpinLockShared(&ACPINamespaceLock);
    v3 = SetObjectsFlag(*a1);
    v5 = *(_QWORD *)(v4 + 136);
    if ( v5 )
      v3 = SetObjectsFlag(v5);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
  }
  v6 = *(_QWORD *)(*a1 + 48LL);
  if ( v6 )
  {
    v7 = (KSPIN_LOCK *)(v6 + 40);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 40));
    v9 = (__int64 *)(v6 + 56);
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 48), 0xFFFFFFFF) == 1 && *v9;
    KeReleaseSpinLock(v7, v8);
    if ( v10 )
      AMLIRestartContext(*v9);
  }
}
