/*
 * XREFs of ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1803D49A0
 * Callers:
 *     ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1803CD8D8 (--1-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortan.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1803CD9C4 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ??4?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803CDA98 (--4-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortan.c)
 *     ?Dispose@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803CF0F0 (-Dispose@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803D2A54 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803D2B1C (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1803D2B1C.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803D70D8 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803D8A40 (-Dispose@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803DD030 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803DD0F8 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_1803DD0F8.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)8);
}
