/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x18011C95C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180038570 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1800397D0 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  unsigned __int64 v2; // rax
  bool v3; // cc
  int v4; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF

  NtProductType = 0;
  if ( !RtlGetNtProductType(&NtProductType) || NtProductType != NtProductWinNt )
    goto LABEL_6;
  v2 = MEMORY[0x7FFE0310];
  if ( !MEMORY[0x7FFE0310] )
    v2 = MEMORY[0x7FFE02E8];
  v3 = v2 <= 0x83400;
  v4 = 10;
  if ( !v3 )
LABEL_6:
    v4 = 20;
  *a1 = v4;
  return 0LL;
}
