/*
 * XREFs of ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18006B730
 * Callers:
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800C9770 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x50);
}
