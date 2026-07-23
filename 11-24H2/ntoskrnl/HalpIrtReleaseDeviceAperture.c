/*
 * XREFs of HalpIrtReleaseDeviceAperture @ 0x1406FF3C0
 * Callers:
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1406FF2F0 (HalpIrtFreeIndex.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 */

void __fastcall HalpIrtReleaseDeviceAperture(int a1, int a2)
{
  __int64 *i; // rax
  bool v5; // zf
  __int64 v6; // rcx
  __int64 **v7; // rdx
  __int64 v8; // rcx

  ExAcquireFastMutex(&HalpIrtLock);
  for ( i = (__int64 *)HalpIrtAllocatedDeviceAperturesHead; i != &HalpIrtAllocatedDeviceAperturesHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a1 )
    {
      v5 = *((_DWORD *)i + 5) == a2;
      *((_DWORD *)i + 5) -= a2;
      if ( v5 )
      {
        *((_DWORD *)i + 6) = 0;
        *((_DWORD *)i + 7) = 0;
        v6 = *i;
        if ( *(__int64 **)(*i + 8) != i
          || (v7 = (__int64 **)i[1], *v7 != i)
          || (*v7 = (__int64 *)v6,
              *(_QWORD *)(v6 + 8) = v7,
              v8 = HalpIrtFreeDeviceAperturesHead,
              *(__int64 **)(HalpIrtFreeDeviceAperturesHead + 8) != &HalpIrtFreeDeviceAperturesHead) )
        {
          __fastfail(3u);
        }
        *i = HalpIrtFreeDeviceAperturesHead;
        i[1] = (__int64)&HalpIrtFreeDeviceAperturesHead;
        *(_QWORD *)(v8 + 8) = i;
        HalpIrtFreeDeviceAperturesHead = (__int64)i;
      }
      break;
    }
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
}
