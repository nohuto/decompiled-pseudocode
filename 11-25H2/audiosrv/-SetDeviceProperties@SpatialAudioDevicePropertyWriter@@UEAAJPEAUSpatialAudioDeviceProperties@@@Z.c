/*
 * XREFs of ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x180123C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801240C8 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x180124114 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceProperties(
        SpatialAudioDevicePropertyWriter *this,
        BYTE *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  unsigned __int8 *v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  struct _tagpropertykey v13; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v14; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+A0h] [rbp+20h] BYREF
  int v16; // [rsp+A8h] [rbp+28h] BYREF
  const CHAR *v17; // [rsp+B0h] [rbp+30h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_DWORD *)a2 = 1509949442;
    *(_OWORD *)&v14.vt = 0LL;
    v14.vt = 65;
    v13.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v14.lVal = 146;
    v14.bstrblobVal.pData = a2;
    v13.pid = 2;
    v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v13, &v14);
    v8 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        return v8;
      v15 = v10;
      v9 = (unsigned __int8 *)&unk_1801A3DE9;
      v16 = 372;
      goto LABEL_6;
    }
    if ( !*((_DWORD *)this + 24) )
    {
      LOBYTE(v11) = *((_BYTE *)this + 100) - 1;
      SpatialAudioDevicePropertyWriter::SignalChange(this, v11);
    }
  }
  else
  {
    v8 = -2147024809;
    if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v15 = -2147024809;
      v9 = byte_1801A3DAF;
      v16 = 361;
LABEL_6:
      v17 = "SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        v9,
        v6,
        v7,
        &v17,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  return v8;
}
