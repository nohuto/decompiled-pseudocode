/*
 * XREFs of IopfCallDriver @ 0x1403741A0
 * Callers:
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140375990 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x14049F664 (IopPerfCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B82908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B82950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140BA7D40 (IovCallDriver.c)
 * Callees:
 *     IopPoHandleIrp @ 0x1403D9988 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopfCallDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // r9

  if ( (char)--*(_BYTE *)(a2 + 67) <= 0 )
    KeBugCheckEx(0x35u, a2, 0LL, 0LL, 0LL);
  v2 = (unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL);
  *(_QWORD *)(a2 + 184) = v2;
  *((_QWORD *)v2 + 5) = a1;
  v3 = *v2;
  if ( (_BYTE)v3 == 22 && (unsigned __int8)(v2[1] - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return guard_dispatch_icall_no_overrides(a1, a2, a1, v3);
}
