/*
 * XREFs of ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180038830
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x1800382C0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceSettings(SpatialAudioDevicePropertyReader *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // esi
  unsigned int v7; // ebx
  bool v8; // zf
  _OWORD *v9; // rax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // kr00_8
  void *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm0
  void *v23; // rdx
  __int128 v24; // xmm0
  int v25; // [rsp+40h] [rbp+7h] BYREF
  int v26; // [rsp+44h] [rbp+Bh] BYREF
  const char *v27; // [rsp+48h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp+17h] BYREF
  _OWORD *v29; // [rsp+60h] [rbp+27h]
  __int128 v30; // [rsp+68h] [rbp+2Fh] BYREF
  unsigned int v31; // [rsp+78h] [rbp+3Fh]

  v29 = 0LL;
  v2 = *((_QWORD *)this + 51);
  *(_OWORD *)pvar = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar);
  v6 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v25 = v3;
      v26 = 366;
      v27 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)"SpatialAudioDevicePropertyReader::LoadDeviceSettings",
        (unsigned int)&unk_1801AED6A,
        v4,
        v5,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
    }
    goto LABEL_20;
  }
  v6 = -2004286463;
  v7 = 0;
  v8 = LOWORD(pvar[0]) == 65;
  *((_DWORD *)this + 128) = 0;
  if ( !v8 || LODWORD(pvar[1]) != 76 )
    goto LABEL_19;
  v9 = v29;
  *(_OWORD *)((char *)this + 428) = *v29;
  *(_OWORD *)((char *)this + 444) = v9[1];
  *(_OWORD *)((char *)this + 460) = v9[2];
  *(_OWORD *)((char *)this + 476) = v9[3];
  *(_QWORD *)((char *)this + 492) = *((_QWORD *)v9 + 8);
  *((_DWORD *)this + 125) = *((_DWORD *)v9 + 18);
  v10 = *((_DWORD *)this + 107);
  if ( v10 != 1509949441 )
  {
    if ( v10 == 1509949442 )
      goto LABEL_6;
LABEL_19:
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      goto LABEL_20;
    v25 = 390;
    v23 = &unk_1801AED6A;
    goto LABEL_24;
  }
  v24 = *(_OWORD *)((char *)this + 444);
  *((_DWORD *)this + 124) &= ~0x80u;
  *((_DWORD *)this + 107) = 1509949442;
  *(_OWORD *)((char *)this + 460) = v24;
LABEL_6:
  *((_DWORD *)this + 128) = 1;
  PropVariantClear(pvar);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
          *((_QWORD *)this + 51),
          &PKEY_SpatialAudio_EncoderDescriptor_Count,
          pvar);
  v6 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      goto LABEL_20;
    v26 = v11;
    v23 = &unk_1801AED6A;
    v25 = 395;
    goto LABEL_25;
  }
  if ( LOWORD(pvar[0]) != 2 )
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      goto LABEL_20;
    v25 = 397;
    v23 = &unk_1801AED30;
    goto LABEL_24;
  }
  v12 = SLOWORD(pvar[1]);
  if ( (unsigned int)SLOWORD(pvar[1]) > 9 )
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      goto LABEL_20;
    v25 = 398;
    v23 = &unk_1801AED30;
    goto LABEL_24;
  }
  *((_DWORD *)this + 106) = SLOWORD(pvar[1]);
  v14 = v12;
  v13 = 834LL * v12;
  if ( !is_mul_ok(v14, 0x342uLL) )
    v13 = -1LL;
  v15 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 63) = v15;
  if ( !v15 )
  {
    v6 = -2147024882;
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      goto LABEL_20;
    v25 = 403;
    v23 = &unk_1801AED6A;
LABEL_24:
    v26 = v6;
LABEL_25:
    v27 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)"SpatialAudioDevicePropertyReader::LoadDeviceSettings",
      (_DWORD)v23,
      v4,
      v5,
      (__int64)&v27,
      (__int64)&v25,
      (__int64)&v26);
    goto LABEL_20;
  }
  v6 = 0;
  while ( v7 < *((_DWORD *)this + 106) )
  {
    v16 = *((_QWORD *)this + 51);
    v31 = v7 + 2;
    v30 = PKEY_SpatialAudio_EncoderDescriptor_Array;
    v17 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(v16, &v30, pvar);
    v6 = v17;
    if ( v17 < 0 )
    {
      if ( (unsigned int)dword_1801D82E8 <= 2 )
        break;
      v26 = v17;
      v23 = &unk_1801AED6A;
      v25 = 412;
      goto LABEL_25;
    }
    if ( LOWORD(pvar[0]) != 65 )
    {
      v6 = -2147024809;
      if ( (unsigned int)dword_1801D82E8 <= 2 )
        break;
      v25 = 414;
      v23 = &unk_1801AED30;
      goto LABEL_24;
    }
    v18 = 6LL;
    v19 = v29;
    v20 = *((_QWORD *)this + 63) + 834LL * v7;
    do
    {
      v20 += 128LL;
      v21 = *v19;
      v19 += 8;
      *(_OWORD *)(v20 - 128) = v21;
      *(_OWORD *)(v20 - 112) = *(v19 - 7);
      *(_OWORD *)(v20 - 96) = *(v19 - 6);
      *(_OWORD *)(v20 - 80) = *(v19 - 5);
      *(_OWORD *)(v20 - 64) = *(v19 - 4);
      *(_OWORD *)(v20 - 48) = *(v19 - 3);
      *(_OWORD *)(v20 - 32) = *(v19 - 2);
      *(_OWORD *)(v20 - 16) = *(v19 - 1);
      --v18;
    }
    while ( v18 );
    *(_OWORD *)v20 = *v19;
    *(_OWORD *)(v20 + 16) = v19[1];
    *(_OWORD *)(v20 + 32) = v19[2];
    *(_OWORD *)(v20 + 48) = v19[3];
    *(_WORD *)(v20 + 64) = *((_WORD *)v19 + 32);
    PropVariantClear(pvar);
    ++v7;
  }
LABEL_20:
  PropVariantClear(pvar);
  return v6;
}
