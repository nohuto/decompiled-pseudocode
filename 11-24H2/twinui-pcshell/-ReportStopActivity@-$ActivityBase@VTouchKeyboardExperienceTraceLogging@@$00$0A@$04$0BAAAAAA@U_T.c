/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1801AEEA0
 * Callers:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180083D38 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AED44 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001B64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801D1A60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801D1A60.c)
 */

__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdi
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v19[13]; // [rsp+A8h] [rbp-11h] BYREF
  int v20; // [rsp+120h] [rbp+67h] BYREF
  DWORD v21; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+130h] [rbp+77h] BYREF
  __int64 v23; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v5 = a1[34];
    v6 = *(_DWORD *)(v5 + 72);
    if ( v6 >= 0 || v6 != *(_DWORD *)(v5 + 88) || (v7 = v5 + 80, v5 == -80) )
    {
      v12 = TouchKeyboardExperienceTraceLogging::Provider();
      v13 = (__int64)v12;
      if ( *(_DWORD *)v12 > 2u && tlgKeywordOn((__int64)v12, 0x200000000000LL) )
      {
        v14 = a1[34];
        v15 = *(_QWORD *)(v14 + 56);
        v23 = *(_QWORD *)(v14 + 48);
        v22 = v15;
        CurrentThreadId = GetCurrentThreadId();
        v17 = a1[34];
        v21 = CurrentThreadId;
        v20 = a2;
        v19[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v13,
          (__int64)&unk_1807E5A26,
          v17 + 8,
          v18,
          (__int64)v19,
          (__int64)&v20,
          (__int64)&v21,
          &v23,
          &v22);
      }
    }
    else
    {
      v8 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v8 > 2u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      {
        v10 = *(_QWORD *)(v7 + 120);
        v11 = a1[34];
        v19[2] = *(_QWORD *)(v7 + 112);
        v21 = *(_DWORD *)(v7 + 104);
        v19[3] = *(_QWORD *)(v7 + 96);
        v19[4] = *(_QWORD *)(v7 + 88);
        v20 = *(_DWORD *)(v7 + 80);
        v19[5] = *(_QWORD *)(v7 + 72);
        LODWORD(v22) = *(_DWORD *)(v7 + 32);
        v19[6] = *(_QWORD *)(v7 + 24);
        LODWORD(v23) = *(_DWORD *)v7;
        v19[7] = *(_QWORD *)(v7 + 128);
        v19[8] = *(_QWORD *)(v7 + 56);
        v19[1] = v10;
        v19[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v9,
          &unk_1807E590F,
          v11 + 8);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
