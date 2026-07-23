/*
 * XREFs of MiConstructNonRetpolineImageLoadRecord @ 0x1407F0E00
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140A7D73C (MiLogRetpolineImageLoadEvents.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 */

__int64 __fastcall MiConstructNonRetpolineImageLoadRecord(__int64 a1)
{
  const UNICODE_STRING *v1; // rsi
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int16 Length; // ax

  v1 = (const UNICODE_STRING *)(a1 + 88);
  result = MiAllocatePool(0x100uLL, *(unsigned __int16 *)(a1 + 88) + 40LL, 1380871501);
  v4 = result;
  if ( result )
  {
    Length = v1->Length;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_WORD *)(v4 + 18) = Length;
    *(_QWORD *)(v4 + 24) = v4 + 40;
    RtlUnicodeStringCopy((PUNICODE_STRING)(v4 + 16), v1);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(a1 + 156);
    return v4;
  }
  return result;
}
