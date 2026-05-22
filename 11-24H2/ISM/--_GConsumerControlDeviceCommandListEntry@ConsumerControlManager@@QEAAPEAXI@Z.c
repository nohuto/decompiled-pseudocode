/*
 * XREFs of ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E4984
 * Callers:
 *     ??1?$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E4840 (--1-$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U-$default_delete.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800E48A0 (--1ConsumerControlManager@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ @ 0x1800E4860 (--1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ.c)
 */

ConsumerControlManager::ConsumerControlDeviceCommandListEntry *__fastcall ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry *this)
{
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry::~ConsumerControlDeviceCommandListEntry(this);
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
