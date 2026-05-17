/*
 * XREFs of RtlpProtectBlock @ 0x18014E304
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x180119B8C (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpProtectBlock(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+50h] [rbp+20h] BYREF
  __int64 v4; // [rsp+58h] [rbp+28h] BYREF

  if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
  {
    v4 = a2 + 16 * (*(unsigned __int16 *)(a1 + 36) + 1LL);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 38) & 2) == 0 )
      return result;
    v4 = a2 - 4096;
  }
  v3 = 4096LL;
  return ZwProtectVirtualMemory(-1LL, &v4, &v3, 1LL);
}
