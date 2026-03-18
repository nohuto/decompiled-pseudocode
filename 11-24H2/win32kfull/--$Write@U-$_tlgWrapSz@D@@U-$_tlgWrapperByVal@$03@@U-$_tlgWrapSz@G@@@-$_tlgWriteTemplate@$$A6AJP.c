/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140001940
 * Callers:
 *     NtUserCloseClipboard @ 0x14003D6F0 (NtUserCloseClipboard.c)
 *     NtUserOpenClipboard @ 0x140104A10 (NtUserOpenClipboard.c)
 *     NtUserGetClipboardData @ 0x1402418A0 (NtUserGetClipboardData.c)
 *     NtUserSetClipboardData @ 0x1402459F0 (NtUserSetClipboardData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rcx
  __int64 v8; // rax

  v7 = -1LL;
  if ( *a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*a7 + 2 * v8) );
  }
  if ( *a5 )
  {
    do
      ++v7;
    while ( *(_BYTE *)(*a5 + v7) );
  }
  return tlgWriteTransfer_EtwWriteTransfer(&dword_140398BB8, a2, 0LL);
}
