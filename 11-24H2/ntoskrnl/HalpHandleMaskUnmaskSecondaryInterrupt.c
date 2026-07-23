/*
 * XREFs of HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14037229C
 * Callers:
 *     HalpMaskInterrupt @ 0x1403723C0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403724F0 (HalpUnmaskInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     HalpFindSecondaryIcEntry @ 0x1403727AC (HalpFindSecondaryIcEntry.c)
 *     HalpInsertSecondarySignalList @ 0x1405533FC (HalpInsertSecondarySignalList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHandleMaskUnmaskSecondaryInterrupt(unsigned int a1, unsigned int a2, char a3)
{
  int v6; // edi
  __int64 SecondaryIcEntry; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rsi

  if ( SecondaryIcServicesEnabled )
  {
    if ( a1 >= SecondaryGsivRangeStart && a1 < SecondaryGsivRangeSize + SecondaryGsivRangeStart )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(a1);
      v9 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v10 = a1 - *(_DWORD *)(SecondaryIcEntry + 16);
        if ( a3 )
        {
          v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), a2);
          if ( v6 >= 0 )
            *(_BYTE *)(v9 + 16LL * (unsigned int)v10 + 172) = 0;
        }
        else
        {
          v11 = 2 * v10;
          *(_BYTE *)(SecondaryIcEntry + 8 * v11 + 172) = 1;
          v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), a2);
          if ( v6 < 0 )
            *(_BYTE *)(v9 + 8 * v11 + 172) = 0;
        }
        if ( _InterlockedDecrement((volatile signed __int32 *)(v9 + 112)) == 1
          && _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 116), 0, 0) )
        {
          if ( KeGetCurrentIrql() <= 2u )
            KeSetEvent((PRKEVENT)(v9 + 120), 0, 0);
          else
            HalpInsertSecondarySignalList(v9);
        }
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
