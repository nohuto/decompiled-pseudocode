/*
 * XREFs of ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800E3940
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E0A5C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800E0DBC (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x180038D48 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E325C (--1-$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U-$default_delete.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800E3A60 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlManager::QueueAddRemoveDevice(
        ConsumerControlManager *this,
        struct PnpDevice *a2,
        unsigned __int8 a3)
{
  int v3; // r14d
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v6; // rax
  ULONG_PTR v7; // rsi
  unsigned int v8; // edi
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v9; // rbx
  ULONG_PTR v10; // rcx
  void *v11; // rax
  unsigned int v12; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  v6 = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)operator new(
                                                                          0x28uLL,
                                                                          (const struct std::nothrow_t *)&std::nothrow);
  v7 = (ULONG_PTR)v6;
  v8 = 0;
  if ( v6 )
  {
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    v9 = v6;
    v15 = v6;
    if ( *((ConsumerControlManager **)v6 + 3) != this )
    {
      if ( this )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        v9 = v15;
      }
      v10 = *((_QWORD *)v6 + 3);
      *((_QWORD *)v6 + 3) = this;
      if ( v10 )
        ConsumerControlManager::Release(v10);
    }
    Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((InputContext **)(v7 + 32), (volatile signed __int32 *)a2);
    *(_DWORD *)(v7 + 16) = v3 ^ 1;
    v11 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 96);
    if ( QueueUserAPC((PAPCFUNC)ConsumerControlManager::AddRemoveDeviceCommandApc, v11, v7) )
      v9 = 0LL;
    v15 = v9;
  }
  else
  {
    v15 = 0LL;
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)0x8007000ELL);
  }
  std::unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>(
    &v15,
    v12);
  return v8;
}
