/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180182C20
 * Callers:
 *     ??1?$ComPtr@VImmersiveShellStressTool@@@WRL@Microsoft@@QEAA@XZ @ 0x180182A9C (--1-$ComPtr@VImmersiveShellStressTool@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCSwitchController@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180182B60 (--$MakeAndInitialize@VCSwitchController@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803ECBE8 (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1803ED3C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1803ED3C0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1803ED3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1803ED3D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x1803ED3E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1803ED3E0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::Release(
        __int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *(unsigned int *)(a1 + 100);
  while ( (_DWORD)v2 != 0x7FFFFFFF
       && (_DWORD)v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 100), v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 24) + 64LL))(
        a1 + 24,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
