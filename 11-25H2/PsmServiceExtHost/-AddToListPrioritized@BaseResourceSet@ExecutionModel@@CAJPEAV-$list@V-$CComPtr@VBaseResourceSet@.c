/*
 * XREFs of ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18005F3C4
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180011FA0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800129D0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18007249C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddToListPrioritized(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax

  v2 = (_QWORD *)*a1;
  v5 = 0;
  while ( v2 != a1 && *(_DWORD *)(v2[2] + 1288LL) < a2[322] )
    v2 = (_QWORD *)*v2;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = (_QWORD *)v2[1];
    v7[1] = v8;
    *v7 = v2;
    *v8 = v7;
    v2[1] = v7;
    ++a1[2];
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
