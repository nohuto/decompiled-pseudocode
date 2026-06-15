/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18012B440
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012BD68 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x18012BDB4 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::ResetDeviceProperties(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rdx
  struct _tagpropertykey v10; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v11; // [rsp+60h] [rbp-20h] BYREF
  char v12; // [rsp+B0h] [rbp+30h] BYREF
  int v13; // [rsp+B8h] [rbp+38h] BYREF
  int v14; // [rsp+C0h] [rbp+40h] BYREF
  const CHAR *v15; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  v12 = 0;
  memset(&v11, 0, sizeof(v11));
  v11.iVal = 0;
  v11.vt = 2;
  v10.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
  v10.pid = 2;
  v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v10, &v11);
  v7 = v3;
  if ( v3 >= 0 )
  {
    *(_OWORD *)&v11.vt = 0LL;
    v11.vt = 65;
    v11.lVal = 1;
    v11.bstrblobVal.pData = (BYTE *)&v12;
    v10.pid = 2;
    v10.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v10, &v11);
    v7 = v3;
    if ( v3 < 0 )
    {
      if ( (unsigned int)dword_1801D82E8 <= 2 )
        return v7;
      v14 = 265;
      goto LABEL_6;
    }
    if ( !*((_DWORD *)this + 24) )
    {
      LOBYTE(v8) = *((_BYTE *)this + 100) - 2;
      SpatialAudioDevicePropertyWriter::SignalChange(this, v8);
    }
  }
  else if ( (unsigned int)dword_1801D82E8 > 2 )
  {
    v14 = 256;
LABEL_6:
    v13 = v3;
    v15 = "SpatialAudioDevicePropertyWriter::ResetDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned __int8 *)&unk_1801AED6A,
      v5,
      v6,
      &v15,
      (__int64)&v14,
      (__int64)&v13);
  }
  return v7;
}
