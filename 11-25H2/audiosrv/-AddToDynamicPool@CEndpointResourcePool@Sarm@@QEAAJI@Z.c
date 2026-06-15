/*
 * XREFs of ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18011B034
 * Callers:
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18005CBA8 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x18011B60C (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180004300 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011B418 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::AddToDynamicPool(
        Sarm::CEndpointResourcePool *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v12; // [rsp+20h] [rbp-40h]
  int v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+54h] [rbp-Ch] BYREF
  Sarm::CEndpointResourcePool *v15; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v17; // [rsp+80h] [rbp+20h] BYREF
  int v18; // [rsp+90h] [rbp+30h] BYREF
  int v19; // [rsp+98h] [rbp+38h] BYREF

  v6 = *((_QWORD *)this + 2);
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL,
      v12);
  v7 = *(unsigned int *)(v6 + 24);
  v8 = (unsigned int)(*(_DWORD *)(v6 + 20) - v7);
  if ( (unsigned int)dword_1801CC2B0 > 4 )
  {
    v19 = *(_DWORD *)(v6 + 20);
    v17 = v8 + a2;
    v15 = this;
    v18 = v8;
    v13 = v7;
    v14 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      (__int64)&unk_1801A346A,
      v7,
      a4,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v15);
  }
  v9 = *((_QWORD *)this + 2);
  v10 = *(_DWORD *)(v9 + 24);
  if ( a2 <= v10 )
  {
    *(_DWORD *)(v9 + 24) = v10 - a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0101LL);
    return 2289828097LL;
  }
}
