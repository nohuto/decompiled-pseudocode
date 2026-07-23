/*
 * XREFs of PdcpPortReleaseResources @ 0x14078E000
 * Callers:
 *     PdcPortOpenCommon @ 0x14078DE74 (PdcPortOpenCommon.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PdcpPortReleaseResources(_QWORD *P)
{
  __int64 v2; // rcx
  _BYTE v3[40]; // [rsp+20h] [rbp-328h] BYREF
  int v4; // [rsp+48h] [rbp-300h]
  int v5; // [rsp+4Ch] [rbp-2FCh]
  int v6; // [rsp+58h] [rbp-2F0h]
  int v7; // [rsp+5Ch] [rbp-2ECh]

  memset_0(v3, 0, 0x320uLL);
  v2 = P[3];
  *(_DWORD *)P = 0;
  if ( v2 )
  {
    v6 = *((_DWORD *)P + 4);
    v7 = *((_DWORD *)P + 5);
    v4 = 1;
    v5 = 6;
    guard_dispatch_icall_no_overrides(v2, v3);
  }
  ExFreePoolWithTag(P, 0);
}
