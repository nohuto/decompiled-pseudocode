/*
 * XREFs of ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140040B7C
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x14003FB18 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1400409C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x140083274 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 */

void *__fastcall FxDeviceText::_CleanupList(_SINGLE_LIST_ENTRY *Head, unsigned int a2)
{
  FxDeviceText *Next; // rcx
  void *result; // rax

  Next = (FxDeviceText *)Head->Next;
  if ( Next )
  {
    Next->m_Entry.Next = 0LL;
    result = FxDeviceText::`scalar deleting destructor'(Next, a2);
  }
  Head->Next = 0LL;
  return result;
}
