/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18001096C
 * Callers:
 *     HamConnectToServerEx @ 0x180011840 (HamConnectToServerEx.c)
 * Callees:
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8)
{
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 *v14; // [rsp+60h] [rbp-29h]
  int v15; // [rsp+68h] [rbp-21h]
  int v16; // [rsp+6Ch] [rbp-1Dh]
  __int64 v17; // [rsp+70h] [rbp-19h]
  __int64 v18; // [rsp+78h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-9h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  _WORD *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  __int64 v24; // [rsp+A0h] [rbp+17h]
  __int64 v25; // [rsp+A8h] [rbp+1Fh]

  v24 = a8;
  v25 = 1LL;
  v8 = *a7;
  if ( *a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &unk_180024284;
    v10 = 2;
  }
  v22 = v10;
  v19 = a6;
  v17 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v21 = v8;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_18002F040;
  v23 = 0;
  v20 = 8LL;
  v18 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_18002F040;
  v15 = *(unsigned __int16 *)(a2 + 11);
  v14 = a2 + 11;
  v16 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
}
