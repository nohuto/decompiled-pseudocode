/*
 * XREFs of ??_GCHybridPropertyStore@@UEAAPEAXI@Z @ 0x1801410E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CHybridPropertyStore@@UEAA@XZ @ 0x180141060 (--1CHybridPropertyStore@@UEAA@XZ.c)
 */

CHybridPropertyStore *__fastcall CHybridPropertyStore::`scalar deleting destructor'(
        CHybridPropertyStore *this,
        char a2)
{
  CHybridPropertyStore::~CHybridPropertyStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
