/*
 * XREFs of ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x180123B94
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x18012075C (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180122068 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x1801234C8 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1801239C8 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5535@Z @ 0x180004D74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18004DFD0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x180122FB0 (-RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x180123764 (-IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1801238C4 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::SetDynamicObjects(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  int v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v22; // [rsp+B0h] [rbp+30h] BYREF
  int v23; // [rsp+B8h] [rbp+38h] BYREF
  int v24; // [rsp+C8h] [rbp+48h] BYREF

  SarmTraceLoggingTracer("Sarm::CStreamResource::SetDynamicObjects", 300);
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    if ( a2 == *((_DWORD *)this + 20) )
    {
      a3 = 0LL;
      goto LABEL_12;
    }
  }
  else if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0106LL);
    return 2289828102LL;
  }
  v7 = Sarm::CStreamResource::IssueGrantToASAR(this, a2, a3);
  v10 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x139,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v7);
    return v10;
  }
  v11 = *((_DWORD *)this + 20);
  if ( a2 >= v11 )
    Sarm::CEndpointResourcePool::RemoveFromDynamicPool(*((Sarm::CEndpointResourcePool **)this + 1), a2 - v11, v8, v9);
  else
    *((_DWORD *)this + 21) = v11 - a2;
  *((_DWORD *)this + 19) = *((_DWORD *)this + 20);
  *((_DWORD *)this + 20) = a2;
LABEL_12:
  v12 = Sarm::CStreamResource::NotifyClientOfGrant(this, a2, a3);
  v16 = v12;
  if ( v12 >= 0 )
  {
    if ( (unsigned int)dword_1801D82B0 > 5 )
    {
      v23 = *((_DWORD *)this + 13);
      v22 = *((_DWORD *)this + 20);
      v24 = *((_DWORD *)this + 19);
      v17 = *((_DWORD *)this + 21);
      v19 = (__int64)this + 16;
      v20 = *((_QWORD *)this + 5);
      v18 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_1801AE552,
        v14,
        v15,
        (__int64)&v20,
        &v19,
        (__int64)&v17,
        (__int64)&v24,
        (__int64)&v22,
        (__int64)&v18,
        (__int64)&v23);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v12);
    return v16;
  }
}
