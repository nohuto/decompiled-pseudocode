/*
 * XREFs of ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x180048770
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioStateIO::Load(SpatialAudioStateIO *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  _OWORD *v9; // rax
  __int128 v10; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+50h] [rbp-38h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-28h] BYREF
  _OWORD *v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  const CHAR *v16; // [rsp+A0h] [rbp+18h] BYREF

  v13 = 0LL;
  v2 = *((_QWORD *)this + 66);
  v11 = 2;
  *(_OWORD *)pvar = 0LL;
  v10 = PKEY_SpatialAudio_Endpoint_State;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &v10, pvar);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v14 = v3;
      v16 = "SpatialAudioStateIO::Load";
      v15 = 28;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned __int8 *)&unk_1801AED6A,
        v5,
        v6,
        &v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  else if ( LOWORD(pvar[0]) != 65
         || LODWORD(pvar[1]) != 24
         || (v9 = v13,
             *((_OWORD *)this + 34) = *v13,
             *((_QWORD *)this + 70) = *((_QWORD *)v9 + 2),
             *((int *)this + 136) >= 4) )
  {
    *((_OWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 70) = 0LL;
  }
  PropVariantClear(pvar);
  return v7;
}
