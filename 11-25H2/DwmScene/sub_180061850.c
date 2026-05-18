/*
 * XREFs of sub_180061850 @ 0x180061850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180033460 @ 0x180033460 (sub_180033460.c)
 *     sub_1800620AC @ 0x1800620AC (sub_1800620AC.c)
 *     sub_18006214C @ 0x18006214C (sub_18006214C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180061850(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_180033460((__int64)a1, a2);
  v3 = sub_1800323A0((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801C4308, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801C4968, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C4128, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C40C8, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C40E8, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C4108, v7, 1LL);
  }
  sub_18006214C(a1);
  sub_1800620AC(a1);
  return sub_1800620FC(a1);
}
