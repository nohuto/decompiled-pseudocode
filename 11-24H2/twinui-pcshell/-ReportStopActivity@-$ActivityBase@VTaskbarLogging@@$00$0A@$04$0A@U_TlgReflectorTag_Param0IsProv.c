/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180167010
 * Callers:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801663B4 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801664AC (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001B64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180166F28 (-Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801D1A60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801D1A60.c)
 */

__int64 __fastcall wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v19[13]; // [rsp+A8h] [rbp-11h] BYREF
  int v20; // [rsp+120h] [rbp+67h] BYREF
  DWORD v21; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+130h] [rbp+77h] BYREF
  __int64 v23; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[34];
    v5 = *(unsigned int *)(v4 + 72);
    if ( (int)v5 >= 0 || (_DWORD)v5 != *(_DWORD *)(v4 + 88) || (v6 = v4 + 80, v4 == -80) )
    {
      v11 = TaskbarLogging::Provider(v5);
      v12 = (__int64)v11;
      if ( *(_DWORD *)v11 > 2u && tlgKeywordOn((__int64)v11, 0x200000000000LL) )
      {
        v13 = a1[34];
        v14 = *(_QWORD *)(v13 + 56);
        v23 = *(_QWORD *)(v13 + 48);
        v22 = v14;
        CurrentThreadId = GetCurrentThreadId();
        v16 = a1[34];
        v21 = CurrentThreadId;
        v20 = a2;
        v19[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v12,
          (__int64)&unk_1807E5A26,
          v16 + 8,
          v17,
          (__int64)v19,
          (__int64)&v20,
          (__int64)&v21,
          &v23,
          &v22);
      }
    }
    else
    {
      v7 = TaskbarLogging::Provider(v5);
      if ( *(_DWORD *)v7 > 2u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
      {
        v9 = *(_QWORD *)(v6 + 120);
        v10 = a1[34];
        v19[2] = *(_QWORD *)(v6 + 112);
        v21 = *(_DWORD *)(v6 + 104);
        v19[3] = *(_QWORD *)(v6 + 96);
        v19[4] = *(_QWORD *)(v6 + 88);
        v20 = *(_DWORD *)(v6 + 80);
        v19[5] = *(_QWORD *)(v6 + 72);
        LODWORD(v22) = *(_DWORD *)(v6 + 32);
        v19[6] = *(_QWORD *)(v6 + 24);
        LODWORD(v23) = *(_DWORD *)v6;
        v19[7] = *(_QWORD *)(v6 + 128);
        v19[8] = *(_QWORD *)(v6 + 56);
        v19[1] = v9;
        v19[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v8,
          &unk_1807E590F,
          v10 + 8);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
