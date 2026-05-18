/*
 * XREFs of sub_180052970 @ 0x180052970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052DBC @ 0x180052DBC (sub_180052DBC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180052970(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  Cnd_do_broadcast_at_thread_exit();
  sub_180052DBC(&v2);
  return 0LL;
}
