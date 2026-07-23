/*
 * XREFs of HalpClaimDebugResource @ 0x140543C54
 * Callers:
 *     HalpReportResourceUsage @ 0x140C10954 (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpClaimDebugResource(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax
  int i; // ecx
  int v4; // edx
  __int64 v5; // rax

  *(_QWORD *)a1 = HalpAddressUsageList;
  result = HalpDebugPortTable;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 33;
  *(_QWORD *)(a1 + 13) = a2;
  *(_QWORD *)(a1 + 21) = 8LL;
  *(_QWORD *)(a1 + 29) = 0LL;
  *(_QWORD *)(a1 + 37) = 0LL;
  HalpAddressUsageList = a1;
  if ( result && *(_BYTE *)(result + 40) == 1 )
  {
    for ( i = 0; ; ++i )
    {
      result = (unsigned __int16)HalpComPortIrqMapping[2 * i];
      if ( !(_WORD)result )
        break;
      if ( result == a2 )
      {
        v4 = (unsigned __int16)word_140023D8A[2 * i];
        v5 = (unsigned int)(v4 + 48);
        HalpIDTUsageFlags[v5] = 35;
        result = 5 * v5;
        HalpIDTUsage[result] = 15;
        *(_DWORD *)&byte_141008AD1[result] = v4;
        return result;
      }
    }
  }
  return result;
}
