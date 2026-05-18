/*
 * XREFs of sub_18002DAF0 @ 0x18002DAF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002FFEC @ 0x18002FFEC (sub_18002FFEC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18002DAF0(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16));
  Cnd_do_broadcast_at_thread_exit();
  sub_18002FFEC(&v2);
  return 0LL;
}
