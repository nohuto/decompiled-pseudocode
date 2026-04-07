/*
 * XREFs of ?WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ @ 0x18004A950
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004AB68 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ @ 0x1800153C0 (-Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180059B74 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 */

void __fastcall UDwmTrace::WindowMoveResizeCrossfadeAnimationScheduled(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rcx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = UDwmTrace::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v1, 0x200000000000LL) )
    {
      v5 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v2,
        (unsigned int)&unk_180112479,
        v3,
        v4,
        (__int64)&v5);
    }
  }
}
