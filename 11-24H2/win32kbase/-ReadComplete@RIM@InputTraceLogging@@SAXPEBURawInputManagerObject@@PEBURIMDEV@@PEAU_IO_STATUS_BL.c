/*
 * XREFs of ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x14005D7A0
 * Callers:
 *     rimSignalReadComplete @ 0x14005D0F0 (rimSignalReadComplete.c)
 * Callees:
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF764 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344@Z @ 0x1400B25E4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43AEBU?$_tlgWrapSz@D@@44@Z @ 0x1400F88BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1400F8CF0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::ReadComplete(
        const struct RawInputManagerObject *a1,
        const struct RIMDEV *a2,
        struct _IO_STATUS_BLOCK *a3)
{
  int v3; // eax
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // r9
  const struct RawInputManagerObject *v10; // r10
  int v11; // r8d
  __int64 v12; // rcx
  NTSTATUS v13; // [rsp+60h] [rbp-A0h] BYREF
  NTSTATUS Status; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTATUS Information; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  const char *v17; // [rsp+78h] [rbp-88h] BYREF
  const struct RawInputManagerObject *v18; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  const struct RawInputManagerObject *v20; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+BCh] [rbp-44h]
  const char **v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  const struct RawInputManagerObject **v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  NTSTATUS *p_Information; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  NTSTATUS *p_Status; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int64 *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]

  v3 = *((_DWORD *)a2 + 12);
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      if ( (*((_DWORD *)a2 + 46) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_14029AE30 > 4
          && (qword_14029AE40 & 0x100) != 0
          && (qword_14029AE48 & 0x100) == qword_14029AE48 )
        {
          v12 = *((_QWORD *)a2 + 56);
          LODWORD(v16) = *(unsigned __int16 *)(v12 + 18);
          v13 = *(unsigned __int16 *)(v12 + 16);
          *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a2 + 2);
          Information = a3->Information;
          Status = a3->Status;
          v17 = (const char *)a2;
          v18 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_14029AE30,
            (unsigned int)&unk_140279918,
            256,
            (_DWORD)a3,
            (__int64)&v17,
            (__int64)&v18,
            (__int64)&Status,
            (__int64)&Information,
            (__int64)&EventDescriptor,
            (__int64)&v13,
            (__int64)&v16);
        }
      }
      else if ( (unsigned int)dword_14029AE30 > 4
             && (qword_14029AE40 & 0x100) != 0
             && (qword_14029AE48 & 0x100) == qword_14029AE48 )
      {
        v5 = *((_QWORD *)a2 + 56);
        v13 = *(unsigned __int16 *)(v5 + 18);
        v6 = *(unsigned __int16 *)(v5 + 16);
        v7 = *((_QWORD *)a2 + 57);
        Information = v6;
        v17 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v7 + 24));
        v20 = *(const struct RawInputManagerObject **)(v8 + 16);
        Status = v9[2];
        LODWORD(v16) = *v9;
        *(_QWORD *)&EventDescriptor.Id = v8;
        v18 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_14029AE30,
          (unsigned int)&unk_140279980,
          v11,
          (_DWORD)v9,
          (__int64)&EventDescriptor,
          (__int64)&v18,
          (__int64)&v16,
          (__int64)&Status,
          (__int64)&v20,
          (__int64)&v17,
          (__int64)&Information,
          (__int64)&v13);
      }
    }
    else if ( (unsigned int)dword_14029AE30 > 4
           && v3 == 1
           && (qword_14029AE40 & 0x100) != 0
           && (qword_14029AE48 & 0x100) == qword_14029AE48 )
    {
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a2 + 2);
      LODWORD(v16) = a3->Information;
      v13 = a3->Status;
      v17 = (const char *)a2;
      v18 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_14029AE30,
        (unsigned int)&unk_1402798BD,
        256,
        (_DWORD)a3,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v13,
        (__int64)&v16,
        (__int64)&EventDescriptor);
    }
  }
  else if ( (unsigned int)dword_14029AE30 > 4
         && (qword_14029AE40 & 0x100) != 0
         && (qword_14029AE48 & 0x100) == qword_14029AE48 )
  {
    v16 = *((_QWORD *)a2 + 2);
    Status = a3->Information;
    Information = a3->Status;
    v33 = &v16;
    p_Status = &Status;
    p_Information = &Information;
    v27 = &v20;
    v25 = &v17;
    UserData.Ptr = (ULONGLONG)off_14029AE38;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v17 = (const char *)a2;
    EventDescriptor.Keyword = 256LL;
    v20 = a1;
    v34 = 8LL;
    v32 = 4LL;
    v30 = 4LL;
    v28 = 8LL;
    v26 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029AE38;
    v22 = &unk_140279870;
    UserData.Reserved = 2;
    v23 = 76;
    v24 = 1;
    v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_14029AE50, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
