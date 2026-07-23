/*
 * XREFs of HalpPmuGetNumberOfReservedCounters @ 0x140543700
 * Callers:
 *     EmonReleaseProfileResources @ 0x14055B470 (EmonReleaseProfileResources.c)
 *     EmonReserveProfileResourcesEnhanced @ 0x14055B970 (EmonReserveProfileResourcesEnhanced.c)
 *     EmonReserveProfileResourcesOriginal @ 0x14055BB30 (EmonReserveProfileResourcesOriginal.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall HalpPmuGetNumberOfReservedCounters(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  unsigned __int64 *v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  int v7; // r8d

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = (unsigned __int64 *)(a1 + 32);
    v5 = ActiveProcessorCount;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        v7 = 0;
        do
        {
          v7 += v6 & 1;
          v6 >>= 1;
        }
        while ( v6 );
        v2 += v7;
      }
      v4 += 10;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}
