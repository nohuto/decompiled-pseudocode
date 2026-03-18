/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x1403CC0A0
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x1403CBCE4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1403CC01C (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned int v3; // r11d
  int v5; // ecx
  __int64 v6; // r10
  int v7; // ecx
  int v8; // r9d
  ULONG_PTR v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]
  unsigned int v13; // [rsp+40h] [rbp-18h]
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  v14 = 0LL;
  v5 = 0x2000;
  v6 = (v3 >> 1) & 7;
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[v6] > 0x100000 )
    v5 = 12288;
  v7 = `RtlpHpMemoryTypeAllocFlags'::`2'::AllocFlags[v6] | v5;
  v13 = *(unsigned __int8 *)(a1 + 45);
  v8 = v7 | 0x40000;
  LODWORD(v10) = 4;
  if ( (v3 & 0x10) == 0 )
    v8 = v7;
  RtlpHpEnvAllocVA(&v14, a2, a3, v8, v10, v11, (v3 >> 1) & 7, v12, v13);
  return v14;
}
