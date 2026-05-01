/*
 * XREFs of ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803DE04C
 * Callers:
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1803D8750 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DBB8C (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DBC48 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CortanaDesktopExperienceView::UpdateSuggestionsShowing(CortanaDesktopExperienceView *this, char a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax

  if ( a2 != *((_BYTE *)this + 136) )
  {
    *((_BYTE *)this + 136) = a2;
    v2 = **((_QWORD **)this + 12);
    if ( a2 )
      v3 = *(void (**)(void))(v2 + 120);
    else
      v3 = *(void (**)(void))(v2 + 128);
    v3();
  }
}
