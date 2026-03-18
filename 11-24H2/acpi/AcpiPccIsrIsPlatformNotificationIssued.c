/*
 * XREFs of AcpiPccIsrIsPlatformNotificationIssued @ 0x140064210
 * Callers:
 *     ACPIPccProcessSci @ 0x140023CF0 (ACPIPccProcessSci.c)
 *     ACPIPccSciReceived @ 0x14002D58C (ACPIPccSciReceived.c)
 * Callees:
 *     AcpiPccIsCommandCompleteSet @ 0x140064150 (AcpiPccIsCommandCompleteSet.c)
 */

bool __fastcall AcpiPccIsrIsPlatformNotificationIssued(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 16);
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        return AcpiPccIsCommandCompleteSet((unsigned __int8 *)a1);
      }
      else if ( v2 == 2 )
      {
        return !AcpiPccIsCommandCompleteSet((unsigned __int8 *)a1);
      }
    }
    else
    {
      return (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 6LL) & 8) != 0;
    }
  }
  return v1;
}
