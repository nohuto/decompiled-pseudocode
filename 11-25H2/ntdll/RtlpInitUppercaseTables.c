/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800FB994
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800AFC74 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x180165250 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( a1 && ((int)ZwGetNlsSectionPtr(14LL, 0LL, 0LL, &v3, 0LL) >= 0 ? (v1 = v3) : (v1 = 0LL, v3 = 0LL), v1) )
  {
    _InterlockedExchange64(&qword_1801CF038, v1 + 4);
    _InterlockedExchange64(&qword_1801CF040, v3 + 2LL * *(unsigned __int16 *)(v3 + 2) + 4);
    qword_1801CF030 = v3;
  }
  else
  {
    qword_1801CF038 = 0LL;
    qword_1801CF040 = 0LL;
    qword_1801CF030 = 0LL;
  }
  return 0LL;
}
