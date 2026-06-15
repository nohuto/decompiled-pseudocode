/*
 * XREFs of ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x1400314F4
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140031400 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140031E2C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::CheckGlitches(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  BOOL v5; // esi
  __int32 v6; // ecx
  BOOL v7; // ebx
  BOOL v8; // [rsp+60h] [rbp+8h] BYREF
  BOOL v9; // [rsp+68h] [rbp+10h] BYREF
  char *v10; // [rsp+70h] [rbp+18h] BYREF

  v5 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 163) + 68LL), 0) != 0;
  v6 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 163) + 72LL), 0);
  v7 = v6 != 0;
  if ( (v5 || v6)
    && (unsigned int)dword_1400C34B0 > 5
    && (byte_1400C34C0 & 1) != 0
    && (qword_1400C34C8 & 1) == qword_1400C34C8 )
  {
    v8 = v6 != 0;
    v9 = v5;
    v10 = (char *)this + 792;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_1400B146F,
      (_DWORD)this + 792,
      a4,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
  CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 784),
    v5,
    v7);
}
