/*
 * XREFs of ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x180157550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StreamResourceConsumer@@UEAA@XZ @ 0x18015731C (--1StreamResourceConsumer@@UEAA@XZ.c)
 */

StreamResourceConsumer *__fastcall StreamResourceConsumer::`vector deleting destructor'(
        StreamResourceConsumer *this,
        char a2)
{
  StreamResourceConsumer::~StreamResourceConsumer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
