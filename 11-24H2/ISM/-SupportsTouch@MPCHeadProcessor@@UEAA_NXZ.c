/*
 * XREFs of ?SupportsTouch@MPCHeadProcessor@@UEAA_NXZ @ 0x180068390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068890 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MPCHeadProcessor::SupportsTouch(MPCHeadProcessor *this)
{
  char v1; // bl
  struct MPCHolographicInputManager *Instance; // rax

  v1 = 0;
  if ( !MPCInputProviderBase::IsPrimary(this) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 450) + 352LL))(**((_QWORD **)Instance
                                                                                                  + 450)) != 0;
  }
  return v1;
}
