/*
 * XREFs of ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180128520
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     AudioEncoderIdToRenderingMode @ 0x18012BFD0 (AudioEncoderIdToRenderingMode.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch] BYREF
  const CHAR *v18; // [rsp+48h] [rbp-28h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 0;
    v9 = *((_QWORD *)this + 52);
    v19 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v19);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v14 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - v19;
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == (_QWORD)v19 )
        v14 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *((_QWORD *)&v19 + 1);
      if ( v14 )
        *a2 = AudioEncoderIdToRenderingMode(&v19);
      else
        return (*(unsigned int (__fastcall **)(SpatialAudioDevicePropertyReader *, unsigned int *))(*(_QWORD *)this
                                                                                                  + 192LL))(
                 this,
                 a2);
    }
    else if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v17 = v10;
      v16 = 814;
      v18 = "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned __int8 *)&unk_1801AED6A,
        v12,
        v13,
        &v18,
        (__int64)&v16,
        (__int64)&v17);
    }
  }
  else
  {
    v8 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v16 = -2147024809;
      v18 = "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      v17 = 808;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_1801AED30,
        v6,
        v7,
        &v18,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
  return v8;
}
