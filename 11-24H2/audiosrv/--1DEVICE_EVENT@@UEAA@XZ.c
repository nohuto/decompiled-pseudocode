/*
 * XREFs of ??1DEVICE_EVENT@@UEAA@XZ @ 0x1800636DC
 * Callers:
 *     ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x1800636A0 (--_GDEVICE_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x180063710 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 */

void __fastcall DEVICE_EVENT::~DEVICE_EVENT(DEVICE_EVENT *this)
{
  *(_QWORD *)this = &DEVICE_EVENT::`vftable';
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>((char *)this + 16);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
