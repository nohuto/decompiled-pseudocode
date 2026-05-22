/*
 * XREFs of ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180025630
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x180025680 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall DWMLegacyInputTarget::GetInputSite(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  if ( !*(_QWORD *)(a1 + 48) )
    DWMLegacyInputTarget::PopulateInputSiteFromWindowId((DWMLegacyInputTarget *)(a1 - 24));
  v4 = *(_QWORD *)(a1 + 48);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
