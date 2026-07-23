/*
 * XREFs of LdrpLocateMrdata @ 0x180020B90
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180020B20 (LdrpChangeMrdataProtection.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpMakePermanentImageCommit @ 0x180020A08 (LdrpMakePermanentImageCommit.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1800DC7D0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 LdrpLocateMrdata()
{
  PVOID v0; // rdx
  PIMAGE_SECTION_HEADER v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(3u, (PVOID)0x180000000LL, 0LL, &OutHeaders);
  v1 = RtlSectionTableFromVirtualAddress(OutHeaders, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  result = LdrpMakePermanentImageCommit(0x180000000LL + v1->VirtualAddress, v1->Misc.PhysicalAddress);
  LdrpMrdataSize = v3;
  LdrpMrdataBase = v4;
  return result;
}
