/*
 * XREFs of ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140017674
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140017940 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPOEndpointNotificationsHandler::RemoveNotificationClients(
        CAPOEndpointNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  _QWORD **v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD **v9; // rbx
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD **v13; // rbx
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v5 = (_QWORD **)((char *)this + 88);
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = 0LL;
  v20 = 0LL;
  v21 = &v20;
  v7 = *v5;
  if ( *v5 )
  {
    do
    {
      if ( (struct CAPOProcessingHostObject *)v7[1] == a2 )
      {
        v17 = *v5;
        v7 = (_QWORD *)**v5;
        *v17 = 0LL;
        *v5 = v7;
        *v21 = v17;
        v21 = v17;
      }
      else
      {
        v5 = (_QWORD **)v7;
        v7 = (_QWORD *)*v7;
      }
    }
    while ( v7 );
    v6 = v20;
  }
  if ( v6 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v6 + 1);
      std::_Deallocate<16,0>(v6, 16LL);
      v6 = v8;
    }
    while ( v8 );
  }
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v9 = (_QWORD **)((char *)this + 152);
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = 0LL;
  v20 = 0LL;
  v21 = &v20;
  v11 = *v9;
  if ( *v9 )
  {
    do
    {
      if ( (struct CAPOProcessingHostObject *)v11[1] == a2 )
      {
        v18 = *v9;
        v11 = (_QWORD *)**v9;
        *v18 = 0LL;
        *v9 = v11;
        *v21 = v18;
        v21 = v18;
      }
      else
      {
        v9 = (_QWORD **)v11;
        v11 = (_QWORD *)*v11;
      }
    }
    while ( v11 );
    v10 = v20;
  }
  if ( v10 )
  {
    do
    {
      v12 = (_QWORD *)*v10;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v10 + 1);
      std::_Deallocate<16,0>(v10, 16LL);
      v10 = v12;
    }
    while ( v12 );
  }
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 16LL))(a2);
  v13 = (_QWORD **)((char *)this + 160);
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v14 = 0LL;
  v20 = 0LL;
  v21 = &v20;
  v15 = *v13;
  if ( *v13 )
  {
    do
    {
      if ( (struct CAPOProcessingHostObject *)v15[1] == a2 )
      {
        v19 = *v13;
        v15 = (_QWORD *)**v13;
        *v19 = 0LL;
        *v13 = v15;
        *v21 = v19;
        v21 = v19;
      }
      else
      {
        v13 = (_QWORD **)v15;
        v15 = (_QWORD *)*v15;
      }
    }
    while ( v15 );
    v14 = v20;
  }
  if ( v14 )
  {
    do
    {
      v16 = (_QWORD *)*v14;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v14 + 1);
      std::_Deallocate<16,0>(v14, 16LL);
      v14 = v16;
    }
    while ( v16 );
  }
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( this != (CAPOEndpointNotificationsHandler *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
}
