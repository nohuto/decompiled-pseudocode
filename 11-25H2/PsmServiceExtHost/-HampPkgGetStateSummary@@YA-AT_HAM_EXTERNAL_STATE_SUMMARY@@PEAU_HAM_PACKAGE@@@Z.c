/*
 * XREFs of ?HampPkgGetStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18005A084
 * Callers:
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x180068D40 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 * Callees:
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A12C (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A1A8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgGetStateSummary(__int64 a1)
{
  int *i; // rbx
  unsigned int v3; // ebx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  for ( i = (int *)(a1 + 340); ; RtlWaitOnAddress(i, &v5, 4LL) )
  {
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)a1);
    if ( (*i & 0x30) == 0 )
      break;
    v5 = *i;
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)a1);
  }
  v3 = *(_DWORD *)(a1 + 344);
  HampPkgReleaseLockShared((struct _HAM_PACKAGE *)a1);
  return v3;
}
