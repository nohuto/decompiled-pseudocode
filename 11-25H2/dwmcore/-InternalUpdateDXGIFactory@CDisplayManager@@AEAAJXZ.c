/*
 * XREFs of ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18022CD78
 * Callers:
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800FD7D0 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x18022CD24 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1800FEF54 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x1801C1294 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801D13C0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x180229CBC (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalUpdateDXGIFactory(CDisplayManager *this)
{
  int CurrentFrameId; // eax
  __int64 v2; // rcx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CDisplayManager *v6; // rcx
  CDisplayManager *v7; // rax
  CComposition *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CDisplayManager *v11; // [rsp+40h] [rbp+8h] BYREF
  void *ppFactory; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+18h] BYREF

  v11 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    CurrentFrameId = (unsigned int)GetCurrentFrameId();
    McTemplateU0qqq_EventWriteTransfer(v2, &EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0LL, CurrentFrameId, 0);
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
  LODWORD(v11) = 0;
  v3 = (*(__int64 (__fastcall **)(void *, __int64, CDisplayManager **))(*(_QWORD *)ppFactory + 240LL))(
         ppFactory,
         qword_180406B98,
         &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 409LL;
    goto LABEL_7;
  }
  v13 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  v6 = qword_180406B88;
  if ( qword_180406B88 )
  {
    if ( (_DWORD)qword_180406BA8 )
    {
      (*(void (**)(void))(*(_QWORD *)qword_180406B88 + 248LL))();
      LODWORD(qword_180406BA8) = 0;
      v6 = qword_180406B88;
    }
    if ( (unsigned __int64)(qword_180406BA0 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !byte_180406BB2 )
    {
      (*(void (__fastcall **)(CDisplayManager *, _QWORD))(*(_QWORD *)v6 + 184LL))(v6, HIDWORD(qword_180406BA8));
      HIDWORD(qword_180406BA8) = 0;
    }
  }
  LODWORD(qword_180406BA8) = (_DWORD)v11;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((__int64)&qword_180406BA0);
  ReleaseInterface<IDXGIFactory7>((__int64 *)&qword_180406B88);
  v7 = (CDisplayManager *)ppFactory;
  ppFactory = 0LL;
  qword_180406B88 = v7;
  LOBYTE(word_180406BB0) = 0;
  byte_180406BB2 = GetSystemMetrics(4096) != 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  QueryPerformanceCounter(&PerformanceCount);
  CComposition::ResetTokenThread(v8);
  v4 = 0;
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppFactory);
  return v4;
}
