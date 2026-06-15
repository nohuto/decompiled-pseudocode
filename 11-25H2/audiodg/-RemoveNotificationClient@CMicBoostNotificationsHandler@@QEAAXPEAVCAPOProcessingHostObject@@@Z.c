/*
 * XREFs of ?RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140055668
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140017940 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMicBoostNotificationsHandler::RemoveNotificationClient(
        CMicBoostNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD **v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+30h] [rbp-18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v5 = (_QWORD **)((char *)this + 120);
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = 0LL;
  v10 = 0LL;
  v11 = &v10;
  v7 = *v5;
  if ( *v5 )
  {
    do
    {
      if ( (struct CAPOProcessingHostObject *)v7[1] == a2 )
      {
        v8 = *v5;
        v7 = (_QWORD *)**v5;
        *v8 = 0LL;
        *v5 = v7;
        *v11 = v8;
        v11 = v8;
      }
      else
      {
        v5 = (_QWORD **)v7;
        v7 = (_QWORD *)*v7;
      }
    }
    while ( v7 );
    v6 = v10;
  }
  if ( v6 )
  {
    do
    {
      v9 = (_QWORD *)*v6;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v6 + 1);
      std::_Deallocate<16,0>(v6, 0x10uLL);
      v6 = v9;
    }
    while ( v9 );
  }
  if ( a2 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v4 )
    LeaveCriticalSection(v4);
}
