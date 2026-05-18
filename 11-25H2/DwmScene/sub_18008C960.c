/*
 * XREFs of sub_18008C960 @ 0x18008C960
 * Callers:
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 *     sub_1800698AC @ 0x1800698AC (sub_1800698AC.c)
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 *     sub_1800D9D84 @ 0x1800D9D84 (sub_1800D9D84.c)
 *     sub_1800D9DBA @ 0x1800D9DBA (sub_1800D9DBA.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_18008C960(__int64 a1)
{
  __int64 v2; // rcx

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_18001050C(v2);
  return sub_1800130E0(a1);
}
