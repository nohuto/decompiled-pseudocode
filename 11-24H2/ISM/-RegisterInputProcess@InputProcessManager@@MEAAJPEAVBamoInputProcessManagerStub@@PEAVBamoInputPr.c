/*
 * XREFs of ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x18019BC50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180003E28 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x18019BD2C (-RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x18019C190 (-StopProcess@InputProcessManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProcessManager::RegisterInputProcess(
        InputProcessManager *this,
        struct BamoInputProcessManagerStub *a2,
        void (__fastcall ***a3)(struct BamoInputProcessProxy *))
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::InputProcessManager::RegisterProcess(a3);
  if ( *((void (__fastcall ****)(struct BamoInputProcessProxy *))this + 7) != a3 )
  {
    if ( a3 )
      (**a3)((struct BamoInputProcessProxy *)a3);
    v7 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a3;
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(&v7);
  }
  if ( (unsigned int)dword_18024E248 > 5 && tlgKeywordOn((__int64)&dword_18024E248, 0x400000000000LL) )
  {
    LODWORD(v7) = *((_QWORD *)this + 10) != 0LL;
    v8 = *((unsigned __int8 *)this + 64);
    v9 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (__int64)&unk_180225FDF,
      0LL,
      0LL,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
  if ( !*((_BYTE *)this + 64) )
    InputProcessManager::StopProcess(this);
  return 0LL;
}
