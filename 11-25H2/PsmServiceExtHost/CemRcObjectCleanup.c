/*
 * XREFs of CemRcObjectCleanup @ 0x180041614
 * Callers:
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180041244 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800412BC (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041438 (-HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800414F4 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800415B0 (-HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800679B0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006C090 (-HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampSessionCleanup@@YAXPEAU_HAM_SESSION@@@Z @ 0x180083A2C (-HampSessionCleanup@@YAXPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax

  if ( a1[3] )
    NT_ASSERT("Object->ReferenceCount == 0");
  if ( a1[2] != -1LL )
  {
    v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v2 + 16);
    RtlRbRemoveNode(v2, a1);
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 1LL | (2LL * (*(_QWORD *)(v2 + 40) >> 1) - 2);
    RtlReleaseSRWLockExclusive(v2 + 16);
    result = RtlWakeAllConditionVariable(v2 + 32);
  }
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
