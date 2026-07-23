/*
 * XREFs of RtlpProtectBlock @ 0x18014B11C
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x1800CE2C0 (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpProtectBlock(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  ULONG OldProtect; // [rsp+40h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+20h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+28h] BYREF

  if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
  {
    BaseAddress = (PVOID)(a2 + 16 * (*(unsigned __int16 *)(a1 + 36) + 1LL));
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 38) & 2) == 0 )
      return result;
    BaseAddress = (PVOID)(a2 - 4096);
  }
  OldProtect = 0;
  RegionSize = 4096LL;
  return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u, &OldProtect);
}
