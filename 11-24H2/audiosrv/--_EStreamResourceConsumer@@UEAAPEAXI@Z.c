/*
 * XREFs of ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x180160300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StreamResourceConsumer@@UEAA@XZ @ 0x1801600CC (--1StreamResourceConsumer@@UEAA@XZ.c)
 */

StreamResourceConsumer *__fastcall StreamResourceConsumer::`vector deleting destructor'(
        StreamResourceConsumer *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  StreamResourceConsumer::~StreamResourceConsumer(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
