/*
 * XREFs of ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x18006F9F8
 * Callers:
 *     ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x18006F900 (-Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<DispBrokerDesktop::ISessionBrokerInstance>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, GUID *, __int64); // r9
  __int64 v8; // r10
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = RoActivateInstance(a1, &v9);
  if ( v3 >= 0 )
  {
    v5 = *(_QWORD *)&GUID_4ae487a3_15f1_5a41_8381_fcd20b426364.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_4ae487a3_15f1_5a41_8381_fcd20b426364.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v5 = *(_QWORD *)GUID_4ae487a3_15f1_5a41_8381_fcd20b426364.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v5 )
    {
      v6 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
      v3 = v7(v8, &GUID_4ae487a3_15f1_5a41_8381_fcd20b426364, v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      *a2 = v9;
    }
  }
  return (unsigned int)v3;
}
