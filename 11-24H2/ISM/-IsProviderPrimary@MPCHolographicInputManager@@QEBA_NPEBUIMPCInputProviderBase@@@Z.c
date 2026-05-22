/*
 * XREFs of ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180011CD0
 * Callers:
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x180010558 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800121C4 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068890 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCHolographicInputManager::IsProviderPrimary(
        MPCHolographicInputManager *this,
        const struct IMPCInputProviderBase *a2)
{
  const struct IMPCInputProviderBase **v3; // rdi
  const struct IMPCInputProviderBase **v4; // rsi
  const struct IMPCInputProviderBase *v5; // rbx

  v3 = (const struct IMPCInputProviderBase **)*((_QWORD *)this + 450);
  v4 = (const struct IMPCInputProviderBase **)*((_QWORD *)this + 451);
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0;
    v5 = *v3;
    if ( *v3 )
      (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 8LL))(*v3);
    if ( v5 == a2 )
      break;
    if ( v5 )
      (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
    ++v3;
  }
  if ( v5 )
    (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
  return 1;
}
