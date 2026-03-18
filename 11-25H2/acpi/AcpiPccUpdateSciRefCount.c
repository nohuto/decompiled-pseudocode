/*
 * XREFs of AcpiPccUpdateSciRefCount @ 0x1400643EC
 * Callers:
 *     AcpiPccCommandComplete @ 0x140050C90 (AcpiPccCommandComplete.c)
 *     AcpiPccEjectInterface @ 0x140050E7C (AcpiPccEjectInterface.c)
 *     AcpiPccRingDoorbell @ 0x140051340 (AcpiPccRingDoorbell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccUpdateSciRefCount(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 0xFF && (result = *(_QWORD *)(a1 + 56), *(__int16 *)(result + 12) < 0)
      || !*(_BYTE *)a1 && (result = *(_QWORD *)(a1 + 56), *(__int16 *)(result + 4) < 0) )
    {
      if ( a2 )
        _InterlockedIncrement(&AcpiPccSciReferenceCount);
      else
        _InterlockedDecrement(&AcpiPccSciReferenceCount);
    }
  }
  return result;
}
