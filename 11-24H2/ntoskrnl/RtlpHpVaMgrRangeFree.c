/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x1404595CC
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x140459C58 (RtlpHpVaMgrRangeCleanup.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( (*(_BYTE *)a2 & 4) != 0 )
    v3 = *(_QWORD *)(a2 + 24);
  else
    v3 = *(unsigned __int16 *)(a2 + 24);
  RtlpHpVaMgrRangeCleanup(a1);
  v6 = (v2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  result = (v3 << 20) - v6 + v2;
  v5 = result;
  if ( result )
    return MmFreePoolMemory(&v6, (ULONG_PTR *)&v5);
  return result;
}
