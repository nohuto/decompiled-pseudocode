/*
 * XREFs of ??$DoesFullScreenWindowDisableTouch@AEBH@TouchEdgeGestureTelemetry@@SAXAEBH@Z @ 0x18058C04C
 * Callers:
 *     _lambda_0d6ddfb9cb28f2ff155e4d8a1128ccbc_::operator() @ 0x18058C7E8 (_lambda_0d6ddfb9cb28f2ff155e4d8a1128ccbc_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180057F64 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D1850 (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall TouchEdgeGestureTelemetry::DoesFullScreenWindowDisableTouch<int const &>(_DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  bool v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = TouchGestureLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1 != 0;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                    (__int64)v2,
                    byte_1808120C5,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}
