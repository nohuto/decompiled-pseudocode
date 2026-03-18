/*
 * XREFs of HalpAcpiTableCacheInit @ 0x140C67860
 * Callers:
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 *     HalpSetupAcpiPhase0 @ 0x140C137FC (HalpSetupAcpiPhase0.c)
 * Callees:
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     HalpAcpiGetCachedTable @ 0x140478664 (HalpAcpiGetCachedTable.c)
 *     HalpUnmapVirtualAddress @ 0x140478B90 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x140478C5C (HalpMap.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpAcpiAllocateMemory @ 0x14053D0C0 (HalpAcpiAllocateMemory.c)
 *     HalpAcpiCacheTable @ 0x14053D144 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x14053D1B0 (HalpAcpiCopyBiosTable.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpAcpiCacheOverrideTables @ 0x140C0D774 (HalpAcpiCacheOverrideTables.c)
 *     HalpAcpiCalculateCacheSizeForOverrideTables @ 0x140C0D814 (HalpAcpiCalculateCacheSizeForOverrideTables.c)
 *     HalpAcpiFindRsdp @ 0x140C0D868 (HalpAcpiFindRsdp.c)
 */

__int64 __fastcall HalpAcpiTableCacheInit(__int64 a1)
{
  unsigned int Rsdp; // esi
  char v3; // bp
  __int64 v4; // r15
  unsigned int *v5; // rdi
  unsigned int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // ebx
  void *Memory; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  int *v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r15
  ULONG_PTR v17; // rax
  unsigned __int64 v18; // rdi
  char *v19; // rbx
  __int64 *v21; // [rsp+68h] [rbp+10h] BYREF

  Rsdp = 0;
  v21 = 0LL;
  v3 = 0;
  if ( HalpAcpiTableCacheList )
    return Rsdp;
  HalpAcpiTableCacheLock.Count = 1;
  HalpAcpiTableCacheLock.Event.Header.WaitListHead.Blink = &HalpAcpiTableCacheLock.Event.Header.WaitListHead;
  HalpAcpiTableCacheLock.Event.Header.WaitListHead.Flink = &HalpAcpiTableCacheLock.Event.Header.WaitListHead;
  qword_140E0F510 = (__int64)&HalpAcpiTableCacheList;
  HalpAcpiTableCacheList = (__int64)&HalpAcpiTableCacheList;
  HalpAcpiTableCacheLock.Owner = 0LL;
  HalpAcpiTableCacheLock.Contention = 0;
  LOWORD(HalpAcpiTableCacheLock.Event.Header.Lock) = 1;
  HalpAcpiTableCacheLock.Event.Header.Size = 6;
  HalpAcpiTableCacheLock.Event.Header.SignalState = 0;
  Rsdp = HalpAcpiFindRsdp(a1, (__int64 *)&v21);
  if ( (Rsdp & 0x80000000) != 0 )
    return Rsdp;
  v4 = *(_QWORD *)(a1 + 240);
  v5 = *(unsigned int **)(v4 + 120);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v4 + 128);
    if ( v6 )
    {
      v7 = HalpAcpiCalculateCacheSizeForOverrideTables((__int64)v5, v6);
      v8 = v7;
      if ( v7 )
      {
        Memory = (void *)HalpAcpiAllocateMemory(a1, v7);
        v10 = (__int64)Memory;
        if ( Memory )
        {
          memset_0(Memory, 0, v8);
          HalpAcpiCacheOverrideTables(a1, v10, v8, v5, v6);
        }
      }
    }
  }
  if ( HalpAcpiGetCachedTable(1413763922, 0LL, 0LL) || HalpAcpiGetCachedTable(1413763928, 0LL, 0LL) )
    v3 = 1;
  v11 = *v21;
  if ( *v21 == -1
    || (v12 = (int *)HalpMap(*v21, ((*v21 & 0xFFFuLL) + 4131) >> 12, 1uLL, 0, 4u, 0LL),
        (v13 = (unsigned __int64)v12) == 0) )
  {
    if ( v3 )
      return Rsdp;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to map RSDT\n");
    return (unsigned int)-1073741670;
  }
  v14 = *v12;
  if ( v14 != 1413763922 && v14 != 1413763928 )
  {
    if ( !v3 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: The RSDT pointer is invalid.\n");
      KeBugCheckEx(0xA5u, 0x1000AuLL, 0LL, 0LL, 0LL);
    }
    return Rsdp;
  }
  v15 = *(unsigned int *)(v13 + 4);
  HalpUnmapVirtualAddress(v13, ((v13 & 0xFFF) + 4131) >> 12, 0LL);
  v16 = (unsigned int)v15;
  v17 = HalpMap(v11, (v15 + (unsigned __int64)(v11 & 0xFFF) + 4095) >> 12, 1uLL, 0, 4u, 0LL);
  v18 = v17;
  if ( !v17 )
  {
    if ( v3 )
      return Rsdp;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to remap RSDT.\n");
    return (unsigned int)-1073741670;
  }
  v19 = HalpAcpiCopyBiosTable(a1, v17, v11);
  if ( v19 )
  {
    HalpUnmapVirtualAddress(v18, (v16 + (v18 & 0xFFF) + 4095) >> 12, 0LL);
    HalpAcpiCacheTable(a1, (__int64)v19);
  }
  else
  {
    if ( !v3 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: Unable to cache RSDT.\n");
      Rsdp = -1073741670;
    }
    HalpUnmapVirtualAddress(v18, (v16 + (v18 & 0xFFF) + 4095) >> 12, 0LL);
  }
  return Rsdp;
}
