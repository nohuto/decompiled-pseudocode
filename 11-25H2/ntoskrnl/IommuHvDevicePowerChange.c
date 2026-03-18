/*
 * XREFs of IommuHvDevicePowerChange @ 0x140562B00
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvDevicePowerChange(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  ULONG_PTR BugCheckParameter4; // rbx
  int v5; // eax

  BugCheckParameter4 = a3;
  if ( qword_140FC0860 )
  {
    v5 = guard_dispatch_icall_no_overrides(*a2);
    if ( v5 == 3473497 )
      KeBugCheckEx(0x159u, 0x3002uLL, a2[4], (unsigned int)BugCheckParameter4, 0LL);
    if ( v5 < 0 )
      KeBugCheckEx(0x159u, 0x3201uLL, v5, a2[4], BugCheckParameter4);
  }
  return 0LL;
}
