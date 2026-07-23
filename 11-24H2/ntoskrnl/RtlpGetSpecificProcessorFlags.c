/*
 * XREFs of RtlpGetSpecificProcessorFlags @ 0x140B62D30
 * Callers:
 *     RtlDetectProcessorFeatures @ 0x140B6233C (RtlDetectProcessorFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetSpecificProcessorFlags(unsigned __int8 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rax

  v2 = 0;
  LODWORD(v3) = 0;
  v4 = 0LL;
  v5 = 0LL;
  while ( *(_DWORD *)((char *)KiCpuTable + v5) != a1 || *(_DWORD *)((char *)KiCpuTable + v5 + 4) != a2 )
  {
    v3 = (unsigned int)(v3 + 1);
    v4 = (unsigned int)v3;
    v5 = 20 * v3;
    if ( *((_DWORD *)&KiCpuTable[1] + 5 * v3) == 19 )
      return v2;
  }
  return *((unsigned int *)&KiCpuTable[2] + 5 * v4);
}
