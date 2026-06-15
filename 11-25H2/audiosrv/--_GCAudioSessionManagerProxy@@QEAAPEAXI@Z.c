/*
 * XREFs of ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180067A5C
 * Callers:
 *     AudioSessionManagerDestroy @ 0x180067940 (AudioSessionManagerDestroy.c)
 *     AUDIOSESSIONMANAGER_rundown @ 0x180085BD0 (AUDIOSESSIONMANAGER_rundown.c)
 * Callees:
 *     ??1CAudioSessionManagerProxy@@QEAA@XZ @ 0x1800A6A70 (--1CAudioSessionManagerProxy@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSessionManagerProxy *__fastcall CAudioSessionManagerProxy::`scalar deleting destructor'(
        CAudioSessionManagerProxy *this)
{
  CAudioSessionManagerProxy::~CAudioSessionManagerProxy(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
