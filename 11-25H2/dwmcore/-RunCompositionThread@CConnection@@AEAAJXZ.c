/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1802670A4
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x180266FF0 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1801BCC98 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x180202D3C (--0CEnergyReporter@@AEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x180249930 (-Initialize@CProcessAttributionReporter@@SAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _anonymous_namespace_::ScreenOnStudySessionStateTracker::Start @ 0x180254AB0 (_anonymous_namespace_--ScreenOnStudySessionStateTracker--Start.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x180256A5C (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _anonymous_namespace_::State::_State @ 0x180269E5C (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x18026CC6C (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x18026CDA8 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x18026CE2C (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??1CEnergyReporter@@AEAA@XZ @ 0x18026CF00 (--1CEnergyReporter@@AEAA@XZ.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x18026F7FC (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  void *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  _DWORD *v8; // rax
  CEnergyReporter *v9; // rax
  void *v10; // rax
  union _SLIST_HEADER *v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  CProcessResourceAttributionReporter *v14; // rbx
  CProcessAttributionReporter *v15; // rbx
  CEnergyReporter *v16; // rbx
  void *v17; // rbx
  CProcessAttributionManager *v18; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CProcessAttributionManager *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  qword_1804070A0 = v2;
  v3 = operator new(0x40uLL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    *((_BYTE *)v3 + 16) = 0;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v5 = operator new(0xC0uLL);
    v6 = (__int64)v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0xC0uLL);
      v7 = anonymous_namespace_::FramesReport::FramesReport(v6);
    }
    else
    {
      v7 = 0LL;
    }
    v4[5] = v7;
    anonymous_namespace_::ScreenOnStudySessionStateTracker::Start((__int64)(v4 + 2));
  }
  else
  {
    v4 = 0LL;
  }
  qword_180406F18 = v4;
  v8 = MIDL_user_allocate(0x78uLL);
  if ( v8 )
    v9 = CEnergyReporter::CEnergyReporter(v8);
  else
    v9 = 0LL;
  qword_180407020 = v9;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    CProcessAttributionReporter::Initialize();
  v10 = MIDL_user_allocate(0x50uLL);
  if ( !v10 )
  {
    qword_180407018 = 0LL;
LABEL_30:
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  }
  v11 = (union _SLIST_HEADER *)CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(v10);
  qword_180407018 = (CProcessResourceAttributionReporter *)v11;
  if ( !v11 )
    goto LABEL_30;
  InitializeSListHead(v11 + 1);
  v12 = CConnection::MainCompositionThreadLoop(this);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x84,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v12);
  (*(void (__fastcall **)(CConnection *, __int64))(*(_QWORD *)this + 16LL))(this, 2291663905LL);
  v14 = qword_180407018;
  if ( qword_180407018 )
  {
    CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(qword_180407018);
    operator delete(v14);
  }
  v15 = qword_180407010;
  qword_180407018 = 0LL;
  if ( qword_180407010 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_180407010);
    operator delete(v15);
    qword_180407010 = 0LL;
  }
  v16 = qword_180407020;
  if ( qword_180407020 )
  {
    CEnergyReporter::~CEnergyReporter(qword_180407020);
    operator delete(v16);
  }
  v17 = qword_180406F18;
  qword_180407020 = 0LL;
  if ( qword_180406F18 )
  {
    anonymous_namespace_::State::_State(qword_180406F18);
    operator delete(v17);
  }
  v18 = qword_1804070A0;
  qword_180406F18 = 0LL;
  if ( qword_1804070A0 )
  {
    CProcessAttributionManager::~CProcessAttributionManager(qword_1804070A0);
    operator delete(v18);
  }
  qword_1804070A0 = 0LL;
  ReleaseInterface<IDXGIFactory7>((__int64 *)&qword_180406B88);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&qword_180406BA0,
    0LL);
  return v13;
}
