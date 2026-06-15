/*
 * XREFs of ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x180124114
 * Callers:
 *     ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x1801237A0 (-ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 *     ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x180123C90 (-SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180123DC0 (-SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x1801242D0 (-SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18005FAE4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801240C8 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SignalChange(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  char v5; // cl
  char v6; // cl
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  char v13; // [rsp+40h] [rbp-79h] BYREF
  char v14; // [rsp+41h] [rbp-78h] BYREF
  int v15; // [rsp+44h] [rbp-75h] BYREF
  int v16; // [rsp+48h] [rbp-71h] BYREF
  const CHAR *v17; // [rsp+50h] [rbp-69h] BYREF
  struct tagPROPVARIANT v18; // [rsp+58h] [rbp-61h] BYREF
  struct _tagpropertykey v19; // [rsp+70h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-29h] BYREF
  int *v21; // [rsp+B0h] [rbp-9h]
  int v22; // [rsp+B8h] [rbp-1h]
  int v23; // [rsp+BCh] [rbp+3h]
  int *v24; // [rsp+C0h] [rbp+7h]
  int v25; // [rsp+C8h] [rbp+Fh]
  int v26; // [rsp+CCh] [rbp+13h]
  char *v27; // [rsp+D0h] [rbp+17h]
  int v28; // [rsp+D8h] [rbp+1Fh]
  int v29; // [rsp+DCh] [rbp+23h]
  char *v30; // [rsp+E0h] [rbp+27h]
  int v31; // [rsp+E8h] [rbp+2Fh]
  int v32; // [rsp+ECh] [rbp+33h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  BYTE1(v15) = *(_BYTE *)(a1 + 101);
  LOBYTE(v15) = a2;
  *(_BYTE *)(a1 + 101) = BYTE1(v15) + 1;
  memset(&v18, 0, sizeof(v18));
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  v18.vt = 2;
  v18.iVal = v15;
  if ( (unsigned int)dword_1801CC2E8 > 5 )
  {
    v5 = *(_BYTE *)(a1 + 101);
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    LOWORD(v16) = v15;
    v30 = &v13;
    v27 = &v14;
    v24 = &v15;
    v13 = v5;
    v6 = *(_BYTE *)(a1 + 100);
    v21 = &v16;
    v14 = v6;
    LOBYTE(v15) = a2;
    v31 = 1;
    v28 = 1;
    v25 = 1;
    v22 = 2;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801CC2E8, byte_1801A3E65, 0LL, 0LL, 6u, &v20);
  }
  v19 = PKEY_SpatialAudio_Signaling_Key;
  v7 = SpatialAudioDevicePropertyWriter::SetPropertyValue((SpatialAudioDevicePropertyWriter *)a1, &v19, &v18);
  v11 = v7;
  if ( v7 >= 0 )
  {
    *(_DWORD *)(a1 + 96) = 0;
  }
  else if ( (unsigned int)dword_1801CC2E8 > 2 )
  {
    v16 = v7;
    v15 = 221;
    v17 = "SpatialAudioDevicePropertyWriter::SignalChange";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (unsigned __int8 *)&unk_1801A3DE9,
      v9,
      v10,
      &v17,
      (__int64)&v15,
      (__int64)&v16);
  }
  return v11;
}
