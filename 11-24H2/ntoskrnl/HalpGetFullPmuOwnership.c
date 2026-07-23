/*
 * XREFs of HalpGetFullPmuOwnership @ 0x14053BC98
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1406FB2B0 (HalAllocateHardwareCounters.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall HalpGetFullPmuOwnership(__int64 *a1)
{
  ULONG ActiveProcessorCount; // eax
  ULONG v3; // edx
  __int64 *v4; // r8
  __int64 v5; // rax

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = 0;
  if ( ActiveProcessorCount )
  {
    v4 = KiProcessorBlock;
    do
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(*v4 + 96), 1, 0) )
        break;
      ++v3;
      ++v4;
    }
    while ( v3 < ActiveProcessorCount );
  }
  if ( v3 == ActiveProcessorCount )
  {
    v5 = HalpFullPmuHandle + 1;
    HalpFullPmuHandle = v5;
    if ( v5 == 3221225472LL )
    {
      v5 = 0x80000000LL;
      HalpFullPmuHandle = 0x80000000LL;
    }
    *a1 = v5;
    return 0LL;
  }
  else
  {
    while ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(KiProcessorBlock[--v3] + 96));
    return 3221225626LL;
  }
}
