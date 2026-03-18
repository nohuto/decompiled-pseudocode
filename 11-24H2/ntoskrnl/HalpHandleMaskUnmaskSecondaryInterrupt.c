/*
 * XREFs of HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1403B98CC
 * Callers:
 *     HalpMaskInterrupt @ 0x1403B99F0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403B9B20 (HalpUnmaskInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     HalpFindSecondaryIcEntry @ 0x1403B9DDC (HalpFindSecondaryIcEntry.c)
 *     HalpInsertSecondarySignalList @ 0x140555ABC (HalpInsertSecondarySignalList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHandleMaskUnmaskSecondaryInterrupt(unsigned int a1, unsigned int a2, char a3)
{
  int v6; // edi
  __int64 SecondaryIcEntry; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rsi

  if ( SecondaryIcServicesEnabled )
  {
    if ( a1 >= SecondaryGsivRangeStart && a1 < SecondaryGsivRangeSize + SecondaryGsivRangeStart )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(a1);
      v10 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v11 = a1 - *(_DWORD *)(SecondaryIcEntry + 16);
        if ( a3 )
        {
          v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), a2, a1, v9);
          if ( v6 >= 0 )
            *(_BYTE *)(v10 + 16LL * (unsigned int)v11 + 172) = 0;
        }
        else
        {
          v12 = 2 * v11;
          *(_BYTE *)(SecondaryIcEntry + 8 * v12 + 172) = 1;
          v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(SecondaryIcEntry + 32), a2, a1, v9);
          if ( v6 < 0 )
            *(_BYTE *)(v10 + 8 * v12 + 172) = 0;
        }
        if ( _InterlockedDecrement((volatile signed __int32 *)(v10 + 112)) == 1
          && _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 116), 0, 0) )
        {
          if ( KeGetCurrentIrql() <= 2u )
            KeSetEvent((PRKEVENT)(v10 + 120), 0, 0);
          else
            HalpInsertSecondarySignalList(v10);
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
