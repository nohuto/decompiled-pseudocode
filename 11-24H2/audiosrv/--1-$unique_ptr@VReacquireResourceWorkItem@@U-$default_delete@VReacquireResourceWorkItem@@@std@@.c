/*
 * XREFs of ??1?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAA@XZ @ 0x1800A262C
 * Callers:
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x18007B1E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 *     ?ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z @ 0x1800EEC50 (-ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VReacquireResourceWorkItem@@@std@@QEBAXPEAVReacquireResourceWorkItem@@@Z @ 0x1800EB1C0 (--R-$default_delete@VReacquireResourceWorkItem@@@std@@QEBAXPEAVReacquireResourceWorkItem@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ReacquireResourceWorkItem>::~unique_ptr<ReacquireResourceWorkItem>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<ReacquireResourceWorkItem>::operator()();
  return result;
}
