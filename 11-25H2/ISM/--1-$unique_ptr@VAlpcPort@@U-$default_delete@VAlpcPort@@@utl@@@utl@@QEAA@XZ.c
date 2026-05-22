/*
 * XREFs of ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x18009BD50
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x180078DEC (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010B120 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x18010C2EC (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 * Callees:
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010AFD0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 */

void *__fastcall utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(
        AlpcPort **a1)
{
  AlpcPort *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return AlpcPort::`scalar deleting destructor'(v1, 1u);
  return result;
}
