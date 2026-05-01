/*
 * XREFs of ??$NewWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x1800E9068
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801A7628 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E925C (-Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1801A7B2C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

const struct _tlgProvider_t *__fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::NewWindowRegionRect<float,float,float,float>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *result; // rax
  int v9; // r9d
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+44h] [rbp-14h] BYREF
  int v15; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v16[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  result = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v10 = *a3;
    v13 = *a4;
    v11 = *a2;
    v14 = v10;
    v12 = *a1;
    v15 = v11;
    v16[0] = v12;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807E7D8E,
                                            0,
                                            v9,
                                            (__int64)v16,
                                            (__int64)&v15,
                                            (__int64)&v14,
                                            (__int64)&v13);
  }
  return result;
}
