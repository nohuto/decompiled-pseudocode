/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x1800BA3BC
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x1800BA304 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x1800BC0F8 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800BB710 (RtlpHpEnvAllocVA.c)
 */

PVOID __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, ULONG_PTR *a2)
{
  unsigned int v2; // r11d
  int v4; // [rsp+28h] [rbp-30h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 46);
  BaseAddress = 0LL;
  RtlpHpEnvAllocVA(&BaseAddress, a2, 4u, v4, (v2 >> 1) & 7, *(_QWORD *)(a1 + 32));
  return BaseAddress;
}
