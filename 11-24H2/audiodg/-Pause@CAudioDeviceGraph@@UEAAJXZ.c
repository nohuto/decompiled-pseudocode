/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140014E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x140014F84 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x14001501C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  int v8; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 >= 0 )
  {
    CAudioDeviceGraph::DurationTracker::Stop((char *)this + 80, &v8);
    v7 = AudioDgTelemetryProvider::Provider(v6);
    if ( *(_DWORD *)v7 > 4u && (*((_BYTE *)v7 + 16) & 1) != 0 && (*((_QWORD *)v7 + 3) & 1LL) == *((_QWORD *)v7 + 3) )
    {
      v13 = v10;
      v14 = v9;
      v12 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v7,
        (unsigned int)&unk_1400AFD8C,
        (_DWORD)this + 344,
        (_DWORD)v7,
        (__int64)&v12,
        (__int64)&v14,
        (__int64)&v13);
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x317,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
}
