/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x18012BA60
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012BD68 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x18012BDB4 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int8 *v25; // rdx
  unsigned int i; // r15d
  int v27; // eax
  int v29; // [rsp+40h] [rbp-99h] BYREF
  int v30; // [rsp+44h] [rbp-95h] BYREF
  const CHAR *v31; // [rsp+48h] [rbp-91h] BYREF
  struct tagPROPVARIANT v32; // [rsp+50h] [rbp-89h] BYREF
  struct _tagpropertykey v33; // [rsp+70h] [rbp-69h] BYREF
  int v34; // [rsp+90h] [rbp-49h] BYREF
  __int128 v35; // [rsp+94h] [rbp-45h]
  __int128 v36; // [rsp+A4h] [rbp-35h]
  __int128 v37; // [rsp+B4h] [rbp-25h]
  __int128 v38; // [rsp+C4h] [rbp-15h]
  __int64 v39; // [rsp+D4h] [rbp-5h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v11 = v5;
  v12 = v5 / 0x342;
  v13 = v11 - 834 * v12;
  if ( !a2 || v13 )
  {
    v22 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      return v22;
    v29 = 503;
    v25 = byte_1801AED30;
LABEL_25:
    v30 = -2147024809;
    goto LABEL_26;
  }
  memset_0(&v34, 0, 0x4CuLL);
  v14 = *(_OWORD *)a2;
  v15 = *((_OWORD *)a2 + 1);
  v32.bstrblobVal.pData = (BYTE *)&v34;
  v35 = v14;
  v34 = 1509949442;
  v16 = *((_OWORD *)a2 + 2);
  v33.pid = 2;
  v36 = v15;
  v17 = *((_OWORD *)a2 + 3);
  v37 = v16;
  v39 = *((_QWORD *)a2 + 8);
  v38 = v17;
  v33.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
  *(_OWORD *)&v32.vt = 0LL;
  v32.vt = 65;
  v32.lVal = 76;
  v18 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v33, &v32);
  v22 = v18;
  if ( v18 < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v29 = v18;
      v30 = 519;
      v31 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (unsigned __int8 *)&unk_1801AED6A,
        v20,
        v21,
        &v31,
        (__int64)&v30,
        (__int64)&v29);
    }
    return v22;
  }
  memset(&v32, 0, sizeof(v32));
  v33.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
  v32.vt = 2;
  v32.iVal = v12;
  v33.pid = 2;
  v23 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v33, &v32);
  v22 = v23;
  if ( v23 < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      return v22;
    v30 = v23;
    v25 = (unsigned __int8 *)&unk_1801AED6A;
    v29 = 526;
LABEL_26:
    v31 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      v25,
      v9,
      v10,
      &v31,
      (__int64)&v29,
      (__int64)&v30);
    return v22;
  }
  if ( (_DWORD)v12 )
  {
    if ( !a3 )
    {
      v22 = -2147024809;
      if ( (unsigned int)dword_1801D82E8 <= 2 )
        return v22;
      v29 = 530;
      v25 = byte_1801AED30;
      goto LABEL_25;
    }
    for ( i = 0; i < (unsigned int)v12; ++i )
    {
      v33.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
      *(_OWORD *)&v32.vt = 0LL;
      v33.pid = i + 2;
      v32.vt = 65;
      v32.bstrblobVal.pData = (BYTE *)a3 + 834 * i;
      v32.lVal = 834;
      v27 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v33, &v32);
      v22 = v27;
      if ( v27 < 0 )
      {
        if ( (unsigned int)dword_1801D82E8 <= 2 )
          return v22;
        v30 = v27;
        v25 = (unsigned __int8 *)&unk_1801AED6A;
        v29 = 543;
        goto LABEL_26;
      }
    }
  }
  if ( !*((_DWORD *)this + 24) )
  {
    LOBYTE(v24) = *((_BYTE *)this + 100) - 3;
    SpatialAudioDevicePropertyWriter::SignalChange(this, v24);
  }
  return v22;
}
