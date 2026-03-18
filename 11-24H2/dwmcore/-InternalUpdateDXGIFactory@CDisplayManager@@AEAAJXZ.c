/*
 * XREFs of ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1801589D8
 * Callers:
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800EF238 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x180158984 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801240CC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1801581DC (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Clo_ea_1801581DC.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x18015A840 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x1801C7768 (McTemplateU0qqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalUpdateDXGIFactory(CDisplayManager *this)
{
  unsigned int CurrentFrameId; // eax
  int v2; // ecx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CDisplayManager *v6; // rcx
  CDisplayManager *v7; // rax
  __int64 v8; // rdx
  CComposition *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CDisplayManager *v12; // [rsp+40h] [rbp+8h] BYREF
  void *ppFactory; // [rsp+48h] [rbp+10h] BYREF
  _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

  v12 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    CurrentFrameId = (unsigned int)GetCurrentFrameId();
    McTemplateU0qqq_EventWriteTransfer(v2, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, CurrentFrameId, 0);
  }
  ppFactory = 0LL;
  v3 = CreateDXGIFactory1(&GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, &ppFactory);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 405LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_15;
  }
  LODWORD(v12) = 0;
  v3 = (*(__int64 (__fastcall **)(void *, __int64, CDisplayManager **))(*(_QWORD *)ppFactory + 240LL))(
         ppFactory,
         qword_1803FAB48,
         &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 409LL;
    goto LABEL_7;
  }
  v14 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  v6 = qword_1803FAB38;
  if ( qword_1803FAB38 )
  {
    if ( (_DWORD)qword_1803FAB58 )
    {
      (*(void (**)(void))(*(_QWORD *)qword_1803FAB38 + 248LL))();
      LODWORD(qword_1803FAB58) = 0;
      v6 = qword_1803FAB38;
    }
    if ( (unsigned __int64)(qword_1803FAB50 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !byte_1803FAB62 )
    {
      (*(void (__fastcall **)(CDisplayManager *, _QWORD))(*(_QWORD *)v6 + 184LL))(v6, HIDWORD(qword_1803FAB58));
      HIDWORD(qword_1803FAB58) = 0;
    }
  }
  LODWORD(qword_1803FAB58) = (_DWORD)v12;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((void **)&qword_1803FAB50);
  ReleaseInterface<IDXGIFactory7>((__int64 *)&qword_1803FAB38);
  v7 = (CDisplayManager *)ppFactory;
  ppFactory = 0LL;
  qword_1803FAB38 = v7;
  LOBYTE(word_1803FAB60) = 0;
  byte_1803FAB62 = GetSystemMetrics(4096) != 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14, v8);
  QueryPerformanceCounter(&PerformanceCount);
  CComposition::ResetTokenThread(v9);
  v4 = 0;
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppFactory);
  return v4;
}
