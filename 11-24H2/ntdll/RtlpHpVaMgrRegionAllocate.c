/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x180090F84
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180092D78 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrAllocAligned @ 0x18009103C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18009122C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x180092B20 (RtlpHpEnvFreeVA.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // ax
  __int64 v4; // rbx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v8 = RtlpHpVaMgrAllocAligned(a1, &v9);
  v2 = v8;
  if ( v8 )
  {
    v3 = *(_WORD *)(a1 + 40);
    v7 = 0LL;
    WORD4(v7) = v3;
    v6 = 0LL;
    v4 = RtlpHpVaMgrRangeCreate(a1, v8, &v6);
    if ( v4 )
    {
      v2 = 0LL;
      v8 = 0LL;
    }
    else
    {
      v2 = v8;
    }
  }
  else
  {
    v4 = 0LL;
  }
  if ( v2 )
    RtlpHpEnvFreeVA(
      (unsigned int)&v8,
      (unsigned int)&v9,
      0x8000,
      (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
      *(_QWORD *)(a1 + 32));
  return v4;
}
