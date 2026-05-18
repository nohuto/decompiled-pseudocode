/*
 * XREFs of sub_18002A760 @ 0x18002A760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_18002A760(_BYTE *a1)
{
  char v1; // bl
  __int64 v2; // rcx
  bool v3; // di
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v6; // [rsp+28h] [rbp-10h]

  if ( !a1[160] )
    return 0;
  v1 = 1;
  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v5) + 8);
  v3 = !v2 || !*(_DWORD *)(v2 + 8);
  if ( v6 )
    sub_180010544(v6);
  if ( v3 )
    return 0;
  return v1;
}
