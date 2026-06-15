/*
 * XREFs of ??_EDummyBroadcastProvider@@UEAAPEAXI@Z @ 0x1800F70C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DummyBroadcastProvider@@UEAA@XZ @ 0x1800F682C (--1DummyBroadcastProvider@@UEAA@XZ.c)
 */

DummyBroadcastProvider *__fastcall DummyBroadcastProvider::`vector deleting destructor'(
        DummyBroadcastProvider *this,
        char a2)
{
  DummyBroadcastProvider::~DummyBroadcastProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
