/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x18009103C
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x180090F84 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x180092D78 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180092390 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r10
  int v5; // eax
  int v6; // eax
  int v7; // r9d
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  v9 = 0LL;
  v4 = (v3 >> 1) & 7;
  v5 = 0x2000;
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[v4] > 0x100000 )
    v5 = 12288;
  v6 = `RtlpHpMemoryTypeAllocFlags'::`2'::AllocFlags[v4] | v5;
  v7 = v6 | 0x40000;
  if ( (v3 & 0x10) == 0 )
    v7 = v6;
  RtlpHpEnvAllocVA((unsigned int)&v9, a2, a3, v7, 4);
  return v9;
}
