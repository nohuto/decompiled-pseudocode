/*
 * XREFs of ??_GUwpPrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804F1280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UwpPrimaryAppProxy@@UEAA@XZ @ 0x1804F1004 (--1UwpPrimaryAppProxy@@UEAA@XZ.c)
 */

void **__fastcall UwpPrimaryAppProxy::`scalar deleting destructor'(void **this, char a2)
{
  UwpPrimaryAppProxy::~UwpPrimaryAppProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
