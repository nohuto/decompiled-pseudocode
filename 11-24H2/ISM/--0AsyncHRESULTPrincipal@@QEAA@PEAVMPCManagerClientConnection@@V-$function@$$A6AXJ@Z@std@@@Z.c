/*
 * XREFs of ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x1801741B0
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016D72C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??0?$function@$$A6AXJ@Z@std@@QEAA@AEBV01@@Z @ 0x1801730D0 (--0-$function@$$A6AXJ@Z@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AsyncHRESULTPrincipal::AsyncHRESULTPrincipal(
        __int64 a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)a1 = &BamoAsyncHRESULTPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncHRESULTPrincipal::`vftable'{for `IAsyncHRESULTPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoAsyncHRESULTPrincipalImpl::`vftable';
  *(_QWORD *)a1 = &AsyncHRESULTPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncHRESULTPrincipal::`vftable'{for `IAsyncHRESULTPrincipal'};
  std::function<void (long)>::function<void (long)>(a1 + 56, a3);
  *(_BYTE *)(a1 + 120) = 1;
  v6 = *(_QWORD *)(a3 + 56);
  if ( v6 )
  {
    LOBYTE(v5) = v6 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return a1;
}
