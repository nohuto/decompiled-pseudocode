/*
 * XREFs of ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B2430
 * Callers:
 *     GrepIsWindowGdiScaled @ 0x1400B23A0 (GrepIsWindowGdiScaled.c)
 *     GreHintDCWnd @ 0x1400CDA90 (GreHintDCWnd.c)
 *     ?GrepGetHwndDpiBucket@@YA_NAEBUSESSION_GLOBALS@Full@Gre@@PEAUHWND__@@PEAUHWND_LOGPIXELS_BUCKET@@@Z @ 0x140101C6C (-GrepGetHwndDpiBucket@@YA_NAEBUSESSION_GLOBALS@Full@Gre@@PEAUHWND__@@PEAUHWND_LOGPIXELS_BUCKET@@.c)
 * Callees:
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400B2490 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3CE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3D30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Lookup(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        void **a3)
{
  struct NSInstrumentation::CPointerHashTable::ENTRY *v6; // rax
  char v7; // bl

  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  v6 = NSInstrumentation::CPointerHashTable::LookupCommon(this, a2);
  v7 = 0;
  if ( v6 )
  {
    v7 = 1;
    *a3 = (void *)*((_QWORD *)v6 + 1);
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v7;
}
