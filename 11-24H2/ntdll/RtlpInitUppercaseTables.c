/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800F9BA4
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800AC560 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x180163CC0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( a1 && ((int)ZwGetNlsSectionPtr(14LL, 0LL, 0LL, &v3, 0LL) >= 0 ? (v1 = v3) : (v1 = 0LL, v3 = 0LL), v1) )
  {
    _InterlockedExchange64(&qword_1801CD038, v1 + 4);
    _InterlockedExchange64(&qword_1801CD040, v3 + 2LL * *(unsigned __int16 *)(v3 + 2) + 4);
    qword_1801CD030 = v3;
  }
  else
  {
    qword_1801CD038 = 0LL;
    qword_1801CD040 = 0LL;
    qword_1801CD030 = 0LL;
  }
  return 0LL;
}
