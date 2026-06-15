/*
 * XREFs of _Init_thread_header @ 0x1400593A0
 * Callers:
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x140005A6C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034710 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x140036840 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ?GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z @ 0x140044D40 (-GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z.c)
 * Callees:
 *     _Init_thread_wait_v2 @ 0x140059450 (_Init_thread_wait_v2.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait_v2();
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
