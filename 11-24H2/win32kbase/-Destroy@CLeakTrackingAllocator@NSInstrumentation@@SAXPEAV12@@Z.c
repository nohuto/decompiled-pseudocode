/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401980D0
 * Callers:
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x140197FE4 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401CFF50 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x14013D48C (-PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ.c)
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x140198110 (--1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *this)
{
  NSInstrumentation::CLeakTrackingAllocator::PersistState(this);
  NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(this);
  if ( *((_BYTE *)this + 144) )
    ExFreePoolWithTag(this, 0);
}
