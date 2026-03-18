/*
 * XREFs of CmpInitializeLoadOptions @ 0x1406676C8
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 */

wchar_t *__fastcall CmpInitializeLoadOptions(ULONG_PTR BugCheckParameter3)
{
  const char *v1; // rdx
  wchar_t *result; // rax
  STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(const char **)(BugCheckParameter3 + 216);
  SourceString = 0LL;
  RtlInitAnsiString(&SourceString, v1);
  CmpLoadOptions.Length = 0;
  CmpLoadOptions.MaximumLength = 2 * (SourceString.Length + 1);
  CmpLoadOptions.Buffer = (wchar_t *)CmpAllocatePool(0x100uLL);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &SourceString, 0);
  result = CmpLoadOptions.Buffer;
  CmpLoadOptions.Buffer[SourceString.Length] = 0;
  CmpLoadOptions.Length += 2;
  return result;
}
