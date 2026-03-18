/*
 * XREFs of CmpDestroySecurityCache @ 0x140885554
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpDestroySecurityCache(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdx

  result = *(unsigned int *)(a1 + 1872);
  v2 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1888) + 16LL * v2 + 8);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v5 + 8) != v4 + 8 || (v6 = *(_QWORD **)(v4 + 16), *v6 != v4 + 8) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      guard_dispatch_icall_no_overrides(v4);
      result = *(unsigned int *)(a1 + 1872);
      ++v2;
    }
    while ( v2 < (unsigned int)result );
    if ( (_DWORD)result )
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 1888));
  }
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_DWORD *)(a1 + 1872) = 0;
  *(_DWORD *)(a1 + 1876) = 0;
  return result;
}
