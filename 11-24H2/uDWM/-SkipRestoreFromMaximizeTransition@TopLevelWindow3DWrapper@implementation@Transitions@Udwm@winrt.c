/*
 * XREFs of ?SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180095EF8
 * Callers:
 *     ?get_SkipRestoreFromMaximizeTransition@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x180095EB0 (-get_SkipRestoreFromMaximizeTransition@-$produce@UTopLevelWindow3DWrapper@implementation@Transit.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::SkipRestoreFromMaximizeTransition(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 4) + 288LL);
  if ( v1 )
    LOBYTE(v1) = (*(_BYTE *)(v1 + 742) & 8) != 0;
  return v1;
}
