/*
 * XREFs of ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x14005F118
 * Callers:
 *     ??_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z @ 0x14005F2F0 (--_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAPOEndpointNotificationsHandler::~CAPOEndpointNotificationsHandler(
        CAPOEndpointNotificationsHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAPOEndpointNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAPOEndpointNotificationsHandler::`vftable'{for `IAudioEndpointVolumeInternalCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v9 = v2;
  if ( *((_BYTE *)this + 136) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 32LL))(
      *((_QWORD *)this + 18),
      *((_QWORD *)this + 23));
  CSAutoLock<1>::~CSAutoLock<1>(&v9);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 23);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 22);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 21);
  v3 = (_QWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
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
  v5 = (_QWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v5 + 1);
      std::_Deallocate<16,0>(v5, 0x10uLL);
      v5 = v6;
    }
    while ( v6 );
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 18);
  DeleteCriticalSection(v2);
  v7 = (_QWORD *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v7 + 1);
      std::_Deallocate<16,0>(v7, 0x10uLL);
      v7 = v8;
    }
    while ( v8 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
}
