/*
 * XREFs of ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1801232D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801240C8 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::AddMetadataFormat(
        SpatialAudioDevicePropertyWriter *this,
        struct ISpatialAudioMetadataDictionaryData *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  void *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 *v14; // rdx
  void *v15; // rax
  __int64 v16; // rcx
  int v17; // r15d
  int v19; // [rsp+40h] [rbp-59h] BYREF
  int v20; // [rsp+44h] [rbp-55h] BYREF
  const CHAR *v21; // [rsp+48h] [rbp-51h] BYREF
  _WORD v22[2]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v23[7]; // [rsp+54h] [rbp-45h] BYREF
  struct _tagpropertykey v24; // [rsp+70h] [rbp-29h] BYREF
  GUID v25; // [rsp+90h] [rbp-9h] BYREF
  __int16 v26; // [rsp+A0h] [rbp+7h]
  GUID v27; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v22[0] = 0;
  v27 = GUID_00000000_0000_0000_0000_000000000000;
  v25 = GUID_00000000_0000_0000_0000_000000000000;
  memset(v23, 0, sizeof(v23));
  v26 = 0;
  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, GUID *))(*(_QWORD *)a2 + 24LL))(
            a2,
            &v27);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_38;
      v19 = 294;
      v14 = (unsigned __int8 *)&unk_1801A3DE9;
      goto LABEL_36;
    }
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _WORD *))(*(_QWORD *)a2 + 32LL))(
            a2,
            v22);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_38;
      v19 = 297;
      v14 = (unsigned __int8 *)&unk_1801A3DE9;
      goto LABEL_36;
    }
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _DWORD *))(*(_QWORD *)a2 + 40LL))(
            a2,
            v23);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_38;
      v19 = 300;
      v14 = (unsigned __int8 *)&unk_1801A3DE9;
      goto LABEL_36;
    }
    v15 = operator new[](v23[0], (const struct std::nothrow_t *)&std::nothrow);
    v5 = v15;
    if ( !v15 )
    {
      v9 = -2147024882;
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_38;
      v20 = -2147024882;
      v14 = (unsigned __int8 *)&unk_1801A3DE9;
      v19 = 304;
      goto LABEL_37;
    }
    v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, void *, _QWORD))(*(_QWORD *)a2 + 48LL))(
            a2,
            v15,
            v23[0]);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v16 = *((_QWORD *)this + 11);
      memset(&v23[1], 0, 24);
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v16 + 40LL))(
              v16,
              &PKEY_SpatialAudio_Metadata_Count,
              &v23[1]);
      v9 = v10;
      if ( v10 >= 0 )
      {
        if ( LOWORD(v23[1]) == 2 )
        {
          v17 = SLOWORD(v23[3]);
          v26 = v22[0];
          v25 = v27;
          *(_QWORD *)&v23[5] = &v25;
          v24.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Id_Array;
          *(_OWORD *)&v23[1] = 0LL;
          LOWORD(v23[1]) = 65;
          v23[3] = 18;
          v24.pid = v17 + 2;
          v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v24, (struct tagPROPVARIANT *)&v23[1]);
          v9 = v10;
          if ( v10 >= 0 )
          {
            *(_QWORD *)&v23[5] = v5;
            v24.pid = v17 + 2;
            *(_OWORD *)&v23[1] = 0LL;
            LOWORD(v23[1]) = 65;
            v23[3] = v23[0];
            v24.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Dictionary_Array;
            v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v24, (struct tagPROPVARIANT *)&v23[1]);
            v9 = v10;
            if ( v10 >= 0 )
            {
              memset(&v23[1], 0, 24);
              v24.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
              LOWORD(v23[1]) = 2;
              LOWORD(v23[3]) = v17 + 1;
              v24.pid = 2;
              v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v24, (struct tagPROPVARIANT *)&v23[1]);
              v9 = v10;
              if ( v10 >= 0 || (unsigned int)dword_1801CC2E8 <= 2 )
                goto LABEL_38;
              v19 = 344;
              v14 = (unsigned __int8 *)&unk_1801A3DE9;
            }
            else
            {
              if ( (unsigned int)dword_1801CC2E8 <= 2 )
                goto LABEL_38;
              v19 = 337;
              v14 = (unsigned __int8 *)&unk_1801A3DE9;
            }
          }
          else
          {
            if ( (unsigned int)dword_1801CC2E8 <= 2 )
              goto LABEL_38;
            v19 = 327;
            v14 = (unsigned __int8 *)&unk_1801A3DE9;
          }
          goto LABEL_36;
        }
        v9 = -2147418113;
        if ( (unsigned int)dword_1801CC2E8 <= 2 )
          goto LABEL_38;
        v20 = -2147418113;
        v14 = byte_1801A3DAF;
        v19 = 314;
LABEL_37:
        v21 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          v14,
          v12,
          v13,
          &v21,
          (__int64)&v19,
          (__int64)&v20);
        goto LABEL_38;
      }
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_38;
      v19 = 313;
      v14 = (unsigned __int8 *)&unk_1801A3DE9;
    }
    else
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_38;
      v19 = 307;
      v14 = (unsigned __int8 *)&unk_1801A3DE9;
    }
LABEL_36:
    v20 = v10;
    goto LABEL_37;
  }
  v9 = -2147024809;
  if ( (unsigned int)dword_1801CC2E8 > 2 )
  {
    v19 = -2147024809;
    v21 = "SpatialAudioDevicePropertyWriter::AddMetadataFormat";
    v20 = 290;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_1801A3DAF,
      v7,
      v8,
      &v21,
      (__int64)&v20,
      (__int64)&v19);
  }
LABEL_38:
  operator delete(v5);
  return v9;
}
