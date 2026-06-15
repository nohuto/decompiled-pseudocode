/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x1400736E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x140002428 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$01@@@-$_tlgWri.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x1400077F4 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 */

__int64 __fastcall CSystemEffectWrapper::TrackAPOFailureUnhandled(CSystemEffectWrapper *this, float a2)
{
  unsigned int v2; // edx
  char *v4; // rdi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 *v9; // rcx
  int v10; // eax
  __int16 v11; // dx
  __int16 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF
  char *v15; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 20);
  if ( v2 - 1 <= 2 )
  {
    v4 = (char *)this + 56;
    TrackSystemEffectBehavior(*((_QWORD *)this + 9), v2, 0x8007023E, 1, (__int64)this + 56, SLODWORD(a2));
    v6 = AudioDgTelemetryProvider::Provider(v5);
    if ( *(_DWORD *)v6 > 2u )
    {
      if ( tlgKeywordOn((__int64)v6, 256LL) )
      {
        v9 = (__int16 *)*((_QWORD *)this + 9);
        v10 = *((_DWORD *)this + 20);
        v15 = v4;
        v11 = *v9;
        v14 = v10;
        v13 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
          v8,
          (int)&unk_1400B0B41,
          v7,
          v8,
          (__int64)&v14,
          (__int64 *)&v15,
          (__int64)&v13);
      }
    }
  }
  return 0LL;
}
