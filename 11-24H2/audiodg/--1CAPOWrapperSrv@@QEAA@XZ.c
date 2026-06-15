/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140006BA0
 * Callers:
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14003B62C (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14005BF9C (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B30 (--1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ.c)
 *     ?UnregisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x140007BBC (-UnregisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAPOWrapperSrv::~CAPOWrapperSrv(CAPOWrapperSrv *this)
{
  const struct _tlgProvider_t *v2; // rax
  char *v3; // rcx
  char *v4; // rsi
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  v2 = AudioDgTelemetryProvider::Provider();
  CPerfTracker::CPerfTracker(&PerformanceCount, v2, "SrvSystemEffect_Destroy", (const char *const)this + 140);
  v3 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    CAPOWrapperSrv::UnregisterAPONotifications(this);
    v4 = (char *)this + 96;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
      *((_QWORD *)this + 11),
      *((_QWORD *)this + 12));
  }
  else
  {
    v4 = (char *)this + 96;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 128);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 112);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 104);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 88);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CAPOWrapperSrv *)((char *)this + 40));
}
