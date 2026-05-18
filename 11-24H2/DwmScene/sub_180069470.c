/*
 * XREFs of sub_180069470 @ 0x180069470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180069470(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rbx
  int v6; // esi
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 256);
  v6 = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  v10 = v6;
  if ( sub_180040AFC(a1 + 256, (__int64)&v10) == *(_QWORD *)(a1 + 256) )
    return 0;
  v10 = v6;
  v7 = sub_1800502A0(v3, (__int64)v9, &v10);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 40LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)v7 + 40LL),
           a2,
           a3);
}
