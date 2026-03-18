/*
 * XREFs of PdcpPortReleaseResources @ 0x14078E0D0
 * Callers:
 *     PdcPortOpenCommon @ 0x14078DF44 (PdcPortOpenCommon.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PdcpPortReleaseResources(_QWORD *P)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _BYTE v4[40]; // [rsp+20h] [rbp-328h] BYREF
  int v5; // [rsp+48h] [rbp-300h]
  int v6; // [rsp+4Ch] [rbp-2FCh]
  int v7; // [rsp+58h] [rbp-2F0h]
  int v8; // [rsp+5Ch] [rbp-2ECh]

  memset_0(v4, 0, 0x320uLL);
  v3 = P[3];
  *(_DWORD *)P = 0;
  if ( v3 )
  {
    v7 = *((_DWORD *)P + 4);
    v8 = *((_DWORD *)P + 5);
    v5 = 1;
    v6 = 6;
    guard_dispatch_icall_no_overrides(v3, v4, 800LL, v2);
  }
  ExFreePoolWithTag(P, 0);
}
