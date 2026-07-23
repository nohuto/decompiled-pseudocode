/*
 * XREFs of RtlpGetFirstBlockAddress @ 0x18005FA00
 * Callers:
 *     RtlpWalkLFHBlock @ 0x18005F0E0 (RtlpWalkLFHBlock.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800CE2C0 (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetFirstBlockAddress(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  v2 = a1[19];
  if ( (v2 & 1) != 0 )
    return ((16 * (a1[18] + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
         - 16LL * a1[18]
         + ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL)
         - 16;
  if ( (v2 & 2) != 0 )
    return ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  return a2
       + ((unsigned __int16)a2 ^ (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(a2 + 24) ^ (unsigned __int64)*(unsigned __int16 *)(**(_QWORD **)a1 + 24LL));
}
