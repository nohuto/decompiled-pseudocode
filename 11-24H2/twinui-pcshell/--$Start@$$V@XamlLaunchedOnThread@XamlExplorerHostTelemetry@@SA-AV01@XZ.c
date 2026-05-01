/*
 * XREFs of ??$Start@$$V@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@SA?AV01@XZ @ 0x1800EB42C
 * Callers:
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x180211774 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x18024A4A0 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?StartActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1800EB464 (-StartActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EB4F0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

XamlExplorerHostTelemetry::XamlLaunchedOnThread *__fastcall XamlExplorerHostTelemetry::XamlLaunchedOnThread::Start<>(
        XamlExplorerHostTelemetry::XamlLaunchedOnThread *this)
{
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    "XamlLaunchedOnThread");
  *(_QWORD *)this = &XamlExplorerHostTelemetry::XamlLaunchedOnThread::`vftable';
  XamlExplorerHostTelemetry::XamlLaunchedOnThread::StartActivity(this);
  return this;
}
