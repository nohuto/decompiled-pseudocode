/*
 * XREFs of ??$?4U?$default_delete@VReacquireResourceWorkItem@@@std@@$0A@@?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E9E30
 * Callers:
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x18007B1E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 *     ?ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z @ 0x1800EEC50 (-ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VReacquireResourceWorkItem@@@std@@QEBAXPEAVReacquireResourceWorkItem@@@Z @ 0x1800EB1C0 (--R-$default_delete@VReacquireResourceWorkItem@@@std@@QEBAXPEAVReacquireResourceWorkItem@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<ReacquireResourceWorkItem>::operator=<std::default_delete<ReacquireResourceWorkItem>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<ReacquireResourceWorkItem>::operator()();
  return a1;
}
