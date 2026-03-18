/*
 * XREFs of ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x140609E88
 * Callers:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14038085C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z @ 0x140609D44 (-NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z.c)
 *     ?NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z @ 0x140609D6C (-NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x14037EE98 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NP_CONTEXT::NpiPerformPageOut(
        struct NP_CONTEXT *a1,
        struct NP_CONTEXT::NP_CTX *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r14
  _QWORD *v10; // rbp
  __int64 v11; // rax

  v6 = 0;
  while ( 1 )
  {
    *((_QWORD *)a1 + 7) = 0LL;
    guard_dispatch_icall_no_overrides(a2, NP_CONTEXT::NpiTreeWalkCallback, a1, a4);
    v9 = (__int64 *)*((_QWORD *)a1 + 7);
    v10 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFF000uLL);
    v11 = *(_QWORD *)(((unsigned __int64)v10 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 || (v11 & 2) != 0 )
      break;
    --*((_DWORD *)a1 + 12);
LABEL_7:
    ++*((_DWORD *)a1 + 11);
    *v9 = v11;
    NP_CONTEXT::NpNodeFree(a2, v10, 1);
    if ( *((_DWORD *)a1 + 10) <= *(_DWORD *)a1 )
      return v6;
  }
  v11 = guard_dispatch_icall_no_overrides(a2, *v9 & 0xFFFFFFFFFFFFF000uLL, v7, v8);
  if ( v11 )
  {
    ++*((_DWORD *)a1 + 20);
    goto LABEL_7;
  }
  ++*((_DWORD *)a1 + 22);
  return (unsigned int)-1073741435;
}
