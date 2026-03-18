/*
 * XREFs of HalpAllocateAdapterCallbackV3 @ 0x1403326B0
 * Callers:
 *     HalpBuildScatterGatherList @ 0x140332DE0 (HalpBuildScatterGatherList.c)
 * Callees:
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpAllocateAdapterCallbackV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r9
  int v14; // [rsp+90h] [rbp+18h] BYREF

  v5 = *(_DWORD *)(a4 + 40);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(_QWORD *)(a4 + 160);
  v10 = *(_QWORD *)(a4 + 120);
  v11 = *(_QWORD *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  v12 = *(_QWORD *)(a4 + 32);
  v14 = v5;
  HalMapTransferEx(
    v11,
    v8,
    a3,
    v12 - *(_DWORD *)(v8 + 44) - *(_DWORD *)(v8 + 32),
    0,
    (__int64)&v14,
    *(_BYTE *)(a4 + 152),
    v9,
    *(_DWORD *)(a4 + 156),
    0LL,
    0LL);
  *(_QWORD *)(v9 + 8) = a4;
  if ( v10 )
    guard_dispatch_icall_no_overrides(a1, a2);
  return 3LL;
}
