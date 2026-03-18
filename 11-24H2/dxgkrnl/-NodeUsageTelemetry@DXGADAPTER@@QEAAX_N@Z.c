/*
 * XREFs of ?NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z @ 0x140193274
 * Callers:
 *     ?NodeUsageTelemetryCallback@DXGGLOBAL@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401D5D60 (-NodeUsageTelemetryCallback@DXGGLOBAL@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1401D60B0 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperArray@$07@@@Z @ 0x140001E24 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall DXGADAPTER::NodeUsageTelemetry(DXGADAPTER *this)
{
  int v1; // eax
  char v3; // r10
  __int64 v4; // rsi
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v18; // [rsp+80h] [rbp-88h] BYREF
  __int16 v19; // [rsp+88h] [rbp-80h]
  _BYTE v20[400]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v21[512]; // [rsp+228h] [rbp+120h] BYREF

  v1 = *((_DWORD *)this + 111);
  if ( (v1 & 4) == 0 && (v1 & 0x10) == 0 && *((int *)this + 684) >= 0x2000 && !*((_BYTE *)this + 209) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, this, 0LL);
    if ( (!v3 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL) >= 0)
      && *(_QWORD *)(*((_QWORD *)this + 391) + 736LL) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 4864, 0LL);
      *((_QWORD *)this + 609) = KeGetCurrentThread();
      v4 = *((_QWORD *)this + 605);
      if ( *((_BYTE *)this + 4856) )
      {
        v5 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v7 = *((_QWORD *)this + 606);
        v8 = v5 * TimeIncrement;
        if ( v8 > v7 )
          v4 += v8 - v7;
      }
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 391) + 736LL) + 8LL) + 1096LL))(
        *(_QWORD *)(*((_QWORD *)this + 391) + 744LL),
        v21);
      v9 = *((_DWORD *)this + 750);
      memset(&v20[144], 0, 0x100uLL);
      if ( (unsigned int)dword_14015E650 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_14015E650, 0x400001000000LL) )
        {
          v19 = v9;
          v18 = v21;
          v15 = (unsigned __int16 *)*((_QWORD *)this + 241);
          v16 = *(_QWORD *)((char *)this + 412);
          v14 = v4;
          v17 = 0x1000000LL;
          LODWORD(v13) = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperArray<8>>(
            v10,
            (__int64)&unk_14013B379,
            v11,
            v12,
            (__int64)&v13,
            (__int64)&v17,
            (__int64)&v16,
            &v15,
            (__int64)&v14,
            (__int64 *)&v18);
        }
      }
      *((_QWORD *)this + 609) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 4864, 0LL);
      KeLeaveCriticalRegion();
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  }
}
