/*
 * XREFs of CmpAdjustSecurityCacheSize @ 0x140832018
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1408328B8 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

char __fastcall CmpAdjustSecurityCacheSize(__int64 a1)
{
  unsigned int v2; // ecx
  void *v3; // rax
  void *v4; // rdi

  v2 = *(_DWORD *)(a1 + 1872);
  if ( v2 >= *(_DWORD *)(a1 + 1876) )
    goto LABEL_4;
  v3 = (void *)guard_dispatch_icall_no_overrides(16 * v2, 0LL);
  v4 = v3;
  if ( v3 )
  {
    memmove(v3, *(const void **)(a1 + 1888), 16LL * *(unsigned int *)(a1 + 1872));
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 1888), (unsigned int)(16 * *(_DWORD *)(a1 + 1876)));
    *(_DWORD *)(a1 + 1876) = *(_DWORD *)(a1 + 1872);
    *(_QWORD *)(a1 + 1888) = v4;
LABEL_4:
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
