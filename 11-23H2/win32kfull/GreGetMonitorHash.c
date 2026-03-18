/*
 * XREFs of GreGetMonitorHash @ 0x1C005AC24
 * Callers:
 *     ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C005AACC (-GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C005ADCC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetMonitorHash(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r9d
  unsigned int (__fastcall *v6)(struct _LUID, _QWORD, __int64, __int64); // rdi
  unsigned int v7; // ebx
  struct _LUID *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v5 = -1073741811;
  if ( a1 && (*(_DWORD *)(a1 + 40) & 1) != 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
  {
    v6 = *(unsigned int (__fastcall **)(struct _LUID, _QWORD, __int64, __int64))(DxDdGetDxgkWin32kInterface() + 784);
    v7 = *(_DWORD *)(*(_QWORD *)(v10 + 2552) + 248LL);
    v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6)(*v8, v7, a2, a3);
  }
  return v5;
}
