/*
 * XREFs of ?CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14003260C
 * Callers:
 *     ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x140032464 (-CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyAudioVolumeNotificationData@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140032698 (-CopyAudioVolumeNotificationData@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CopyVolumeChangeNotification(struct APO_NOTIFICATION *a1, struct APO_NOTIFICATION *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  v4 = CopyAudioVolumeNotificationData(a1, *((struct AUDIO_VOLUME_NOTIFICATION_DATA **)a2 + 2));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
