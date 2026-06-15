/*
 * XREFs of ?GetResourceSharingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4SpatialAudioResourceSharingMode@@@Z @ 0x180128D20
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetResourceSharingMode(
        SpatialAudioDevicePropertyReader *this,
        enum SpatialAudioResourceSharingMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  const CHAR *v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 32);
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v10 = -2147024809;
      v12 = "SpatialAudioDevicePropertyReader::GetResourceSharingMode";
      v11 = 687;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_1801AED30,
        v7,
        v8,
        &v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
  return v5;
}
