/*
 * XREFs of ??0GameInputWatcher@@QEAA@XZ @ 0x18007165C
 * Callers:
 *     ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x1800715D0 (--0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z.c)
 * Callees:
 *     <none>
 */

GameInputWatcher *__fastcall GameInputWatcher::GameInputWatcher(GameInputWatcher *this)
{
  *((_QWORD *)this + 2) = -1LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return this;
}
