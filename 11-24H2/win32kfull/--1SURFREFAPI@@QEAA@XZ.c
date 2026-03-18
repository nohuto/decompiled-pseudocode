/*
 * XREFs of ??1SURFREFAPI@@QEAA@XZ @ 0x1401D8C90
 * Callers:
 *     GreMakeBitmapStock @ 0x1401D6B00 (GreMakeBitmapStock.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall SURFREFAPI::~SURFREFAPI(OBJECT **this)
{
  OBJECT *v1; // rcx

  v1 = *this;
  if ( v1 )
    OBJECT::InterlockedDecrementExclusiveLockCount(v1);
}
