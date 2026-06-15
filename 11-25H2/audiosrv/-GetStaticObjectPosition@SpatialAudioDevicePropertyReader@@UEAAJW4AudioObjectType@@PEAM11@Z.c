/*
 * XREFs of ?GetStaticObjectPosition@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM11@Z @ 0x180121200
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetStaticObjectPosition(
        SpatialAudioDevicePropertyReader *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  float *v14; // rdx
  __int64 v15; // rax
  const CHAR *v17; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+90h] [rbp+18h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( a3 && a4 && (v14 = a5) != 0LL && (unsigned int)(a2 - 2) <= 0x7FFFE )
  {
    v15 = *((_QWORD *)this + 6);
    *(_DWORD *)a3 = *(_OWORD *)(v15
                              + 16LL
                              * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)(a2 & 0xFFFFD | 2u))) >> 20) - 1024));
    *a4 = *(float *)(v15
                   + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)(a2 & 0xFFFFD | 2u))) >> 20) - 1024)
                   + 4);
    *v14 = *(float *)(v15
                    + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)(a2 & 0xFFFFD | 2u))) >> 20) - 1024)
                    + 8);
  }
  else
  {
    v10 = -2147024809;
    if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v18 = -2147024809;
      v17 = "SpatialAudioDevicePropertyReader::GetStaticObjectPosition";
      v19 = 641;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_1801A3DAF,
        v12,
        v13,
        &v17,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  return v10;
}
