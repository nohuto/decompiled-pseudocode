/*
 * XREFs of ?TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z @ 0x140119210
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@4@Z @ 0x140119444 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U2@@-$_tlgWrit.c)
 */

void __fastcall TraceLoggingBroadcastMessage(const struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v9; // ebx
  __int64 ProcessImageFileName; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF

  v5 = a4;
  if ( (unsigned int)dword_140398BB8 > 5 && (qword_140398BC8 & 2) != 0 && (qword_140398BD0 & 2) == qword_140398BD0 )
  {
    v16 = 0x1000000LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v9 = 0;
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)CurrentProcessWin32Process);
    v18 = v5;
    v17 = ProcessImageFileName;
    v19 = a3;
    v14 = a2;
    if ( a1 )
      v9 = *(_DWORD *)a1;
    v15 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned int)&unk_140367580,
      v12,
      v13,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
}
