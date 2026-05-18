/*
 * XREFs of sub_18002D990 @ 0x18002D990
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002FE8C @ 0x18002FE8C (sub_18002FE8C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18002D990(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16));
  Cnd_do_broadcast_at_thread_exit();
  sub_18002FE8C(&v2);
  return 0LL;
}
