/*
 * XREFs of ??1?$unique_ptr@ULampArrayClientListEntry@LampArrayRawInputProvider@@U?$default_delete@ULampArrayClientListEntry@LampArrayRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800E0040
 * Callers:
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z @ 0x1800E0EE0 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEA.c)
 * Callees:
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800E046C (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<LampArrayRawInputProvider::LampArrayClientListEntry>::~unique_ptr<LampArrayRawInputProvider::LampArrayClientListEntry>(
        LampArrayRawInputProvider::LampArrayClientListEntry **a1,
        unsigned int a2)
{
  LampArrayRawInputProvider::LampArrayClientListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
