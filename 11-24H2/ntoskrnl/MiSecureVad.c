/*
 * XREFs of MiSecureVad @ 0x1409EA8FC
 * Callers:
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MmSecureVirtualMemoryEx @ 0x1409EA790 (MmSecureVirtualMemoryEx.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     MiSetVadFlags @ 0x1402B8D5C (MiSetVadFlags.c)
 *     MmGetCurrentProcessorColor @ 0x140417C80 (MmGetCurrentProcessorColor.c)
 *     MiComparePteProtections @ 0x1404479F4 (MiComparePteProtections.c)
 *     MiLocateExclusiveSecure @ 0x140481B8C (MiLocateExclusiveSecure.c)
 *     MiInsertVadEvent @ 0x1404F1B48 (MiInsertVadEvent.c)
 */

__int64 __fastcall MiSecureVad(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, char a5, __int64 *a6)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  int v10; // r12d
  int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v17; // rbx
  unsigned int v18; // [rsp+20h] [rbp-28h]

  v6 = (a2 + a3 - 1) | 0xFFF;
  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v10 = a4 & 1;
  if ( (a4 & 1) != 0 )
    goto LABEL_32;
  v11 = 1;
  v12 = (a2 + a3 - 1) | 0xFFF;
  v13 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 != 2 )
    v11 = 4;
  result = MiComparePteProtections(a1, v13, v12, v11, v10 & v18);
  if ( (int)result >= 0 )
  {
LABEL_32:
    if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1))
      || (CurrentProcessorColor = MmGetCurrentProcessorColor(),
          PoolMm = ExAllocatePoolMm(0x40uLL, 0x58uLL, 1699966285, CurrentProcessorColor | 0x80000000),
          (v17 = PoolMm) == 0) )
    {
      *a6 = 0LL;
      return 3221225626LL;
    }
    else
    {
      *(_DWORD *)(PoolMm + 80) = 2;
      *(_QWORD *)(PoolMm + 8) = v7;
      *(_QWORD *)(PoolMm + 16) = v6;
      if ( v10 )
      {
        *(_DWORD *)(PoolMm + 8) |= 8u;
      }
      else if ( (a4 & 4) != 0 )
      {
        *(_DWORD *)(PoolMm + 8) |= 0xAu;
      }
      else if ( (a4 & 2) != 0 )
      {
        *(_DWORD *)(PoolMm + 8) |= 9u;
      }
      if ( (a5 & 1) != 0 )
        *(_DWORD *)(PoolMm + 8) |= 0x20u;
      if ( (a5 & 4) != 0 )
        *(_DWORD *)(PoolMm + 8) |= 0x40u;
      if ( (a5 & 8) != 0 )
        *(_DWORD *)(PoolMm + 8) |= 0x80u;
      if ( a4 < 0 )
        *(_DWORD *)(PoolMm + 8) |= 4u;
      if ( (a4 & 0x40000000) != 0 )
        *(_DWORD *)(PoolMm + 8) |= 0x10u;
      if ( (a4 & 0x20000000) != 0 )
        *(_DWORD *)(PoolMm + 8) |= 0x100u;
      MiInsertVadEvent(a1, (unsigned __int64 *)PoolMm, 1);
      MiSetVadFlags(a1, 1LL, 1);
      result = 0LL;
      *a6 = v17;
    }
  }
  return result;
}
