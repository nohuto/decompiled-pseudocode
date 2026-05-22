/*
 * XREFs of ??1GameInputWatcher@@QEAA@XZ @ 0x18010C1B4
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x18010C0F4 (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180097498 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 */

void __fastcall GameInputWatcher::~GameInputWatcher(GameInputWatcher *this)
{
  const struct std::nothrow_t *v2; // rdx

  GameInputWatcher::StopWatching(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)this + 8, v2);
}
