/*
 * XREFs of MiGenerateSystemImageNames @ 0x140ABA72C
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     MiGetBaseNameFromImageFileName @ 0x1404C6CE4 (MiGetBaseNameFromImageFileName.c)
 */

__int64 __fastcall MiGenerateSystemImageNames(
        unsigned __int16 *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *Source,
        PUNICODE_STRING Destination)
{
  __int64 result; // rax
  _WORD *v10; // rdx
  UNICODE_STRING *v11; // r10
  unsigned __int16 Length; // ax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  __int64 Pool; // rax

  result = MiGetBaseNameFromImageFileName(a1, (__int64)a4);
  if ( (int)result >= 0 )
  {
    *Source = *v11;
    Source->Length -= *v10;
    Source->MaximumLength = Source->Length;
    *Destination = *v11;
    if ( a2 )
    {
      Length = Source->Length;
      Destination->MaximumLength = Source->Length;
      v13 = a2->Length + Length;
      if ( v13 < Length )
        return 3221225626LL;
      v14 = a2->Length + Length;
      Destination->MaximumLength = v13;
      v15 = *v10 + v13;
      if ( v15 < v14 )
        return 3221225626LL;
      Destination->MaximumLength = v15;
      Pool = MiAllocatePool(0x100uLL, v15, 1682730317);
      Destination->Buffer = (wchar_t *)Pool;
      if ( !Pool )
        return 3221225626LL;
      Destination->Length = 0;
      RtlAppendUnicodeStringToString(Destination, Source);
      RtlAppendUnicodeStringToString(Destination, a2);
      RtlAppendUnicodeStringToString(Destination, a4);
      a4->Buffer = &Destination->Buffer[(unsigned __int64)Source->Length >> 1];
      a4->Length += a2->Length;
      a4->MaximumLength += a2->Length;
    }
    if ( a3 )
      *a4 = *a3;
    return 0LL;
  }
  return result;
}
