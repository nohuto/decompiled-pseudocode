/*
 * XREFs of ?SingleRegionDetermined@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z @ 0x1805A69C4
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802338D0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1801A7B2C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall CSnapComponentTelemetry::SnapAssistProcessing::SingleRegionDetermined(
        CSnapComponentTelemetry::SnapAssistProcessing *this,
        struct tagRECT *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  LONG left; // edx
  const GUID *v7; // r8
  LONG v8[6]; // [rsp+40h] [rbp-18h] BYREF
  LONG bottom; // [rsp+60h] [rbp+8h] BYREF
  LONG right; // [rsp+70h] [rbp+18h] BYREF
  LONG top; // [rsp+78h] [rbp+20h] BYREF

  v4 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    left = a2->left;
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    v7 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    v8[0] = left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_180814E12,
      v7,
      v5,
      (__int64)v8,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
}
