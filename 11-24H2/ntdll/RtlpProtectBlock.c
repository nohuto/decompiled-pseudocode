/*
 * XREFs of RtlpProtectBlock @ 0x18014CD54
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x1800D0D50 (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpProtectBlock(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+20h] BYREF
  __int64 v5; // [rsp+58h] [rbp+28h] BYREF

  if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
  {
    v5 = a2 + 16 * (*(unsigned __int16 *)(a1 + 36) + 1LL);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 38) & 2) == 0 )
      return result;
    v5 = a2 - 4096;
  }
  v3 = 0;
  v4 = 4096LL;
  return ZwProtectVirtualMemory(-1LL, &v5, &v4, 1LL, &v3);
}
