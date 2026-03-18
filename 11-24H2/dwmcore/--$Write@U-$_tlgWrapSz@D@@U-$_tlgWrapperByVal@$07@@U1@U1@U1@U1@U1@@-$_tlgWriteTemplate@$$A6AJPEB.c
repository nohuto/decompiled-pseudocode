/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x1800055D8
 * Callers:
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18024D0BC (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18012ADD4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v12 = -1LL;
  if ( *a11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(*a11 + v13) );
  }
  if ( *a10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(*a10 + v14) );
  }
  if ( *a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(*a9 + v15) );
  }
  if ( *a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(*a8 + v16) );
  }
  if ( *a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(*a7 + v17) );
  }
  if ( *a5 )
  {
    do
      ++v12;
    while ( *(_BYTE *)(*a5 + v12) );
  }
  return tlgWriteTransfer_EventWriteTransfer(&dword_1803F8D50, a2, 0LL);
}
