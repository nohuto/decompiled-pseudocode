/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140006CD8
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002E170 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140039DB0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14000219C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400078EC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  const struct _tlgProvider_t *v5; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v12; // rbx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  while ( v4 )
  {
    v17 = 0LL;
    v8 = v4[2];
    v4 = (_QWORD *)*v4;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, &v17);
    if ( v9 < 0 )
    {
      if ( *(_DWORD *)(v8 + 40) == 2 )
      {
        v12 = *(_QWORD *)(v8 + 32);
        if ( *(_DWORD *)(v12 + 4) )
        {
          v13 = AudioDgTelemetryProvider::Provider();
          if ( *(_DWORD *)v13 > 2u )
          {
            LODWORD(v16) = v9;
            v18 = v12 + 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              (int)v13,
              (int)&unk_1400B07C5,
              v14,
              v15,
              &v18,
              (__int64)&v16);
          }
        }
      }
    }
    else
    {
      v3 += v17;
      if ( *(_DWORD *)(v8 + 40) == 2 )
      {
        v10 = *(_QWORD *)(v8 + 32);
        if ( *(_DWORD *)(v10 + 4) )
        {
          v5 = AudioDgTelemetryProvider::Provider();
          if ( *(_DWORD *)v5 > 4u )
          {
            v16 = (double)(int)v17 / 10000000.0;
            v18 = v10 + 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
              (_DWORD)v5,
              (unsigned int)&unk_1400B07F9,
              v6,
              v7,
              (__int64)&v18,
              (__int64)&v16);
          }
        }
      }
    }
  }
  *a2 = v3;
  return 0LL;
}
