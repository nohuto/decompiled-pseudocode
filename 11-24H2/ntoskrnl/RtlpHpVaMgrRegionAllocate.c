/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x14021BAD8
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x1404596F4 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14020C9AC (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14021BB5C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x14021BBE4 (RtlpHpVaMgrRangeCreate.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rbx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]
  ULONG_PTR v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v8 = RtlpHpVaMgrAllocAligned(a1, &v7);
  if ( !v8 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 40);
  v6 = 0LL;
  WORD4(v6) = v2;
  v5 = 0LL;
  v3 = RtlpHpVaMgrRangeCreate(a1, v8, &v5);
  if ( !v3 )
    RtlpHpEnvFreeVA((ULONG_PTR *)&v8, &v7, 0x8000);
  return v3;
}
