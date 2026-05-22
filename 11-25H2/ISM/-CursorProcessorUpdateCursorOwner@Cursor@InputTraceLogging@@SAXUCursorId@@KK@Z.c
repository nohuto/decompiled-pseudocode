/*
 * XREFs of ?CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z @ 0x1801459CC
 * Callers:
 *     ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x1801460C8 (-UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

char __fastcall InputTraceLogging::Cursor::CursorProcessorUpdateCursorOwner(__int64 a1, int a2, int a3)
{
  int v5; // ebx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-10h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = HIDWORD(a1);
  v5 = a1;
  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 8LL);
    if ( (_BYTE)v6 )
    {
      v11 = v13;
      v14 = a3;
      v10 = a2;
      v12[0] = v5;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v8,
                     (__int64)&unk_180216599,
                     v7,
                     v8,
                     (__int64)v12,
                     (__int64)&v11,
                     (__int64)&v10,
                     (__int64)&v14);
    }
  }
  return (char)v6;
}
