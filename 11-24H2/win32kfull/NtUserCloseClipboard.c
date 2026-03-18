/*
 * XREFs of NtUserCloseClipboard @ 0x14003D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140001940 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     xxxCloseClipboard @ 0x14003D880 (xxxCloseClipboard.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14003D99C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // r8
  signed int LastError; // eax
  int v6; // eax
  bool v7; // sf
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  signed int v12; // [rsp+70h] [rbp+28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+30h] BYREF
  const char *v14; // [rsp+80h] [rbp+38h] BYREF
  __int64 v15; // [rsp+88h] [rbp+40h] BYREF

  EnterCrit(0LL, 0LL);
  v0 = *((_QWORD *)PtiCurrent() + 58) + 984LL;
  v2 = (int)xxxCloseClipboard(0LL);
  if ( (unsigned int)dword_140398BF0 > 5
    && (qword_140398C00 & 0x400000000000LL) != 0
    && (qword_140398C08 & 0x400000000000LL) == qword_140398C08 )
  {
    v13 = v0;
    if ( (_DWORD)v2 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v12 = LastError;
    v14 = "FunctionExit";
    v15 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v1,
      &unk_14036710D,
      v3,
      &v15,
      &v14,
      &v12,
      &v13);
  }
  if ( !(_DWORD)v2 )
  {
    v6 = UserGetLastError();
    v7 = v6 < 0;
    if ( v6 > 0 )
      v7 = 1;
    if ( v7
      && (unsigned int)dword_140398BB8 > 5
      && (qword_140398BC8 & 1) != 0
      && (qword_140398BD0 & 1) == qword_140398BD0 )
    {
      v13 = v0;
      v8 = UserGetLastError();
      if ( v8 > 0 )
        v8 = (unsigned __int16)v8 | 0x80070000;
      v12 = v8;
      v14 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v9,
        (__int64)&unk_1403670CF,
        v10,
        v11,
        &v14,
        (__int64)&v12,
        &v13);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
