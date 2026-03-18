/*
 * XREFs of ApiSetIsCurrentProcessWinstaLocked @ 0x140193CC0
 * Callers:
 *     UserSurfaceAccessCheck @ 0x1400D6330 (UserSurfaceAccessCheck.c)
 *     UserGlobalAtomTableCallout @ 0x140166C60 (UserGlobalAtomTableCallout.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B2370 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetIsCurrentProcessWinstaLocked(__int64 a1, __int64 a2)
{
  int (*v2)(void); // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 (*v5)(void); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 960LL);
  if ( v2
    && v2() >= 0
    && (v5 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 968LL)) != 0LL )
  {
    return v5();
  }
  else
  {
    return 0LL;
  }
}
