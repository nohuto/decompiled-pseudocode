/*
 * XREFs of UMPDThreadCleanup @ 0x1400D8A90
 * Callers:
 *     <none>
 * Callees:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D8B1C (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x1400D8B68 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D8CD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D90D0 (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 */

void __fastcall UMPDThreadCleanup(struct _GRETHREAD *a1)
{
  struct _GRETHREAD *i; // rbx
  struct UMPDOBJ *ThreadCurrentUMPDObj; // rax
  UMPDOBJ *v3; // rdi
  void *v4; // rcx
  char *v5; // rcx
  __int64 v6; // rdx
  char **v7; // rax

  for ( i = a1; ; a1 = i )
  {
    ThreadCurrentUMPDObj = UMPDOBJ::GetThreadCurrentUMPDObj(a1);
    v3 = ThreadCurrentUMPDObj;
    if ( !ThreadCurrentUMPDObj )
      break;
    v5 = (char *)ThreadCurrentUMPDObj + 56;
    v6 = *((_QWORD *)ThreadCurrentUMPDObj + 7);
    if ( *(struct UMPDOBJ **)(v6 + 8) != (struct UMPDOBJ *)((char *)ThreadCurrentUMPDObj + 56)
      || (v7 = (char **)*((_QWORD *)ThreadCurrentUMPDObj + 8), *v7 != v5) )
    {
      __fastfail(3u);
    }
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    UMPDOBJ::FreeNonCachedUserMem(v3);
    UMPDOBJ::Dereference(v3);
  }
  vUMPDCachedResourceCleanup(i);
  v4 = (void *)*((_QWORD *)i + 8);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)i + 8) = 0LL;
  }
}
