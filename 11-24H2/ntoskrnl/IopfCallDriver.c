/*
 * XREFs of IopfCallDriver @ 0x14025CA60
 * Callers:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404999F0 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x14049A4AC (IopPerfCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B84908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B84950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 * Callees:
 *     IopPoHandleIrp @ 0x1403CBD00 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
