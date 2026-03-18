/*
 * XREFs of HvpReadLogEntryHeader @ 0x140A88880
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140A88758 (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpReadLogEntryHeader(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _OWORD *v6; // rcx
  _OWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  result = guard_dispatch_icall_no_overrides(a3, a1, 40LL, &v7);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    *(_OWORD *)a4 = *v7;
    *(_OWORD *)(a4 + 16) = v6[1];
    *(_QWORD *)(a4 + 32) = *((_QWORD *)v6 + 4);
  }
  return result;
}
