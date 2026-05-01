/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x18009D020
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18006FC98 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  unsigned __int64 v2; // rax
  bool v3; // cc
  int v4; // eax
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  ProductType = 0;
  if ( !RtlGetNtProductType(&ProductType) || ProductType != NtProductWinNt )
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
