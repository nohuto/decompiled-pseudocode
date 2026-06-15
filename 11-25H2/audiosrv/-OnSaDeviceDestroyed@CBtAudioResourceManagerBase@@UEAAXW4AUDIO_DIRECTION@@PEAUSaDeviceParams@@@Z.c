/*
 * XREFs of ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUSaDeviceParams@@@Z @ 0x1800D9620
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z @ 0x1800DD370 (-UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z.c)
 */

void __fastcall CBtAudioResourceManagerBase::OnSaDeviceDestroyed(CBtAudioResourceManagerBase *a1, int a2)
{
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  int v4; // eax
  struct CSerialWorkQueue *v5; // rax
  int v6; // eax
  __int64 (__fastcall **v7)(); // [rsp+20h] [rbp-40h] BYREF
  CBtAudioResourceManagerBase *v8; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v9)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  bool v11; // [rsp+78h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    *((_DWORD *)a1 + 122) = 0;
    SerialWorkQueue = GetSerialWorkQueue();
    v8 = a1;
    v7 = off_180171F88;
    v9 = &v7;
    v4 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v7);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        889LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    *((_DWORD *)a1 + 121) = 0;
  }
  v11 = 0;
  CBtAudioResourceManagerBase::UpdateCurrentGameOperatingMode(a1, &v11);
  if ( v11 )
  {
    v5 = GetSerialWorkQueue();
    v8 = a1;
    v7 = off_180171F58;
    v9 = &v7;
    v6 = CSerialWorkQueue::QueueWorkItem((__int64)v5, (__int64 *)&v7);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        904LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v6);
  }
}
