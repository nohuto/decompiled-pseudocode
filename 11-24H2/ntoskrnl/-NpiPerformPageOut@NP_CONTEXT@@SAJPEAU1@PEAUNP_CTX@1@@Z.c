/*
 * XREFs of ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x140608440
 * Callers:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14037A19C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z @ 0x1406082FC (-NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z.c)
 *     ?NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z @ 0x140608324 (-NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140378BB8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NP_CONTEXT::NpiPerformPageOut(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // rax

  v4 = 0;
  while ( 1 )
  {
    *((_QWORD *)a1 + 7) = 0LL;
    guard_dispatch_icall_no_overrides(a2, NP_CONTEXT::NpiTreeWalkCallback);
    v5 = (__int64 *)*((_QWORD *)a1 + 7);
    v6 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFF000uLL);
    v7 = *(_QWORD *)(((unsigned __int64)v6 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 || (v7 & 2) != 0 )
      break;
    --*((_DWORD *)a1 + 12);
LABEL_7:
    ++*((_DWORD *)a1 + 11);
    *v5 = v7;
    NP_CONTEXT::NpNodeFree(a2, v6, 1);
    if ( *((_DWORD *)a1 + 10) <= *(_DWORD *)a1 )
      return v4;
  }
  v7 = guard_dispatch_icall_no_overrides(a2, *v5 & 0xFFFFFFFFFFFFF000uLL);
  if ( v7 )
  {
    ++*((_DWORD *)a1 + 20);
    goto LABEL_7;
  }
  ++*((_DWORD *)a1 + 22);
  return (unsigned int)-1073741435;
}
