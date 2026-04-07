/*
 * XREFs of ??$detach_abi@I$0A@@winrt@@YA?A_P$$QEAI@Z @ 0x180095AFC
 * Callers:
 *     ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18004D830 (-Resolve@-$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008F5FC (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?store@?$_Atomic_storage@H$03@std@@QEAAXH@Z @ 0x1800A0BF0 (-store@-$_Atomic_storage@H$03@std@@QEAAXH@Z.c)
 *     ??$detach_from@I@impl@winrt@@YA?A_P$$QEAI@Z @ 0x1800E81BC (--$detach_from@I@impl@winrt@@YA-A_P$$QEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::detach_abi<unsigned int,0>(unsigned int *a1)
{
  return *a1;
}
