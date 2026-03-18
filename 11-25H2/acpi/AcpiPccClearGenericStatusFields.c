/*
 * XREFs of AcpiPccClearGenericStatusFields @ 0x140064120
 * Callers:
 *     ACPIPccProcessSci @ 0x140023CF0 (ACPIPccProcessSci.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140064380 (AcpiPccUpdateCommandCompleteStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccClearGenericStatusFields(__int64 a1, unsigned __int16 a2)
{
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 0xFF )
    {
      _InterlockedAnd16((volatile signed __int16 *)(*(_QWORD *)(a1 + 56) + 14LL), a2 | 8);
    }
    else if ( *(_BYTE *)a1 <= 2u )
    {
      _InterlockedAnd16((volatile signed __int16 *)(*(_QWORD *)(a1 + 56) + 6LL), a2);
    }
  }
}
