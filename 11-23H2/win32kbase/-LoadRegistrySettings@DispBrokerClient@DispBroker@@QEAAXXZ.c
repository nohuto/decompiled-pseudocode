/*
 * XREFs of ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C000F9DC
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C000F8FC (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int v1; // ebx

  v1 = 0;
  if ( qword_1C0296018 && (int)qword_1C0296018() >= 0 && qword_1C0296020 )
    v1 = qword_1C0296020();
  *(_DWORD *)this = v1;
}
