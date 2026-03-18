/*
 * XREFs of ?ActivateKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@0W4_ChangeKbdTableReason@@@Z @ 0x1400F42D0
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3F20 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@@Z @ 0x140009768 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void InputTraceLogging::Keyboard::ActivateKeyboardLayout()
{
  bool v0; // al
  __int64 v1; // r8
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r9
  const char *v5; // rax
  int v6; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+54h] [rbp-24h] BYREF
  int v8; // [rsp+58h] [rbp-20h] BYREF
  const char *v9; // [rsp+60h] [rbp-18h] BYREF
  int v10; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 )
  {
    v0 = tlgKeywordOn((__int64)&dword_14029AE30, 0x4000LL);
    v4 = 0LL;
    if ( v0 )
    {
      if ( (_DWORD)v1 )
      {
        v1 = (unsigned int)(v1 - 1);
        if ( (_DWORD)v1 )
        {
          if ( (_DWORD)v1 == 1 )
            v5 = "LayoutActivated";
          else
            v5 = "UNKNOWN";
        }
        else
        {
          v5 = "LayoutLoaded";
        }
      }
      else
      {
        v5 = "ForegroundWindowChanged";
      }
      v9 = v5;
      if ( v2 )
      {
        v4 = *(unsigned int *)(v2 + 40);
        v10 = *(_DWORD *)(v2 + 112);
      }
      else
      {
        v10 = 0;
      }
      v7 = *(_DWORD *)(v3 + 112);
      v8 = *(_DWORD *)(v3 + 40);
      v6 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)&dword_14029AE30,
        (__int64)&unk_14027DB4A,
        v1,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v10,
        (void **)&v9);
    }
  }
}
