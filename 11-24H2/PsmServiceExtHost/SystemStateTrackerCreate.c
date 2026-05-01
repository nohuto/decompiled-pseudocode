/*
 * XREFs of SystemStateTrackerCreate @ 0x18009CB4C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180077910 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C080 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18009C9B4 (-SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 */

__int64 __fastcall SystemStateTrackerCreate(__int64 a1)
{
  struct _SYSTEM_STATE_TRACKER *Heap; // rax
  struct _SYSTEM_STATE_TRACKER *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E8278,
      byte_1800DB498);
  Heap = (struct _SYSTEM_STATE_TRACKER *)HampAllocateHeap(0xE8uLL);
  v2 = Heap;
  if ( Heap )
  {
    SstpInitialize(Heap);
    v3 = 0;
    GlobalSystemStateTracker = v2;
  }
  else
  {
    v3 = -1073741801;
  }
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 9LL) )
  {
    LODWORD(v7) = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E8278,
      byte_1800DB4C0,
      v4,
      v5,
      (__int64)&v7);
  }
  return v3;
}
