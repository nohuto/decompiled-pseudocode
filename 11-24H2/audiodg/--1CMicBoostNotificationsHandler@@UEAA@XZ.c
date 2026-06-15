/*
 * XREFs of ??1CMicBoostNotificationsHandler@@UEAA@XZ @ 0x1400600AC
 * Callers:
 *     ??_GCMicBoostNotificationsHandler@@UEAAPEAXI@Z @ 0x1400601C0 (--_GCMicBoostNotificationsHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMicBoostNotificationsHandler::~CMicBoostNotificationsHandler(CMicBoostNotificationsHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CMicBoostNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CMicBoostNotificationsHandler::`vftable'{for `IControlChangeNotify'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v5 = v2;
  if ( *((_BYTE *)this + 112) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 120LL))(
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 16));
  CSAutoLock<1>::~CSAutoLock<1>(&v5);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 16);
  v3 = (_QWORD *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v3 + 1);
      std::_Deallocate<16,0>(v3, 0x10uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  DeleteCriticalSection(v2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 7);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
}
