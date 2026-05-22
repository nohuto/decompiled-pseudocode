/*
 * XREFs of ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E33A0
 * Callers:
 *     ??1?$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E325C (--1-$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U-$default_delete.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800E32BC (--1ConsumerControlManager@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ @ 0x1800E327C (--1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ.c)
 */

ConsumerControlManager::ConsumerControlDeviceCommandListEntry *__fastcall ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry *this)
{
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry::~ConsumerControlDeviceCommandListEntry(this);
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
