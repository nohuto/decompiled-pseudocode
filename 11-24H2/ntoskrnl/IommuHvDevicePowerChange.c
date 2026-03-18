/*
 * XREFs of IommuHvDevicePowerChange @ 0x140565390
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvDevicePowerChange(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v6; // rcx
  int v7; // eax

  v4 = a2;
  BugCheckParameter4 = (unsigned __int8)a3;
  if ( qword_140FC1000 )
  {
    v6 = *a2;
    LOBYTE(a2) = a3;
    v7 = guard_dispatch_icall_no_overrides(v6, a2, a3, a4);
    if ( v7 == 3473497 )
      KeBugCheckEx(0x159u, 0x3002uLL, v4[4], (unsigned int)BugCheckParameter4, 0LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x159u, 0x3201uLL, v7, v4[4], BugCheckParameter4);
  }
  return 0LL;
}
