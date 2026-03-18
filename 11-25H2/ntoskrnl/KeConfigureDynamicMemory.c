/*
 * XREFs of KeConfigureDynamicMemory @ 0x1405B3AF4
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     VslConfigureDynamicMemory @ 0x140589594 (VslConfigureDynamicMemory.c)
 *     HvlConfigureDynamicMemory @ 0x140695840 (HvlConfigureDynamicMemory.c)
 */

__int64 __fastcall KeConfigureDynamicMemory(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx

  ExAcquireFastMutex(&KiDynamicMemoryLock);
  if ( a3 != 32 )
  {
    v6 = HvlConfigureDynamicMemory(a1, a2, 0LL);
    if ( v6 < 0 )
      goto LABEL_12;
    v6 = VslConfigureDynamicMemory(a1, a2, 0);
    v11 = a2;
    v12 = a1;
    if ( v6 >= 0 )
    {
      HvlConfigureDynamicMemory(a1, a2, 1LL);
      v9 = 1;
      v7 = a2;
      v8 = a1;
      goto LABEL_11;
    }
    v10 = 8LL;
    goto LABEL_6;
  }
  v6 = VslConfigureDynamicMemory(a1, a2, 2u);
  if ( v6 >= 0 )
  {
    v6 = HvlConfigureDynamicMemory(a1, a2, 2LL);
    v7 = a2;
    v8 = a1;
    if ( v6 < 0 )
    {
      v9 = 8;
LABEL_11:
      VslConfigureDynamicMemory(v8, v7, v9);
      goto LABEL_12;
    }
    VslConfigureDynamicMemory(a1, a2, 4u);
    v10 = 4LL;
    v11 = a2;
    v12 = a1;
LABEL_6:
    HvlConfigureDynamicMemory(v12, v11, v10);
  }
LABEL_12:
  KeReleaseGuardedMutex(&KiDynamicMemoryLock);
  return (unsigned int)v6;
}
