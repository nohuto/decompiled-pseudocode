/*
 * XREFs of sub_1800C33C0 @ 0x1800C33C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800C33C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  if ( *(_QWORD *)(a1 + 152) )
  {
    v2 = sub_1800131AC(a2);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, v2);
  }
}
