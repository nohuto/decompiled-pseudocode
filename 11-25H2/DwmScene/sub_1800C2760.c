/*
 * XREFs of sub_1800C2760 @ 0x1800C2760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800C2760(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  if ( *(_QWORD *)(a1 + 152) )
  {
    v2 = sub_1800130AC(a2);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, v2);
  }
}
