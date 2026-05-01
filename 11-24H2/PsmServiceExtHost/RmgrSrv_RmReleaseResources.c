/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x180056940
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C080 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x180056A0C (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056EF0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(ExecutionModel::ResourceManager *a1, __int64 a2, int a3, int a4)
{
  unsigned int v5; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  struct ExecutionModel::ResourceHandle__ *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 2) != 0 && (qword_1800E8290 & 2) == qword_1800E8290 )
  {
    v9 = *(struct ExecutionModel::ResourceHandle__ **)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E8278,
      (unsigned int)&unk_1800D1CFA,
      a3,
      a4,
      (__int64)&v9);
  }
  if ( a1 )
    v5 = ExecutionModel::ResourceManager::RmReleaseResources(a1, *(struct ExecutionModel::ResourceHandle__ **)a1);
  else
    v5 = -2147024882;
  if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 2LL) )
  {
    LODWORD(v9) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E8278,
      byte_1800D19F1,
      v7,
      v8,
      (__int64)&v9);
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return v5;
}
