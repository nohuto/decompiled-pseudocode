/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x180159528
 * Callers:
 *     RtlpHpHeapProtect @ 0x180159364 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpLargeAllocationProtect(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int128 v6; // [rsp+50h] [rbp-18h]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = ZwQueryVirtualMemory(-1LL, v8, 0LL, &v4, 48LL, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = *((_QWORD *)&v5 + 1);
    return ZwProtectVirtualMemory(-1LL, &v8, &v7, a2);
  }
  return result;
}
