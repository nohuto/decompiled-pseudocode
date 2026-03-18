/*
 * XREFs of ArbFindSuitableRange @ 0x1400BD750
 * Callers:
 *     AcpiMemarbFindSuitableRange @ 0x14009F3C0 (AcpiMemarbFindSuitableRange.c)
 *     IrqArbFindSuitableRange @ 0x1400BD6B0 (IrqArbFindSuitableRange.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1400BDFDC (IrqArbpFindSuitableRangeMsi.c)
 * Callees:
 *     RtlFindRange_0 @ 0x1400567AF (RtlFindRange_0.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     ArbShareDriverExclusive @ 0x1400ABE2C (ArbShareDriverExclusive.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v2; // r10
  ULONGLONG v4; // r11
  __int64 v7; // r9
  UCHAR AttributeAvailableMask; // r8
  int v9; // ecx
  int v10; // edx
  ULONG Flags; // ebp

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  AttributeAvailableMask = *(_BYTE *)(a2 + 67);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
  {
    AttributeAvailableMask |= 1u;
    *(_BYTE *)(a2 + 67) = AttributeAvailableMask;
  }
  v9 = *(_DWORD *)(v7 + 36);
  v10 = (*(unsigned __int16 *)(a2 + 64) >> 2) & 2;
  Flags = v10 | 1;
  if ( (v9 & 1) == 0 )
    Flags = v10;
  if ( (v9 & 8) != 0 )
  {
    AttributeAvailableMask |= 0x40u;
    *(_BYTE *)(a2 + 67) = AttributeAvailableMask;
  }
  if ( RtlFindRange_0(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v2,
         v4,
         *(_QWORD *)(v7 + 16),
         *(_QWORD *)(v7 + 24),
         Flags,
         AttributeAvailableMask,
         *(PVOID *)(a1 + 328),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
