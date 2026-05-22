/*
 * XREFs of ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x180159FA0
 * Callers:
 *     ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180083580 (-OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x180007FAC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?GestureRecognizerStateToString@InputTraceLogging@@CAPEBDW4GestureRecognizerState@@@Z @ 0x180159498 (-GestureRecognizerStateToString@InputTraceLogging@@CAPEBDW4GestureRecognizerState@@@Z.c)
 *     ?ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z @ 0x180159E2C (-ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z.c)
 */

char __fastcall InputTraceLogging::ShellGestures::StaleActiveContacts(int a1, int a2, int a3, int a4, int a5, int a6)
{
  const struct _tlgProvider_t *v10; // rax
  const char *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int v16; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+54h] [rbp-2Ch] BYREF
  const char *v18; // [rsp+58h] [rbp-28h] BYREF
  const char *v19; // [rsp+60h] [rbp-20h] BYREF
  const char *v20; // [rsp+68h] [rbp-18h] BYREF
  const char *v21; // [rsp+70h] [rbp-10h] BYREF

  v10 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v10 > 4u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v10, 512LL);
    if ( (_BYTE)v10 )
    {
      if ( a6 )
      {
        switch ( a6 )
        {
          case 1:
            v11 = "GestureStarted";
            break;
          case 2:
            v11 = "GestureInProgress";
            break;
          case 3:
            v11 = "GestureCompleted";
            break;
          case 4:
            v11 = "GestureCancelled";
            break;
          default:
            v11 = "UNKNOWN";
            break;
        }
      }
      else
      {
        v11 = "None";
      }
      v18 = v11;
      v19 = InputTraceLogging::GestureRecognizerStateToString(a5);
      v20 = InputTraceLogging::GestureRecognizerStateToString(a4);
      v21 = InputTraceLogging::ProcessorDecisionToString(a3);
      v16 = a2;
      v17 = a1;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
                      v14,
                      (__int64)&unk_18022241C,
                      v12,
                      v13,
                      (__int64)&v17,
                      (__int64)&v16,
                      (const unsigned __int16 **)&v21,
                      (const unsigned __int16 **)&v20,
                      (const unsigned __int16 **)&v19,
                      (const unsigned __int16 **)&v18);
    }
  }
  return (char)v10;
}
