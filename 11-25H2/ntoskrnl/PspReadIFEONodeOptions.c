/*
 * XREFs of PspReadIFEONodeOptions @ 0x1409C1F1C
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140304FE8 (KeIsEmptyGroupMask.c)
 *     RtlQueryImageFileKeyOption @ 0x1409C0C60 (RtlQueryImageFileKeyOption.c)
 */

int __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2, __int64 *a3)
{
  int result; // eax
  __int64 v6; // rbx
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  result = RtlQueryImageFileKeyOption(a2, L"NodeOptions", 4u, &v7, 4u, 0LL);
  if ( result >= 0 )
  {
    result = v7;
    if ( (_BYTE)v7 )
    {
      if ( (unsigned __int8)v7 == 1 && v7 >> 8 < (unsigned __int16)KeNumberNodes && !*a3 )
      {
        v6 = KeNodeBlock[(unsigned __int64)v7 >> 8];
        result = KeIsEmptyGroupMask(v6 + 16);
        if ( !result )
          *a3 = v6;
      }
    }
    else if ( (v7 & 0xFFFFFF00) != 0 )
    {
      *(_DWORD *)(a1 + 496) |= 0x100000u;
    }
  }
  return result;
}
