/*
 * XREFs of AcpipAllocatePciBusState @ 0x14001F064
 * Callers:
 *     IsPciBusAsync @ 0x14001E9A0 (IsPciBusAsync.c)
 * Callees:
 *     <none>
 */

KSPIN_LOCK *AcpipAllocatePciBusState()
{
  KSPIN_LOCK *Pool2; // rbx
  KIRQL v2; // al
  __int64 i; // rdx

  Pool2 = (KSPIN_LOCK *)ExAllocatePool2(64LL, 136LL, 1181770561LL);
  if ( !Pool2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      if ( !LOBYTE(gPreAllocPciPool[18 * i + 17]) )
      {
        LOBYTE(gPreAllocPciPool[18 * i + 17]) = 1;
        Pool2 = &gPreAllocPciPool[18 * i];
        break;
      }
    }
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v2);
  }
  return Pool2;
}
