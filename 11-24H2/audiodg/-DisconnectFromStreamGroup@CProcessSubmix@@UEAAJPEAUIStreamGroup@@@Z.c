/*
 * XREFs of ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x14002B860
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14002B98C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmix::DisconnectFromStreamGroup(CProcessSubmix *this, struct IStreamGroup *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  int v9; // r8d
  int v10; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  struct IStreamGroup *v14; // [rsp+58h] [rbp+10h] BYREF
  CProcessSubmix *v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v13 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a2)(
         a2,
         &GUID_c3876f08_e8f4_47e9_b42f_3bc3418c0675,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)v5);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v6;
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 104LL))((char *)this + 16, v13);
    v8 = AudioDgTelemetryProvider::Provider(v7);
    if ( *(_DWORD *)v8 > 4u )
    {
      v14 = a2;
      v15 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v8,
        (unsigned int)&unk_1400B0868,
        v9,
        v10,
        (__int64)&v15,
        (__int64)&v14);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
