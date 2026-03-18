/*
 * XREFs of ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1400B3F78
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400B419C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400B2490 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3CE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3D30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

struct UmfdAllocation *__fastcall UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  NSInstrumentation::CPrioritizedWriterLock *v6; // rbp
  struct NSInstrumentation::CPointerHashTable::ENTRY *v7; // rax
  struct NSInstrumentation::CPointerHashTable::ENTRY *v8; // rbx

  v3 = 0LL;
  v5 = 0LL;
  v6 = **(NSInstrumentation::CPrioritizedWriterLock ***)(W32GetSessionState(a1, a2, a3) + 104);
  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(v6);
  v7 = NSInstrumentation::CPointerHashTable::LookupCommon(v6, a1);
  v8 = v7;
  if ( v7 )
    v5 = *((_QWORD *)v7 + 1);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v6);
  if ( v8 )
  {
    v3 = v5 - 28;
    ++*(_DWORD *)(v5 - 28);
  }
  return (struct UmfdAllocation *)v3;
}
