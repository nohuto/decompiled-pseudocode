/*
 * XREFs of KiBalanceSetManagerDeferredRoutine @ 0x1404840A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine6 @ 0x1406B6480 (KiCustomAccessRoutine6.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

LONG __fastcall KiBalanceSetManagerDeferredRoutine(__int64 a1, struct _KEVENT *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[22]; // [rsp+0h] [rbp-158h] BYREF
  _BYTE v10[55]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+C7h] [rbp-91h]
  __int64 v12; // [rsp+E7h] [rbp-71h]
  _DWORD *v13; // [rsp+140h] [rbp-18h]

  v13 = v9;
  memset_0(v10, 0, 0x5FuLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v9[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v12 = a3;
    v11 = __ROL8__(a2, a3);
    *(_QWORD *)&v10[31] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine6(a2);
  }
  return KeSetEvent(a2, 10, 0);
}
