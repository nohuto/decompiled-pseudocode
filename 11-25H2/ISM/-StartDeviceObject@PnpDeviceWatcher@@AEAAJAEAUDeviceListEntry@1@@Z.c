/*
 * XREFs of ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E2D90
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x180038D48 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800648FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008EC94 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x18009A11C (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E0A5C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??1?$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U?$default_delete@UDeviceListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800E1928 (--1-$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U-$default_delete@UDeviceListEntry@PnpDeviceW.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E3094 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800E44E0 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::StartDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  __int64 v4; // rdx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // eax
  const char *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  HSTRING *v17; // rbx
  int InterfacePath; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  InputContext *v25; // rcx
  PnpDeviceWatcher **v26; // rcx
  int v27[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  PnpDeviceWatcher::RetryDeviceListEntry *v29; // [rsp+88h] [rbp+48h] BYREF
  HSTRING string; // [rsp+90h] [rbp+50h] BYREF
  PCWSTR StringRawBuffer; // [rsp+98h] [rbp+58h] BYREF

  if ( (unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)(*((_QWORD *)a2 + 2)
                                                                                             + 124LL)) == 2 )
    return 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) )
  {
    for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 8);
          i != (PnpDeviceWatcher *)((char *)this + 64);
          i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
    {
      if ( i != a2 )
      {
        if ( (unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)(*((_QWORD *)a2 + 2) + 124LL)) != 1 )
        {
          v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp";
          v11 = 950LL;
          goto LABEL_15;
        }
        if ( *(_DWORD *)(v7 + 112) == *(_DWORD *)(v6 + 112) )
        {
          v8 = *(_QWORD *)(v6 + 16);
          if ( v8 )
            v9 = *(_DWORD *)(v8 + 108);
          else
            v9 = *(_DWORD *)(v6 + 108);
          if ( *(_DWORD *)(v7 + 108) < v9 )
            Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(
              (InputContext **)(v6 + 16),
              (volatile signed __int32 *)v7);
        }
      }
    }
  }
  v14 = std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)(*((_QWORD *)a2 + 2) + 124LL));
  if ( !v14 )
    goto LABEL_21;
  v16 = v14 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
LABEL_21:
      v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
      v11 = 576LL;
LABEL_15:
      v12 = -2147418113;
      goto LABEL_16;
    }
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(v15 + 124), 2);
  }
  if ( *((_BYTE *)a2 + 24) || !*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) )
    return 0LL;
  *((_BYTE *)a2 + 24) = 1;
  if ( (!IsEdition(6176LL) || *(_DWORD *)(*((_QWORD *)a2 + 2) + 120LL) != 65548)
    && (unsigned int)PnpDevice::OpenInterface(*((PnpDevice **)a2 + 2)) == -2147024864 )
  {
    v17 = (HSTRING *)*((_QWORD *)a2 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v17, &string);
    v12 = InterfacePath;
    if ( InterfacePath >= 0 )
    {
      if ( (unsigned int)dword_180244248 > 5 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        *(_QWORD *)v27 = "Failed to exclusively open LampArray device, adding to retry list";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v19,
          byte_180209EA3,
          v20,
          v21,
          (const unsigned __int16 **)v27,
          &StringRawBuffer);
      }
      v22 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v23 = v22;
      if ( v22 )
      {
        *v22 = 0LL;
        v22[1] = 0LL;
        v22[3] = 0LL;
        v22[2] = 0LL;
        v24 = *((_QWORD *)a2 + 2);
        if ( v23[2] != v24 )
        {
          if ( v24 )
            _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
          v25 = (InputContext *)v23[2];
          v23[2] = v24;
          if ( v25 )
            InputContext::Release(v25);
        }
        *((_WORD *)v23 + 14) = 3000;
        *((_DWORD *)v23 + 6) = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 112)) + 100;
        v29 = 0LL;
        v26 = (PnpDeviceWatcher **)*((_QWORD *)this + 12);
        if ( *v26 != (PnpDeviceWatcher *)((char *)this + 88) )
          __fastfail(3u);
        *v23 = (char *)this + 88;
        v23[1] = v26;
        *v26 = (PnpDeviceWatcher *)v23;
        *((_QWORD *)this + 12) = v23;
        ++*((_DWORD *)this + 26);
        std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&v29);
        v12 = 0;
      }
      else
      {
        v29 = 0LL;
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x255,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)0x8007000ELL);
        std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&v29);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x250,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
        (const char *)(unsigned int)InterfacePath);
    }
    WindowsDeleteString(string);
    return v12;
  }
  v12 = LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)this, *((HSTRING **)a2 + 2));
  if ( (v12 & 0x80000000) != 0 )
  {
    v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
    v11 = 611LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v11, (__int64)v10, (const char *)v12);
    return v12;
  }
  if ( v12 != 1 )
    return 0LL;
  PnpDeviceWatcher::StopDeviceObject(this, a2);
  return 1LL;
}
