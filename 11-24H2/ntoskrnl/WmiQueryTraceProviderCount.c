/*
 * XREFs of WmiQueryTraceProviderCount @ 0x140497844
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x1408E9078 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  int *i; // r8
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  for ( i = (int *)WmipInUseRegEntryHead; i != (int *)&WmipInUseRegEntryHead; i = *(int **)i )
  {
    if ( ((i[12] >> 4) & 0x400000) != 0 && (i[12] & 0x40000000) != 0 )
    {
      if ( *((_QWORD *)i + 2) )
        ++v0;
    }
  }
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v1);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v4);
  return v0;
}
