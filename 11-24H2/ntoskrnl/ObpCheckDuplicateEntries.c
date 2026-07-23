/*
 * XREFs of ObpCheckDuplicateEntries @ 0x140A06628
 * Callers:
 *     ObpCaptureBoundaryDescriptor @ 0x140A062C8 (ObpCaptureBoundaryDescriptor.c)
 * Callees:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14086B5C0 (RtlEnumerateBoundaryDescriptorEntries.c)
 */

__int64 __fastcall ObpCheckDuplicateEntries(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0;
  v3[0] = a1;
  v3[1] = a1;
  v3[2] = 0LL;
  v5 = 0LL;
  v4 = 0LL;
  if ( (int)RtlEnumerateBoundaryDescriptorEntries(
              (_DWORD *)(a1 + 48),
              (__int64 (__fastcall *)(void *))ObpCompareEntryLevel1,
              (__int64)v3) < 0
    || (int)v5 < 0 )
  {
    return 0LL;
  }
  LOBYTE(v1) = HIDWORD(v4) == (_DWORD)v4;
  return v1;
}
