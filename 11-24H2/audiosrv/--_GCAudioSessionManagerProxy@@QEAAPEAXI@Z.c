/*
 * XREFs of ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180068334
 * Callers:
 *     AUDIOSESSIONMANAGER_rundown @ 0x180072E50 (AUDIOSESSIONMANAGER_rundown.c)
 *     AudioSessionManagerDestroy @ 0x180079BC0 (AudioSessionManagerDestroy.c)
 * Callees:
 *     ??1CAudioSessionManagerProxy@@QEAA@XZ @ 0x1800A2E98 (--1CAudioSessionManagerProxy@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSessionManagerProxy *__fastcall CAudioSessionManagerProxy::`scalar deleting destructor'(
        CAudioSessionManagerProxy *this)
{
  CAudioSessionManagerProxy::~CAudioSessionManagerProxy(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
