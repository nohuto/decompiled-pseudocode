/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006065C
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180060240 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1800114EC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180034410 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180035A7C (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B4E4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180064B88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??1?$unique_ptr@UNotificationListEntry@PnpDeviceWatcher@@U?$default_delete@UNotificationListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800652FC (--1-$unique_ptr@UNotificationListEntry@PnpDeviceWatcher@@U-$default_delete@UNotificationListEntr.c)
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x18006531C (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008F314 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x18008F468 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x18009A2EC (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800E3360 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E398C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E4498 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E47A4 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E5230 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x1800E596C (-OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E5B58 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(RTL_SRWLOCK *this, WCHAR *a2)
{
  RTL_SRWLOCK *v2; // r13
  PnpDeviceWatcher::NotificationListEntry *v4; // rbx
  RTL_SRWLOCK *Ptr; // rdi
  PnpDeviceWatcher::NotificationListEntry *v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  RTL_SRWLOCK *v14; // r15
  PnpApiWrapper *v15; // rdx
  int v16; // eax
  PnpDeviceWatcher::RetryDeviceListEntry *v17; // rsi
  int DeviceListEntryByInstanceId; // r12d
  PnpApiWrapper *v19; // rdx
  int v20; // eax
  int started; // eax
  PnpApiWrapper *v22; // rdx
  int DeviceListEntryByInterfacePath; // eax
  HSTRING v24; // rdx
  int v25; // eax
  unsigned int v26; // edx
  PnpDeviceWatcher::RetryDeviceListEntry *v27; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v28; // rax
  HSTRING v29; // rdx
  int v30; // eax
  HSTRING v31; // rdx
  RTL_SRWLOCK **v32; // rax
  WCHAR *v33; // r12
  PnpDeviceWatcher *v34; // rbx
  PnpDeviceWatcher::RetryDeviceListEntry *v35; // rsi
  unsigned int CurrentMilliSecTime; // eax
  unsigned int v37; // ecx
  PnpDevice *v38; // rdi
  int InterfacePath; // eax
  unsigned int v40; // edi
  int v41; // eax
  unsigned int v42; // edx
  int v43; // r8d
  int v44; // r9d
  PnpDeviceWatcher::RetryDeviceListEntry *v45; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int16 v50; // ax
  unsigned int v51; // ecx
  int v53; // [rsp+20h] [rbp-38h]
  const char *v54; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  HSTRING string; // [rsp+A0h] [rbp+48h] BYREF
  PCWSTR v57; // [rsp+A8h] [rbp+50h] BYREF
  RTL_SRWLOCK *v58; // [rsp+B0h] [rbp+58h] BYREF
  PCWSTR StringRawBuffer; // [rsp+B8h] [rbp+60h] BYREF

  v57 = a2;
  *(_DWORD *)a2 = -1;
  v2 = this + 4;
  v4 = 0LL;
  while ( 1 )
  {
    Ptr = (RTL_SRWLOCK *)v2->Ptr;
    v32 = *(RTL_SRWLOCK ***)v2->Ptr;
    if ( *((RTL_SRWLOCK **)v2->Ptr + 1) != v2 || v32[1] != Ptr )
LABEL_41:
      __fastfail(3u);
    v2->Ptr = v32;
    v32[1] = v2;
    if ( Ptr == v2 )
      Ptr = 0LL;
    else
      --LODWORD(v2[2].Ptr);
    v6 = v4;
    v4 = (PnpDeviceWatcher::NotificationListEntry *)Ptr;
    v58 = Ptr;
    if ( v6 )
      PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(v6, 0);
    if ( !Ptr )
      break;
    v7 = (int)Ptr[3].Ptr;
    string = 0LL;
    if ( !v7 )
    {
      v14 = this + 7;
      AcquireSRWLockExclusive(this + 7);
      v31 = (HSTRING)Ptr[4].Ptr;
      v58 = this + 7;
      DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                      (PnpDeviceWatcher *)this,
                                      v31,
                                      1,
                                      (struct PnpDeviceWatcher::DeviceListEntry **)&string);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v58);
      v17 = (PnpDeviceWatcher::RetryDeviceListEntry *)string;
      goto LABEL_37;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v14 = this + 7;
      AcquireSRWLockExclusive(this + 7);
      v29 = (HSTRING)Ptr[4].Ptr;
      v58 = this + 7;
      v30 = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
              (PnpDeviceWatcher *)this,
              v29,
              1,
              (struct PnpDeviceWatcher::DeviceListEntry **)&string);
      v17 = (PnpDeviceWatcher::RetryDeviceListEntry *)string;
      DeviceListEntryByInstanceId = v30;
      if ( v30 < 0 || !string )
        goto LABEL_35;
      started = PnpDeviceWatcher::StartDeviceObject(
                  (PnpDeviceWatcher *)this,
                  (struct PnpDeviceWatcher::DeviceListEntry *)string);
      goto LABEL_34;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v14 = this + 7;
      AcquireSRWLockExclusive(this + 7);
      v24 = (HSTRING)Ptr[4].Ptr;
      v58 = this + 7;
      v25 = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
              (PnpDeviceWatcher *)this,
              v24,
              0,
              (struct PnpDeviceWatcher::DeviceListEntry **)&string);
      v17 = (PnpDeviceWatcher::RetryDeviceListEntry *)string;
      DeviceListEntryByInstanceId = v25;
      if ( v25 >= 0 && string )
      {
        PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)this, (struct PnpDeviceWatcher::DeviceListEntry *)string);
        v27 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v17;
        if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v17 + 8LL) != v17 )
          goto LABEL_41;
        v28 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v17 + 1);
        if ( *v28 != v17 )
          goto LABEL_41;
        *v28 = v27;
        *((_QWORD *)v27 + 1) = v28;
        --LODWORD(this[10].Ptr);
        PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v17, v26);
      }
      goto LABEL_35;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v14 = this + 7;
      AcquireSRWLockExclusive(this + 7);
      v22 = (PnpApiWrapper *)Ptr[4].Ptr;
      v58 = this + 7;
      DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                         (PnpDeviceWatcher *)this,
                                         v22,
                                         1,
                                         (struct PnpDeviceWatcher::DeviceListEntry **)&string);
      v17 = (PnpDeviceWatcher::RetryDeviceListEntry *)string;
      DeviceListEntryByInstanceId = DeviceListEntryByInterfacePath;
      if ( DeviceListEntryByInterfacePath < 0 || !string )
        goto LABEL_35;
      started = PnpDevice::AddInterface(*((PnpDevice **)string + 2), (HSTRING)Ptr[4].Ptr);
      goto LABEL_34;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 || (v13 = v12 - 1) == 0 || (unsigned int)(v13 - 1) <= 1 )
      {
        v14 = this + 7;
        AcquireSRWLockExclusive(this + 7);
        v15 = (PnpApiWrapper *)Ptr[4].Ptr;
        v58 = this + 7;
        v16 = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                (PnpDeviceWatcher *)this,
                v15,
                0,
                (struct PnpDeviceWatcher::DeviceListEntry **)&string);
        v17 = (PnpDeviceWatcher::RetryDeviceListEntry *)string;
        DeviceListEntryByInstanceId = v16;
        if ( v16 >= 0 && string )
          PnpDevice::OnPnpNotification(*((_QWORD *)string + 2), LODWORD(Ptr[3].Ptr));
        goto LABEL_35;
      }
    }
    else
    {
      v14 = this + 7;
      AcquireSRWLockExclusive(this + 7);
      v19 = (PnpApiWrapper *)Ptr[4].Ptr;
      v58 = this + 7;
      v20 = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
              (PnpDeviceWatcher *)this,
              v19,
              0,
              (struct PnpDeviceWatcher::DeviceListEntry **)&string);
      v17 = (PnpDeviceWatcher::RetryDeviceListEntry *)string;
      DeviceListEntryByInstanceId = v20;
      if ( v20 < 0 || !string )
        goto LABEL_35;
      started = PnpDevice::RemoveInterface(*((PnpDevice **)string + 2), (HSTRING)Ptr[4].Ptr);
LABEL_34:
      DeviceListEntryByInstanceId = started;
LABEL_35:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v58);
LABEL_37:
      if ( DeviceListEntryByInstanceId < 0 )
      {
        if ( v17 )
        {
          AcquireSRWLockExclusive(v14);
          string = (HSTRING)v14;
          PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)this, v17);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&string);
        }
      }
    }
  }
  v33 = (WCHAR *)v57;
  v34 = (PnpDeviceWatcher *)this[11].Ptr;
  while ( v34 != (PnpDeviceWatcher *)&this[11] )
  {
    v35 = v34;
    v34 = *(PnpDeviceWatcher **)v34;
    CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((QpcTimeConverter *)&this[14]);
    v37 = *((_DWORD *)v35 + 6);
    if ( CurrentMilliSecTime < v37 )
    {
      v51 = v37 - CurrentMilliSecTime;
      if ( *(_DWORD *)v33 > v51 )
        *(_DWORD *)v33 = v51;
    }
    else
    {
      v38 = (PnpDevice *)*((_QWORD *)v35 + 2);
      *((_DWORD *)v35 + 6) = CurrentMilliSecTime + 100;
      WindowsDeleteString(0LL);
      string = 0LL;
      InterfacePath = PnpDevice::GetInterfacePath(v38, &string);
      v40 = InterfacePath;
      if ( InterfacePath < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)(unsigned int)InterfacePath,
          v53);
        WindowsDeleteString(string);
        string = 0LL;
        std::unique_ptr<PnpDeviceWatcher::NotificationListEntry>::~unique_ptr<PnpDeviceWatcher::NotificationListEntry>(&v58);
        return v40;
      }
      v41 = PnpDevice::OpenInterface(*((PnpDevice **)v35 + 2));
      if ( v41 < 0 )
      {
        if ( v41 == -2147024864 )
        {
          if ( (unsigned int)dword_18024E248 > 5 )
          {
            LOWORD(v57) = *((_WORD *)v35 + 14);
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v54 = "Failed to exclusively open LampArray";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
              v47,
              (__int64)&unk_1802134E3,
              v48,
              v49,
              (const unsigned __int16 **)&v54,
              &StringRawBuffer,
              (__int64)&v57);
          }
          v50 = *((_WORD *)v35 + 14);
          if ( v50 > 0 )
          {
            *((_WORD *)v35 + 14) = v50 - 1;
            if ( *(_DWORD *)v33 > 0x64u )
              *(_DWORD *)v33 = 100;
            goto LABEL_58;
          }
        }
      }
      else
      {
        LampArrayRawInputProvider::OnLampArrayAdded(
          (LampArrayRawInputProvider *)this->Ptr,
          *((struct PnpDevice **)v35 + 2));
        if ( (unsigned int)dword_18024E248 > 5 )
        {
          v57 = WindowsGetStringRawBuffer(string, 0LL);
          StringRawBuffer = (PCWSTR)"Successfully exclusively opened LampArray";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
            (unsigned int)&dword_18024E248,
            (unsigned int)&unk_180213490,
            v43,
            v44,
            (__int64)&StringRawBuffer,
            (__int64)&v57);
        }
      }
      v45 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v35;
      if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v35 + 8LL) != v35 )
        goto LABEL_41;
      v46 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v35 + 1);
      if ( *v46 != v35 )
        goto LABEL_41;
      *v46 = v45;
      *((_QWORD *)v45 + 1) = v46;
      --LODWORD(this[13].Ptr);
      PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v35, v42);
LABEL_58:
      WindowsDeleteString(string);
    }
  }
  std::unique_ptr<PnpDeviceWatcher::NotificationListEntry>::~unique_ptr<PnpDeviceWatcher::NotificationListEntry>(&v58);
  return 0LL;
}
