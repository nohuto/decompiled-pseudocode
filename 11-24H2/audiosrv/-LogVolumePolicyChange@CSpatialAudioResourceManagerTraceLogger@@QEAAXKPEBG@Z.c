/*
 * XREFs of ?LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z @ 0x1800A3148
 * Callers:
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180070430 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180005098 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_180005098.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogVolumePolicyChange(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  CSpatialAudioResourceManagerTraceLogger *v4; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v5; // [rsp+58h] [rbp+20h] BYREF

  v4 = this;
  if ( (unsigned int)dword_1801D82B0 > 5 )
  {
    LODWORD(v4) = a2;
    v5 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      (__int64)&unk_1801AE8F1,
      (__int64)a3,
      a4,
      (__int64)&v4,
      &v5);
  }
}
