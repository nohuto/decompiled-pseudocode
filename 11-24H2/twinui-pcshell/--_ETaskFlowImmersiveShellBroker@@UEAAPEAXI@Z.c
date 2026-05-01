/*
 * XREFs of ??_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z @ 0x18020B0E8
 * Callers:
 *     ??_ETaskFlowImmersiveShellBroker@@WEI@EAAPEAXI@Z @ 0x1803FCE60 (--_ETaskFlowImmersiveShellBroker@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TaskFlowImmersiveShellBroker@@UEAA@XZ @ 0x1802B9968 (--1TaskFlowImmersiveShellBroker@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TaskFlowImmersiveShellBroker *__fastcall TaskFlowImmersiveShellBroker::`vector deleting destructor'(
        TaskFlowImmersiveShellBroker *this,
        char a2)
{
  TaskFlowImmersiveShellBroker::~TaskFlowImmersiveShellBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x130);
  return this;
}
