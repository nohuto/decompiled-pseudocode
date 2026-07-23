/*
 * XREFs of HalpPmTimerInitialize @ 0x14055E1E0
 * Callers:
 *     <none>
 * Callees:
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 */

__int64 __fastcall HalpPmTimerInitialize(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID v3; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 1) )
  {
    v3 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 20), *(unsigned int *)(a1 + 28), MmNonCached);
    if ( v3 )
      *(_QWORD *)(a1 + 8) = v3;
    else
      return (unsigned int)-1073741670;
  }
  return v1;
}
