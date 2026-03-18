/*
 * XREFs of ??1DispBrokerClientHandle@@QEAA@XZ @ 0x14005AB8C
 * Callers:
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1400530AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DispBrokerClientHandle::~DispBrokerClientHandle(DispBrokerClientHandle *this)
{
  ZwAlpcDisconnectPort(*((_QWORD *)this + 1), 0LL);
  ZwClose(*((HANDLE *)this + 1));
}
