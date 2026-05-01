/*
 * XREFs of ??4?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvider@@@Z @ 0x1801BCED4
 * Callers:
 *     ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BCB50 (-SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?subscribe_to_services@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1802C2700 (-subscribe_to_services@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Interna.c)
 *     ?PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180312C10 (-PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180607020 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
