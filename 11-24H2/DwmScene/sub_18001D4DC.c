/*
 * XREFs of sub_18001D4DC @ 0x18001D4DC
 * Callers:
 *     sub_18002B810 @ 0x18002B810 (sub_18002B810.c)
 *     sub_180084BFC @ 0x180084BFC (sub_180084BFC.c)
 *     sub_1800D68A2 @ 0x1800D68A2 (sub_1800D68A2.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18001D4DC(__int64 a1)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
