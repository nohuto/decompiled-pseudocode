/*
 * XREFs of sub_18009686C @ 0x18009686C
 * Callers:
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_1800978E0 @ 0x1800978E0 (sub_1800978E0.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 *     sub_1800982F4 @ 0x1800982F4 (sub_1800982F4.c)
 *     sub_180098368 @ 0x180098368 (sub_180098368.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

bool __fastcall sub_18009686C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  return *(_DWORD *)(a1 + 36) != 4;
}
