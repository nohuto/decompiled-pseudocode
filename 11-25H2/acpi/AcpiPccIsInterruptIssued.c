/*
 * XREFs of AcpiPccIsInterruptIssued @ 0x1400641AC
 * Callers:
 *     ACPIPccProcessSci @ 0x140023CF0 (ACPIPccProcessSci.c)
 *     ACPIPccSciReceived @ 0x14002D58C (ACPIPccSciReceived.c)
 * Callees:
 *     AcpiPccIsCommandCompleteSet @ 0x140064150 (AcpiPccIsCommandCompleteSet.c)
 */

bool __fastcall AcpiPccIsInterruptIssued(__int64 a1)
{
  char v1; // bl
  unsigned __int8 v3; // al
  char v4; // bl
  bool IsCommandCompleteSet; // al

  v1 = 0;
  if ( a1 )
  {
    v3 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 0xFF )
    {
      v4 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 14LL);
      return (v4 & 2) != 0;
    }
    if ( v3 < 3u )
    {
      v4 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 6LL);
      return (v4 & 2) != 0;
    }
    if ( (unsigned __int8)(v3 - 3) <= 1u )
    {
      IsCommandCompleteSet = AcpiPccIsCommandCompleteSet((unsigned __int8 *)a1);
      if ( *(_BYTE *)a1 == 3 )
        return IsCommandCompleteSet;
      else
        return !IsCommandCompleteSet;
    }
  }
  return v1;
}
