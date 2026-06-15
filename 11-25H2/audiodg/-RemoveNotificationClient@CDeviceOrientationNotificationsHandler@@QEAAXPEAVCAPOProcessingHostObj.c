/*
 * XREFs of ?RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x14005DDBC
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140017940 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x140017E4C (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140019168 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 */

void __fastcall CDeviceOrientationNotificationsHandler::RemoveNotificationClient(
        struct _RTL_CRITICAL_SECTION *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  LONG *p_LockCount; // rbx
  LONG *v6; // rax
  __int64 v7; // rcx
  LONG **v8; // r8
  LONG *v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+70h] [rbp+30h] BYREF

  v2 = this + 1;
  EnterCriticalSection(this + 1);
  v13 = v2;
  p_LockCount = &this[2].LockCount;
  wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
    &v12,
    (__int64)a2);
  v10 = 0LL;
  v11 = &v10;
  v6 = *(LONG **)&this[2].LockCount;
  v9 = &this[2].LockCount;
  if ( v6 )
  {
    v7 = v12;
    do
    {
      if ( *((_QWORD *)v6 + 1) == v7 )
      {
        v8 = *(LONG ***)p_LockCount;
        v6 = **(LONG ***)p_LockCount;
        *v8 = 0LL;
        *(_QWORD *)p_LockCount = v6;
        *v11 = (__int64)v8;
        v11 = (__int64 *)v8;
      }
      else
      {
        p_LockCount = v6;
        v6 = *(LONG **)v6;
      }
    }
    while ( v6 );
  }
  std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v9);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v12);
  CSAutoLock<1>::~CSAutoLock<1>(&v13);
}
