/*
 * XREFs of ??1?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x180117360
 * Callers:
 *     ??1CMonitor@@MEAA@XZ @ 0x18011C558 (--1CMonitor@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B00D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionEve.c)
 */

__int64 __fastcall ATL::CComPtrBase<CMonitor::CMonitorNotification>::~CComPtrBase<CMonitor::CMonitorNotification>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSessionEvents>::Release(
             v2,
             a2);
  return result;
}
