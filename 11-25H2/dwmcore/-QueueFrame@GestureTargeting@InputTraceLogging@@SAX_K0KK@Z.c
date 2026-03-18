/*
 * XREFs of ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801ADDC0
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180234030 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::QueueFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // r9d
  __int64 v10; // r8
  int v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+44h] [rbp-24h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF

  v8 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 4u && (*((_DWORD *)v8 + 4) & 0x800LL) != 0 )
  {
    v10 = *((_QWORD *)v8 + 3) & 0x800LL;
    if ( v10 == *((_QWORD *)v8 + 3) )
    {
      v11 = a4;
      v12 = a3;
      v13 = a2;
      v14 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v8,
        (unsigned int)&unk_1803D62DE,
        v10,
        v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
