/*
 * XREFs of HalpHvEpWriteMsr @ 0x1404A9200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEpWriteMsr(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  if ( (a1 & 0x100000000LL) != 0 )
  {
    result = a3;
    __writemsr(a2, a3);
  }
  else
  {
    result = qword_140FC0F20;
    if ( qword_140FC0F20 )
    {
      LODWORD(a1) = a1 & 0x7FFFFFFF;
      return guard_dispatch_icall_no_overrides(a1, 1LL, &v4, &v5);
    }
  }
  return result;
}
