/*
 * XREFs of CmpAdjustSecurityCacheSize @ 0x1409A1594
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

char __fastcall CmpAdjustSecurityCacheSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  void *v6; // rax
  void *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9

  v5 = *(_DWORD *)(a1 + 1872);
  if ( v5 >= *(_DWORD *)(a1 + 1876) )
    goto LABEL_4;
  v6 = (void *)guard_dispatch_icall_no_overrides(16 * v5, 0LL, 1666403651LL, a4);
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(a1 + 1888), 16LL * *(unsigned int *)(a1 + 1872));
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 1888), (unsigned int)(16 * *(_DWORD *)(a1 + 1876)), v8, v9);
    *(_DWORD *)(a1 + 1876) = *(_DWORD *)(a1 + 1872);
    *(_QWORD *)(a1 + 1888) = v7;
LABEL_4:
    LOBYTE(v6) = 1;
  }
  return (char)v6;
}
