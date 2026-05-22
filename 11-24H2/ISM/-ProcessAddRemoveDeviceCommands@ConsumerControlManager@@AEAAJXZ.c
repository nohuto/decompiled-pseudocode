/*
 * XREFs of ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800E4C80
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800E510C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E2F90 (--1-$unique_ptr@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@U-$default_delete@U.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E33E0 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E4840 (--1-$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U-$default_delete.c)
 *     ?ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800E6EDC (-ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E7CAC (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800E7ED0 (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall ConsumerControlManager::ProcessAddRemoveDeviceCommands(
        ConsumerControlManager *this,
        unsigned int a2)
{
  struct PnpDevice **v3; // rax
  struct PnpDevice **v4; // rdi
  struct PnpDevice *v5; // rcx
  int v6; // ecx
  __int64 *v7; // rbx
  struct PnpDevice **v8; // r14
  bool v9; // al
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 *v12; // rbx
  bool v13; // al
  __int64 *v14; // rcx
  __int64 **v15; // rax
  struct ConsumerControlNexusDevice **v16; // rax
  ConsumerControlManager *v17; // rbx
  struct IRawInputProvider *v18; // r9
  struct IMessageSession *v19; // r8
  struct IRawInputClient *v20; // rdx
  struct PnpDevice *v21; // rcx
  unsigned int v22; // edx
  ConsumerControlManager **v23; // rcx
  struct ConsumerControlGenericDevice **v24; // rax
  ConsumerControlManager *v25; // rbx
  struct PnpDevice *v26; // rcx
  unsigned int v27; // edx
  ConsumerControlManager **v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // edx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct ConsumerControlNexusDevice **v34; // [rsp+70h] [rbp+40h] BYREF
  struct ConsumerControlGenericDevice **v35; // [rsp+78h] [rbp+48h] BYREF
  struct PnpDevice **v36; // [rsp+80h] [rbp+50h] BYREF

  while ( *((_DWORD *)this + 20) )
  {
    v3 = (struct PnpDevice **)((char *)this + 64);
    v4 = (struct PnpDevice **)*((_QWORD *)this + 8);
    if ( v4[1] != (ConsumerControlManager *)((char *)this + 64) )
      goto LABEL_37;
    v5 = *v4;
    if ( *((struct PnpDevice ***)*v4 + 1) != v4 )
      goto LABEL_37;
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 == v3 )
      v4 = 0LL;
    else
      --*((_DWORD *)this + 20);
    v6 = *((_DWORD *)v4 + 4);
    v36 = v4;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v7 = (__int64 *)*((_QWORD *)this + 2);
        v8 = v4 + 4;
        while ( 1 )
        {
          if ( v7 == (__int64 *)((char *)this + 16) )
            goto LABEL_16;
          v8 = v4 + 4;
          v9 = ConsumerControlGenericDevice::ContainsDevice((ConsumerControlGenericDevice *)v7[2], v4[4]);
          v10 = (__int64 *)*v7;
          if ( v9 )
            break;
          v7 = (__int64 *)*v7;
        }
        if ( (__int64 *)v10[1] != v7 )
          goto LABEL_37;
        v11 = (__int64 **)v7[1];
        if ( *v11 != v7 )
          goto LABEL_37;
        *v11 = v10;
        v10[1] = (__int64)v11;
        --*((_DWORD *)this + 8);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v7);
LABEL_16:
        v12 = (__int64 *)*((_QWORD *)this + 5);
        while ( 1 )
        {
          if ( v12 == (__int64 *)((char *)this + 40) )
            goto LABEL_33;
          v13 = ConsumerControlGenericDevice::ContainsDevice((ConsumerControlGenericDevice *)v12[2], *v8);
          v14 = (__int64 *)*v12;
          if ( v13 )
            break;
          v12 = (__int64 *)*v12;
          v8 = v4 + 4;
        }
        if ( (__int64 *)v14[1] != v12 || (v15 = (__int64 **)v12[1], *v15 != v12) )
LABEL_37:
          __fastfail(3u);
        *v15 = v14;
        v14[1] = (__int64)v15;
        --*((_DWORD *)this + 14);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v12);
      }
    }
    else
    {
      v16 = (struct ConsumerControlNexusDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = (ConsumerControlManager *)v16;
      if ( !v16 )
      {
        v34 = 0LL;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_36;
      }
      *v16 = 0LL;
      v16[1] = 0LL;
      v16[2] = 0LL;
      v18 = (struct IRawInputProvider *)*((_QWORD *)this + 16);
      v19 = (struct IMessageSession *)*((_QWORD *)this + 15);
      v20 = (struct IRawInputClient *)*((_QWORD *)this + 14);
      v21 = v4[4];
      v34 = v16;
      if ( (int)ConsumerControlNexusDevice::TryCreateAndInitialize(v21, v20, v19, v18, v16 + 2) < 0 )
      {
        v24 = (struct ConsumerControlGenericDevice **)operator new(
                                                        0x18uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
        v25 = (ConsumerControlManager *)v24;
        if ( !v24 )
        {
          v35 = 0LL;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFE,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
            (const char *)0x8007000ELL);
          std::unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>(
            (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)&v35,
            v29);
LABEL_36:
          std::unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>(
            (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)&v34,
            v30);
          std::unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>(
            (ConsumerControlManager::ConsumerControlDeviceCommandListEntry **)&v36,
            v31);
          return 2147942414LL;
        }
        *v24 = 0LL;
        v24[1] = 0LL;
        v24[2] = 0LL;
        v26 = v4[4];
        v35 = v24;
        if ( ConsumerControlGenericDevice::CreateAndInitialize(v26, v24 + 2) >= 0 )
        {
          v35 = 0LL;
          v28 = (ConsumerControlManager **)*((_QWORD *)this + 3);
          if ( *v28 != (ConsumerControlManager *)((char *)this + 16) )
            goto LABEL_37;
          *(_QWORD *)v25 = (char *)this + 16;
          *((_QWORD *)v25 + 1) = v28;
          *v28 = v25;
          ++*((_DWORD *)this + 8);
          *((_QWORD *)this + 3) = v25;
        }
        std::unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>(
          (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)&v35,
          v27);
      }
      else
      {
        v34 = 0LL;
        v23 = (ConsumerControlManager **)*((_QWORD *)this + 6);
        if ( *v23 != (ConsumerControlManager *)((char *)this + 40) )
          goto LABEL_37;
        *(_QWORD *)v17 = (char *)this + 40;
        *((_QWORD *)v17 + 1) = v23;
        *v23 = v17;
        ++*((_DWORD *)this + 14);
        *((_QWORD *)this + 6) = v17;
      }
      std::unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>(
        (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)&v34,
        v22);
    }
LABEL_33:
    std::unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>(
      (ConsumerControlManager::ConsumerControlDeviceCommandListEntry **)&v36,
      a2);
  }
  return 0LL;
}
