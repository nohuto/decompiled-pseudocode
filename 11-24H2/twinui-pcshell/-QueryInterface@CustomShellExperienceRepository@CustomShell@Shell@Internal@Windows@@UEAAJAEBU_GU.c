/*
 * XREFs of ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18031D560
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18031D570 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23.c)
 *     ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18031D580 (-QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WCI@EAAJAEBU.c)
 *     ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18031D590 (-QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJAEBU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>>(
           this,
           a2,
           a3);
}
