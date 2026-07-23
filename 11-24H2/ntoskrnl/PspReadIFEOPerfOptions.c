/*
 * XREFs of PspReadIFEOPerfOptions @ 0x14077700C
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x140A173C0 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadIFEOPerfOptions(HANDLE KeyHandle, __int64 a2)
{
  __int64 result; // rax

  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
  {
    *(_DWORD *)(a2 + 4) |= 1u;
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  result = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
  if ( (int)result >= 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  return result;
}
