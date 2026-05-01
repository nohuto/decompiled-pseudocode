/*
 * XREFs of ??$SessionIdleTaskCompletionRemoved@I@ViewManagerInteropTraceLogging@@SAX$$QEAI@Z @ 0x1800D05E8
 * Callers:
 *     _lambda_9a3222de221babd8ed80f71b88aa5d08_::operator() @ 0x18043E2C8 (_lambda_9a3222de221babd8ed80f71b88aa5d08_--operator().c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::operator() @ 0x1804494C8 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--operator().c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

const struct _tlgProvider_t *__fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int>(
        int *a1)
{
  const struct _tlgProvider_t *result; // rax
  int v3; // r9d
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v4 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807F8C10,
                                            0,
                                            v3,
                                            (__int64)&v4);
  }
  return result;
}
