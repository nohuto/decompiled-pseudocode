/*
 * XREFs of ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1401BB918
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x140005BB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@@-$_tl.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::SetPointerShape(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( dword_140398B80 )
  {
    if ( (qword_140398B90 & 8) != 0 && (qword_140398B98 & 8) == qword_140398B98 )
    {
      IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3);
      IS_USERCRIT_OWNED_EXCLUSIVE(v4, v3, v5);
      if ( (unsigned int)dword_140398B80 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_140398B80, 8LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            (__int64)&dword_140398B80,
            (__int64)&unk_140368F18);
      }
    }
  }
}
