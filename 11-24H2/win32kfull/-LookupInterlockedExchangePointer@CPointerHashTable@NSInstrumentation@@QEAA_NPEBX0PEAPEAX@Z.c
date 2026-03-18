/*
 * XREFs of ?LookupInterlockedExchangePointer@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0PEAPEAX@Z @ 0x140268A00
 * Callers:
 *     GreNotifyHwndDpiDirty @ 0x140101A6C (GreNotifyHwndDpiDirty.c)
 * Callees:
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400B2490 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3CE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3D30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::LookupInterlockedExchangePointer(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        __int64 a3,
        void **a4)
{
  struct NSInstrumentation::CPointerHashTable::ENTRY *v8; // rax
  char v9; // bl

  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  v8 = NSInstrumentation::CPointerHashTable::LookupCommon(this, a2);
  v9 = 0;
  if ( v8 )
  {
    *a4 = (void *)_InterlockedExchange64((volatile __int64 *)v8 + 1, a3);
    v9 = 1;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v9;
}
