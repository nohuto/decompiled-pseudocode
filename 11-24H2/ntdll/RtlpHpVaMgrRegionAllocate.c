/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x18009BB10
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18009D908 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrAllocAligned @ 0x18009BBC8 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18009BDB8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x18009D6B0 (RtlpHpEnvFreeVA.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  PVOID v2; // rdx
  __int16 v3; // ax
  __int64 v4; // rbx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+10h] BYREF

  RegionSize = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  BaseAddress = (PVOID)RtlpHpVaMgrAllocAligned(a1, &RegionSize);
  v2 = BaseAddress;
  if ( BaseAddress )
  {
    v3 = *(_WORD *)(a1 + 40);
    v7 = 0LL;
    WORD4(v7) = v3;
    v6 = 0LL;
    v4 = RtlpHpVaMgrRangeCreate(a1, BaseAddress, &v6);
    if ( v4 )
    {
      v2 = 0LL;
      BaseAddress = 0LL;
    }
    else
    {
      v2 = BaseAddress;
    }
  }
  else
  {
    v4 = 0LL;
  }
  if ( v2 )
    RtlpHpEnvFreeVA(&BaseAddress, &RegionSize, *(_QWORD *)(a1 + 32));
  return v4;
}
