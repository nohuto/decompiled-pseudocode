/*
 * XREFs of ?DeadzoneJumpSuggestion@Cursor@InputTraceLogging@@SAXIAEBUtagPOINT@@0@Z @ 0x1401550F4
 * Callers:
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140186F30 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x140008F18 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Cursor::DeadzoneJumpSuggestion(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  int *v3; // r8
  void *v4; // r9
  int *v5; // r10
  int v6; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+54h] [rbp-14h] BYREF
  void *v8; // [rsp+58h] [rbp-10h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 8LL) )
  {
    v9 = v3[1];
    v10 = *v3;
    v6 = v5[1];
    v7 = *v5;
    v8 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027CF54,
      (__int64)v3,
      (__int64)v4,
      &v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v10,
      (__int64)&v9);
  }
}
