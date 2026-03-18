/*
 * XREFs of IsDeviceSelectedForPaging @ 0x1400BBD78
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400BABD8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

char __fastcall IsDeviceSelectedForPaging(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v5; // zf
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = a1 + 184;
  v7 = a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  v5 = a2 == *(_QWORD *)(a1 + 16);
  v8 = 1;
  LOBYTE(v2) = v5;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7);
  return v2;
}
