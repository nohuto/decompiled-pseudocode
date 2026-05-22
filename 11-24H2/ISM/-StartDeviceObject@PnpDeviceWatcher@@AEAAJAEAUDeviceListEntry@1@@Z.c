/*
 * XREFs of ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E4498
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006065C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800357D8 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180064B88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008F314 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x18008F468 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800959FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x18009A2EC (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E398C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??1?$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U?$default_delete@UDeviceListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800E4478 (--1-$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U-$default_delete@UDeviceListEntry@PnpDeviceW.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E47A4 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
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
  __int64 v17; // rdx
  unsigned int v18; // r8d
  HSTRING *v19; // rbx
  int InterfacePath; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  InputContext *v26; // rcx
  PnpDeviceWatcher **v27; // rcx
  int v28[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  PnpDeviceWatcher::RetryDeviceListEntry *v30; // [rsp+88h] [rbp+48h] BYREF
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
          v11 = 918LL;
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
      v11 = 491LL;
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
    && (unsigned int)PnpDevice::OpenInterface(*((PnpDevice **)a2 + 2), v17, v18) == -2147024864 )
  {
    v19 = (HSTRING *)*((_QWORD *)a2 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v19, &string);
    v12 = InterfacePath;
    if ( InterfacePath >= 0 )
    {
      if ( (unsigned int)dword_18024E248 > 5 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        *(_QWORD *)v28 = "Failed to exclusively open LampArray device, adding to retry list";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          (__int64)&dword_18024E248,
          byte_180213548,
          v21,
          v22,
          (const unsigned __int16 **)v28,
          &StringRawBuffer);
      }
      v23 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v24 = v23;
      if ( v23 )
      {
        *v23 = 0LL;
        v23[1] = 0LL;
        v23[3] = 0LL;
        v23[2] = 0LL;
        v25 = *((_QWORD *)a2 + 2);
        if ( v24[2] != v25 )
        {
          if ( v25 )
            _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
          v26 = (InputContext *)v24[2];
          v24[2] = v25;
          if ( v26 )
            InputContext::Release(v26);
        }
        *((_WORD *)v24 + 14) = 3000;
        *((_DWORD *)v24 + 6) = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 112)) + 100;
        v30 = 0LL;
        v27 = (PnpDeviceWatcher **)*((_QWORD *)this + 12);
        if ( *v27 != (PnpDeviceWatcher *)((char *)this + 88) )
          __fastfail(3u);
        *v24 = (char *)this + 88;
        v24[1] = v27;
        *v27 = (PnpDeviceWatcher *)v24;
        *((_QWORD *)this + 12) = v24;
        ++*((_DWORD *)this + 26);
        std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&v30);
        v12 = 0;
      }
      else
      {
        v30 = 0LL;
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x200,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)0x8007000ELL);
        std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&v30);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FB,
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
    v11 = 526LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v11, (__int64)v10, (const char *)v12);
    return v12;
  }
  if ( v12 != 1 )
    return 0LL;
  PnpDeviceWatcher::StopDeviceObject(this, a2);
  return 1LL;
}
