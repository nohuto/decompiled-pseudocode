/*
 * XREFs of ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1400E358C
 * Callers:
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E29F0 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400021AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFrame(const struct RIMDEV *a1, const struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *v2; // r8
  const struct RIMDEV *v3; // r9
  int v4; // edx
  void *v5; // rdx
  const struct RIMDEV *v6; // [rsp+50h] [rbp-10h] BYREF
  const struct RIMDEV *v7; // [rsp+58h] [rbp-8h] BYREF
  int v8; // [rsp+70h] [rbp+10h] BYREF
  int v9; // [rsp+80h] [rbp+20h] BYREF
  __int64 v10; // [rsp+88h] [rbp+28h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL);
  if ( (unsigned int)(v4 - 1) > 3 )
  {
    if ( (unsigned int)(v4 - 5) <= 1 )
    {
      if ( (unsigned int)dword_14029AE30 <= 4
        || (qword_14029AE40 & 0x20) == 0
        || (qword_14029AE48 & 0x20) != qword_14029AE48 )
      {
        return;
      }
      v5 = &unk_14027BEBC;
    }
    else if ( v4 == 7 )
    {
      if ( (unsigned int)dword_14029AE30 <= 4
        || (qword_14029AE40 & 0x20) == 0
        || (qword_14029AE48 & 0x20) != qword_14029AE48 )
      {
        return;
      }
      v5 = &unk_14027BE61;
    }
    else
    {
      if ( (unsigned int)dword_14029AE30 <= 4 || !tlgKeywordOn((__int64)&dword_14029AE30, 32LL) )
        return;
      v5 = &unk_14027BE02;
    }
    v8 = *((_DWORD *)v2 + 12);
    v9 = *((_DWORD *)v2 + 10);
    v10 = *((_QWORD *)v2 + 9);
    v7 = (const struct RIMDEV *)*((_QWORD *)v2 + 27);
    v6 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)v5,
      (__int64)v2,
      (__int64)v3,
      (__int64)&v6,
      (__int64)&v7,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
    return;
  }
  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x20) != 0 && (qword_14029AE48 & 0x20) == qword_14029AE48 )
  {
    v8 = *((_DWORD *)v2 + 12);
    v9 = *((_DWORD *)v2 + 10);
    v10 = *((_QWORD *)v2 + 9);
    v6 = (const struct RIMDEV *)*((_QWORD *)v2 + 27);
    v7 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027BC51,
      (__int64)v2,
      (__int64)a1,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
}
