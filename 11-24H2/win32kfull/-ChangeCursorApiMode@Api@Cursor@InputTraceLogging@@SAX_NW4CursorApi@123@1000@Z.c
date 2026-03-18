/*
 * XREFs of ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140219AE8
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028B2FC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1400057E4 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?CursorApiToString@Api@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@123@@Z @ 0x1402D9CD0 (-CursorApiToString@Api@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@123@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::ChangeCursorApiMode(char a1)
{
  unsigned int v2; // r10d
  const char *v3; // rax
  unsigned int v4; // r11d
  __int64 v5; // r8
  __int64 v6; // r9
  const char *v7; // [rsp+60h] [rbp-20h] BYREF
  __int64 v8; // [rsp+68h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp-10h] BYREF

  if ( (unsigned int)dword_140398B80 > 4 && tlgKeywordOn((__int64)&dword_140398B80, 8LL) )
  {
    v3 = "ShapeChange";
    if ( !a1 )
      v3 = "Move";
    v7 = v3;
    v8 = InputTraceLogging::Cursor::Api::CursorApiToString(v2);
    v9 = InputTraceLogging::Cursor::Api::CursorApiToString(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398B80,
      (__int64)&unk_140368EAF,
      v5,
      v6,
      &v9,
      &v8,
      &v7);
  }
}
