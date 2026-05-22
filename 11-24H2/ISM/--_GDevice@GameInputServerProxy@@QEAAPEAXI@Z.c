/*
 * XREFs of ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x18010C1E8
 * Callers:
 *     ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x18006C9A0 (-NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x18010C0F4 (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009DC44 (--3@YAXPEAX@Z.c)
 */

void **__fastcall GameInputServerProxy::Device::`scalar deleting destructor'(
        void **this,
        const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 3, a2);
  operator delete(this);
  return this;
}
