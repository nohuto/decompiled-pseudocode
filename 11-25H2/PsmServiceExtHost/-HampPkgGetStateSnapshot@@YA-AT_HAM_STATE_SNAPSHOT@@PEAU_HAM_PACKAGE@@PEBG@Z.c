/*
 * XREFs of ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180044404
 * Callers:
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18001C544 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800169D0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampAppGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z @ 0x180044328 (-HampAppGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180044A28 (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampPkgGetStateSnapshot(struct _HAM_PACKAGE *a1, const wchar_t *a2)
{
  unsigned __int8 v4; // bl
  struct _HAM_APPLICATION *i; // rax
  struct _HAM_RC_TREE_NODE *v6; // rdi
  int v8[4]; // [rsp+20h] [rbp-C8h] BYREF
  wchar_t String1[72]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = 0;
  memset_0(String1, 0, 0x82uLL);
  for ( i = HampPkgGetFirstApplication(a1); ; i = HamRcNodeGetSuccessor(a1, v6) )
  {
    v6 = i;
    if ( !i )
      break;
    v8[0] = 130;
    PsmGetApplicationNameFromKey((char *)i + 96, String1, v8);
    if ( !_wcsicmp(String1, a2) )
      v4 = (HampAppGetStateSnapshot(v6) | v4) & 3;
  }
  return v4;
}
