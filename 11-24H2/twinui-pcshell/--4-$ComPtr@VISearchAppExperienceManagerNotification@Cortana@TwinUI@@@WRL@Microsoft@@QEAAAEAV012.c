/*
 * XREFs of ??4?$ComPtr@VISearchAppExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803CDA40
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803D2B1C (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1803D2B1C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<TwinUI::Cortana::ISearchAppExperienceManagerNotification>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
