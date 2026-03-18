/*
 * XREFs of CmpDestroySecurityCache @ 0x14097CE70
 * Callers:
 *     CmpDestroyHive @ 0x14097C14C (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpDestroySecurityCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // r8

  result = *(unsigned int *)(a1 + 1872);
  v5 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1888) + 16LL * v5 + 8);
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v8 + 8) != v7 + 8 || (v9 = *(_QWORD **)(v7 + 16), *v9 != v7 + 8) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      guard_dispatch_icall_no_overrides(v7, (unsigned int)(*(_DWORD *)(v7 + 24) + 32), v8, a4);
      result = *(unsigned int *)(a1 + 1872);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
    if ( (_DWORD)result )
      result = guard_dispatch_icall_no_overrides(
                 *(_QWORD *)(a1 + 1888),
                 (unsigned int)(16 * *(_DWORD *)(a1 + 1876)),
                 v10,
                 a4);
  }
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_DWORD *)(a1 + 1872) = 0;
  *(_DWORD *)(a1 + 1876) = 0;
  return result;
}
