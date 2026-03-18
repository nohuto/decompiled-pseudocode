/*
 * XREFs of ExtEnvFreePhysicalMemory @ 0x14055D3E0
 * Callers:
 *     IvtAllocateContextTable @ 0x1404D46BC (IvtAllocateContextTable.c)
 *     IvtFreeScalableModePasidTables @ 0x14056B300 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F1A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x14056FAC0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     HalpMmIsInsideHalVa @ 0x1405406F0 (HalpMmIsInsideHalVa.c)
 */

void __fastcall ExtEnvFreePhysicalMemory(__int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  KIRQL v7; // al
  __int64 *v8; // rbx
  KIRQL v9; // bp
  __int64 v10; // rcx
  __int64 *v11; // rax
  bool v12; // [rsp+58h] [rbp+20h] BYREF

  if ( a4 <= 1 )
  {
    v5 = a3;
    v12 = 0;
    if ( (int)HalpMmIsInsideHalVa((unsigned __int64)a2, &v12) >= 0 && !v12 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
      v8 = (__int64 *)ExtEnvAllocationList;
      v9 = v7;
      while ( v8 != &ExtEnvAllocationList )
      {
        if ( (void *)v8[2] == a2 && v8[4] == v5 && *((_DWORD *)v8 + 12) == a4 )
        {
          MmFreeContiguousMemory(a2);
          v10 = *v8;
          if ( *(__int64 **)(*v8 + 8) != v8 || (v11 = (__int64 *)v8[1], (__int64 *)*v11 != v8) )
            __fastfail(3u);
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          HalpMmAllocCtxFree(v10, (__int64)v8);
          break;
        }
        v8 = (__int64 *)*v8;
      }
      KeReleaseSpinLock(&ExtEnvAllocationLock, v9);
    }
  }
}
