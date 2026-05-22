/*
 * XREFs of ??1?$unique_ptr@UViewClientListEntry@LampArrayDevice@@U?$default_delete@UViewClientListEntry@LampArrayDevice@@@std@@@std@@QEAA@XZ @ 0x1800E5F74
 * Callers:
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800E6174 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 * Callees:
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800E6130 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<LampArrayDevice::ViewClientListEntry>::~unique_ptr<LampArrayDevice::ViewClientListEntry>(
        LampArrayDevice::ViewClientListEntry **a1,
        unsigned int a2)
{
  LampArrayDevice::ViewClientListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
