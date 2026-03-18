/*
 * XREFs of GreGetMonitorHash @ 0x1401F5234
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x14024D2AC (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetMonitorHash(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r10d
  __int64 v6; // r9
  unsigned int (__fastcall *v7)(struct _LUID, _QWORD, __int64, __int64); // rdi
  unsigned int v8; // ebx
  struct _LUID *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  v5 = -1073741811;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 2568);
      if ( ((v6 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
      {
        v7 = *(unsigned int (__fastcall **)(struct _LUID, _QWORD, __int64, __int64))(DxDdGetDxgkWin32kInterface() + 784);
        v8 = *(_DWORD *)(*(_QWORD *)(v11 + 2568) + 248LL);
        v9 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v11);
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(*v9, v8, a2, a3);
      }
    }
  }
  return v5;
}
