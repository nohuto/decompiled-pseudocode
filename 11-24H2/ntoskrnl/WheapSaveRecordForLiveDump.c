/*
 * XREFs of WheapSaveRecordForLiveDump @ 0x140B6403C
 * Callers:
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140B63FA8 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapSaveRecordForLiveDump(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C Pool2; // rbx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v5; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    Pool2 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)ExAllocatePool2(0x42uLL, (unsigned int)(v1 + 32), 0x61656857u);
    if ( Pool2 )
    {
      *(_DWORD *)(*(_QWORD *)&Pool2 + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      *(_QWORD *)(*(_QWORD *)&Pool2 + 24LL) = *(_QWORD *)&Pool2 + 32LL;
      memmove((void *)(*(_QWORD *)&Pool2 + 32LL), (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
      v5 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)WheapDispatchPtr.DeviceQueue.1;
      if ( **(struct _DEVICE_OBJECT ***)&WheapDispatchPtr.DeviceQueue.32 != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceQueue.Lock )
        __fastfail(3u);
      **(_QWORD **)&Pool2 = &WheapDispatchPtr.DeviceQueue.Lock;
      *(_QWORD *)(*(_QWORD *)&Pool2 + 8LL) = v5;
      *v5 = Pool2;
      WheapDispatchPtr.DeviceQueue.1 = Pool2;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
