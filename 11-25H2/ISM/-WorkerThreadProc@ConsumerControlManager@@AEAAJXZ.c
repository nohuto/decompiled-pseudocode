/*
 * XREFs of ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800E3B2C
 * Callers:
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800E3BF0 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E04B0 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800E36A0 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800E6484 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlManager::WorkerThreadProc(ConsumerControlManager *this)
{
  unsigned int v2; // edx
  int v3; // eax
  unsigned int v4; // ebx
  ConsumerControlNexusDevice **i; // rbx
  ConsumerControlNexusDevice *v6; // rcx
  ConsumerControlNexusDevice ***v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  while ( !*((_BYTE *)this + 104) )
  {
    SleepEx(0xFFFFFFFF, 1);
    if ( *((_BYTE *)this + 104) )
      break;
    v3 = ConsumerControlManager::ProcessAddRemoveDeviceCommands(this, v2);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    for ( i = (ConsumerControlNexusDevice **)*((_QWORD *)this + 5);
          i != (ConsumerControlNexusDevice **)((char *)this + 40);
          i = (ConsumerControlNexusDevice **)*i )
    {
      if ( (int)ConsumerControlNexusDevice::ProcessInput(i[2]) < 0 )
      {
        v6 = *i;
        if ( *((ConsumerControlNexusDevice ***)*i + 1) != i || (v7 = (ConsumerControlNexusDevice ***)i[1], *v7 != i) )
          __fastfail(3u);
        *v7 = (ConsumerControlNexusDevice **)v6;
        *((_QWORD *)v6 + 1) = v7;
        --*((_DWORD *)this + 14);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)i);
      }
    }
  }
  return 0LL;
}
