/*
 * XREFs of ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x18011B60C
 * Callers:
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180118D74 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 *     std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x18011AB60 (std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@445@Z @ 0x180004620 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlg_ea_180004620.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18005CA10 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18011B034 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 */

void __fastcall Sarm::CStreamResource::CompleteRevocation(Sarm::CStreamResource *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // [rsp+60h] [rbp+17h] BYREF
  __int64 v6; // [rsp+68h] [rbp+1Fh] BYREF
  const CHAR *v7; // [rsp+70h] [rbp+27h] BYREF
  int v8; // [rsp+B0h] [rbp+67h] BYREF
  int v9; // [rsp+B8h] [rbp+6Fh] BYREF
  int v10; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v11; // [rsp+C8h] [rbp+7Fh] BYREF

  SarmTraceLoggingTracer("Sarm::CStreamResource::CompleteRevocation", 129);
  v4 = *((unsigned int *)this + 21);
  if ( (_DWORD)v4 )
  {
    if ( (unsigned int)dword_1801CC2B0 > 4 )
    {
      v11 = *((_QWORD *)this + 1);
      v8 = *((_DWORD *)this + 13);
      v5 = (__int64)this + 16;
      v6 = *((_QWORD *)this + 5);
      v9 = v4;
      v10 = 141;
      v7 = "Sarm::CStreamResource::CompleteRevocation";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        (__int64)&unk_1801A3732,
        v2,
        v3,
        &v7,
        (__int64)&v10,
        (__int64)&v6,
        &v5,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v11);
    }
    Sarm::CEndpointResourcePool::AddToDynamicPool(
      *((Sarm::CEndpointResourcePool **)this + 1),
      *((_DWORD *)this + 21),
      v2,
      v3);
    *((_DWORD *)this + 21) = 0;
  }
}
