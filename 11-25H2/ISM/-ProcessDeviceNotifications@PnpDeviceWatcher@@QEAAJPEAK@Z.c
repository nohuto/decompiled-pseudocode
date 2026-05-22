/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180060430 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x180010D8C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180037980 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180038FEC (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B6D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800648FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??1?$unique_ptr@UNotificationListEntry@PnpDeviceWatcher@@U?$default_delete@UNotificationListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x18006558C (--1-$unique_ptr@UNotificationListEntry@PnpDeviceWatcher@@U-$default_delete@UNotificationListEntr.c)
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800655AC (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008EC94 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x18009A11C (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800E0430 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E0A5C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?Erase@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXPEAUDeviceListEntry@PnpDeviceWatcher@@@Z @ 0x1800E1948 (-Erase@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXPEAUDeviceListEntry@PnpDeviceWatcher@@.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E2D90 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E3094 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDOCF@@@details@wil@@QEAA_NXZ @ 0x1800E3130 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDOCF@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800E316C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E3C50 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x1800E4350 (-OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800E44E0 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E46E8 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(RTL_SRWLOCK *this, unsigned int *a2)
{
  PnpDeviceWatcher::NotificationListEntry *v4; // rbx
  char *v5; // r12
  char *v6; // r14
  PnpDeviceWatcher::NotificationListEntry *v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int DeviceListEntryByInterfacePath; // edi
  struct PnpDeviceWatcher::DeviceListEntry *v16; // rsi
  int started; // eax
  int DeviceListEntryByInstanceId; // eax
  struct PnpDeviceWatcher::DeviceListEntry *v19; // rdi
  __int64 v20; // rax
  PnpDeviceWatcher *Ptr; // rbx
  PnpDeviceWatcher::RetryDeviceListEntry *v22; // rsi
  unsigned int CurrentMilliSecTime; // eax
  unsigned int v24; // ecx
  PnpDevice *v25; // rdi
  int InterfacePath; // eax
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  PnpDeviceWatcher::RetryDeviceListEntry *v33; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int16 v38; // ax
  unsigned int v39; // ecx
  int v41; // [rsp+20h] [rbp-38h]
  const char *v42; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  struct PnpDeviceWatcher::DeviceListEntry *v44; // [rsp+A0h] [rbp+48h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+50h] BYREF
  char *v46; // [rsp+B0h] [rbp+58h] BYREF
  PCWSTR StringRawBuffer; // [rsp+B8h] [rbp+60h] BYREF

  *a2 = -1;
  v4 = 0LL;
  v5 = (char *)&this[4];
  while ( 1 )
  {
    v6 = *(char **)v5;
    v20 = **(_QWORD **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *(char **)(v20 + 8) != v6 )
LABEL_49:
      __fastfail(3u);
    *(_QWORD *)v5 = v20;
    *(_QWORD *)(v20 + 8) = v5;
    if ( v6 == v5 )
      v6 = 0LL;
    else
      --*((_DWORD *)v5 + 4);
    v7 = v4;
    v4 = (PnpDeviceWatcher::NotificationListEntry *)v6;
    v46 = v6;
    if ( v7 )
      PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(v7, (unsigned int)a2);
    if ( !v6 )
      break;
    v44 = 0LL;
    v8 = *((_DWORD *)v6 + 6);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( !v13 || (v14 = v13 - 1) == 0 || (unsigned int)(v14 - 1) <= 1 )
              {
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
                {
                  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
                  {
                    AcquireSRWLockExclusive(this + 7);
                    string = (HSTRING)&this[7];
                    DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                                       (PnpDeviceWatcher *)this,
                                                       *((PnpApiWrapper **)v6 + 4),
                                                       0,
                                                       &v44);
                    v16 = v44;
                    if ( DeviceListEntryByInterfacePath >= 0 && v44 )
                      PnpDevice::OnPnpNotification(*((_QWORD *)v44 + 2), *((unsigned int *)v6 + 6));
                    goto LABEL_22;
                  }
                  if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                              (PnpDeviceWatcher *)this,
                              *((PnpApiWrapper **)v6 + 4),
                              0,
                              &v44) < 0 )
                    goto LABEL_57;
                  if ( v44 )
                    PnpDevice::OnPnpNotification(*((_QWORD *)v44 + 2), *((unsigned int *)v6 + 6));
                }
              }
            }
            else
            {
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
              {
                AcquireSRWLockExclusive(this + 7);
                string = (HSTRING)&this[7];
                DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                                   (PnpDeviceWatcher *)this,
                                                   *((PnpApiWrapper **)v6 + 4),
                                                   0,
                                                   &v44);
                v16 = v44;
                if ( DeviceListEntryByInterfacePath >= 0 && v44 )
                {
                  started = PnpDevice::RemoveInterface(*((PnpDevice **)v44 + 2), *((HSTRING *)v6 + 4));
                  goto LABEL_30;
                }
                goto LABEL_22;
              }
              if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                          (PnpDeviceWatcher *)this,
                          *((PnpApiWrapper **)v6 + 4),
                          0,
                          &v44) < 0 )
                goto LABEL_57;
              v16 = v44;
              if ( v44 )
              {
                DeviceListEntryByInstanceId = PnpDevice::RemoveInterface(*((PnpDevice **)v44 + 2), *((HSTRING *)v6 + 4));
LABEL_61:
                DeviceListEntryByInterfacePath = DeviceListEntryByInstanceId;
                goto LABEL_62;
              }
            }
          }
          else
          {
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
            {
              AcquireSRWLockExclusive(this + 7);
              string = (HSTRING)&this[7];
              DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                                 (PnpDeviceWatcher *)this,
                                                 *((PnpApiWrapper **)v6 + 4),
                                                 1,
                                                 &v44);
              v16 = v44;
              if ( DeviceListEntryByInterfacePath >= 0 && v44 )
              {
                started = PnpDevice::AddInterface(*((PnpDevice **)v44 + 2), *((HSTRING *)v6 + 4));
                goto LABEL_30;
              }
              goto LABEL_22;
            }
            if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                        (PnpDeviceWatcher *)this,
                        *((PnpApiWrapper **)v6 + 4),
                        1,
                        &v44) < 0 )
              goto LABEL_57;
            v16 = v44;
            if ( v44 )
            {
              DeviceListEntryByInstanceId = PnpDevice::AddInterface(*((PnpDevice **)v44 + 2), *((HSTRING *)v6 + 4));
              goto LABEL_61;
            }
          }
        }
        else
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
          {
            AcquireSRWLockExclusive(this + 7);
            string = (HSTRING)&this[7];
            DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                               (PnpDeviceWatcher *)this,
                                               *((HSTRING *)v6 + 4),
                                               0,
                                               &v44);
            v16 = v44;
            if ( DeviceListEntryByInterfacePath >= 0 && v44 )
            {
              PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)this, v44);
              NtList<PnpDeviceWatcher::DeviceListEntry>::Erase(&this[8], v16);
            }
            goto LABEL_22;
          }
          if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                      (PnpDeviceWatcher *)this,
                      *((HSTRING *)v6 + 4),
                      0,
                      &v44) < 0 )
            goto LABEL_57;
          v19 = v44;
          if ( v44 )
          {
            PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)this, v44);
            NtList<PnpDeviceWatcher::DeviceListEntry>::Erase(&this[8], v19);
          }
        }
      }
      else
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
        {
          AcquireSRWLockExclusive(this + 7);
          string = (HSTRING)&this[7];
          DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                             (PnpDeviceWatcher *)this,
                                             *((HSTRING *)v6 + 4),
                                             1,
                                             &v44);
          v16 = v44;
          if ( DeviceListEntryByInterfacePath >= 0 && v44 )
          {
            started = PnpDeviceWatcher::StartDeviceObject((PnpDeviceWatcher *)this, v44);
LABEL_30:
            DeviceListEntryByInterfacePath = started;
          }
LABEL_22:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&string);
          goto LABEL_62;
        }
        if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                    (PnpDeviceWatcher *)this,
                    *((HSTRING *)v6 + 4),
                    1,
                    &v44) < 0 )
        {
LABEL_57:
          v16 = v44;
LABEL_63:
          if ( v16 )
          {
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
            {
              AcquireSRWLockExclusive(this + 7);
              v44 = (struct PnpDeviceWatcher::DeviceListEntry *)&this[7];
              PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)this, v16);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v44);
            }
            else
            {
              PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)this, v16);
            }
          }
        }
        else
        {
          v16 = v44;
          if ( v44 )
          {
            DeviceListEntryByInstanceId = PnpDeviceWatcher::StartDeviceObject((PnpDeviceWatcher *)this, v44);
            goto LABEL_61;
          }
        }
      }
    }
    else
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
      {
        DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                        (PnpDeviceWatcher *)this,
                                        *((HSTRING *)v6 + 4),
                                        1,
                                        &v44);
        v16 = v44;
        goto LABEL_61;
      }
      AcquireSRWLockExclusive(this + 7);
      string = (HSTRING)&this[7];
      DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                         (PnpDeviceWatcher *)this,
                                         *((HSTRING *)v6 + 4),
                                         1,
                                         &v44);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&string);
      v16 = v44;
LABEL_62:
      if ( DeviceListEntryByInterfacePath < 0 )
        goto LABEL_63;
    }
  }
  Ptr = (PnpDeviceWatcher *)this[11].Ptr;
  while ( Ptr != (PnpDeviceWatcher *)&this[11] )
  {
    v22 = Ptr;
    Ptr = *(PnpDeviceWatcher **)Ptr;
    CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((QpcTimeConverter *)&this[14]);
    v24 = *((_DWORD *)v22 + 6);
    if ( CurrentMilliSecTime < v24 )
    {
      v39 = v24 - CurrentMilliSecTime;
      if ( *a2 > v39 )
        *a2 = v39;
    }
    else
    {
      *((_DWORD *)v22 + 6) = CurrentMilliSecTime + 100;
      v25 = (PnpDevice *)*((_QWORD *)v22 + 2);
      WindowsDeleteString(0LL);
      string = 0LL;
      InterfacePath = PnpDevice::GetInterfacePath(v25, &string);
      v27 = InterfacePath;
      if ( InterfacePath < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x139,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)(unsigned int)InterfacePath,
          v41);
        WindowsDeleteString(string);
        string = 0LL;
        std::unique_ptr<PnpDeviceWatcher::NotificationListEntry>::~unique_ptr<PnpDeviceWatcher::NotificationListEntry>(&v46);
        return v27;
      }
      v28 = PnpDevice::OpenInterface(*((PnpDevice **)v22 + 2));
      if ( v28 < 0 )
      {
        if ( v28 == -2147024864 )
        {
          if ( (unsigned int)dword_180244248 > 5 )
          {
            LOWORD(v44) = *((_WORD *)v22 + 14);
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v42 = "Failed to exclusively open LampArray";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
              v35,
              (__int64)&unk_180209EED,
              v36,
              v37,
              (const unsigned __int16 **)&v42,
              &StringRawBuffer,
              (__int64)&v44);
          }
          v38 = *((_WORD *)v22 + 14);
          if ( v38 > 0 )
          {
            *((_WORD *)v22 + 14) = v38 - 1;
            if ( *a2 > 0x64 )
              *a2 = 100;
            goto LABEL_83;
          }
        }
      }
      else
      {
        LampArrayRawInputProvider::OnLampArrayAdded(
          (LampArrayRawInputProvider *)this->Ptr,
          *((struct PnpDevice **)v22 + 2));
        if ( (unsigned int)dword_180244248 > 5 )
        {
          v44 = (struct PnpDeviceWatcher::DeviceListEntry *)WindowsGetStringRawBuffer(string, 0LL);
          StringRawBuffer = (PCWSTR)"Successfully exclusively opened LampArray";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
            v30,
            (unsigned int)&unk_180209F52,
            v31,
            v32,
            (__int64)&StringRawBuffer,
            (__int64)&v44);
        }
      }
      v33 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v22;
      v34 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v22 + 1);
      if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v22 + 8LL) != v22 || *v34 != v22 )
        goto LABEL_49;
      *v34 = v33;
      *((_QWORD *)v33 + 1) = v34;
      --LODWORD(this[13].Ptr);
      PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v22, v29);
LABEL_83:
      WindowsDeleteString(string);
    }
  }
  std::unique_ptr<PnpDeviceWatcher::NotificationListEntry>::~unique_ptr<PnpDeviceWatcher::NotificationListEntry>(&v46);
  return 0LL;
}
