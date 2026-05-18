/*
 * XREFs of sub_1800C2A10 @ 0x1800C2A10
 * Callers:
 *     sub_1800BCB50 @ 0x1800BCB50 (sub_1800BCB50.c)
 *     sub_1800CB300 @ 0x1800CB300 (sub_1800CB300.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C2A10(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE v3[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  memset(v3, 0, 64);
  return (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v1 + 264LL))(v1, 8LL, v3);
}
