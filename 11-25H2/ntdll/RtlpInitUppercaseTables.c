/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800FB994
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800AFC74 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x180165250 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  PVOID v1; // rax
  PVOID SectionPointer; // [rsp+48h] [rbp+10h] BYREF

  SectionPointer = 0LL;
  if ( a1
    && (ZwGetNlsSectionPtr(0xEu, 0, 0LL, &SectionPointer, 0LL) >= 0
      ? (v1 = SectionPointer)
      : (v1 = 0LL, SectionPointer = 0LL),
        v1) )
  {
    _InterlockedExchange64(&qword_1801CF038, (__int64)v1 + 4);
    _InterlockedExchange64(
      &qword_1801CF040,
      (__int64)SectionPointer + 2 * *((unsigned __int16 *)SectionPointer + 1) + 4);
    qword_1801CF030 = (__int64)SectionPointer;
  }
  else
  {
    qword_1801CF038 = 0LL;
    qword_1801CF040 = 0LL;
    qword_1801CF030 = 0LL;
  }
  return 0LL;
}
