/*
 * XREFs of PopMirrorPhysicalMemory @ 0x140B58450
 * Callers:
 *     MiMirrorPerformBlackWrites @ 0x14042FA90 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorPerformBrownWrites @ 0x140455630 (MiMirrorPerformBrownWrites.c)
 * Callees:
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 */

__int64 __fastcall PopMirrorPhysicalMemory(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  ULONG v3; // r8d

  if ( !BugCheckParameter4 )
    return 3221225626LL;
  v2 = (unsigned __int64)(a2 + 4095) >> 12;
  v3 = v2 + 1;
  if ( (unsigned __int64)(a2 + 4095) >= 0x1000 )
    v3 = v2;
  RtlClearBits((PRTL_BITMAP)(BugCheckParameter4 + 64), a1 >> 12, v3);
  return 0LL;
}
