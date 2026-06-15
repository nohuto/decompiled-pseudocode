/*
 * XREFs of ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x180019054
 * Callers:
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18000F7E0 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x1800169D0 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)2);
}
